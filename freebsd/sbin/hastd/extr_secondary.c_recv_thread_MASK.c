
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {int dummy; } ;
struct hio {int hio_cmd; int hio_memsync; scalar_t__ hio_error; int hio_data; } ;
struct hast_resource {int hr_remotein; int hr_stat_flush; int hr_stat_delete; int hr_stat_write; int hr_stat_read; } ;


 int VAR_0 ;





 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ,struct hio*) ;
 int FUNC_2 (int ,struct hio*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct hast_resource*,int ,struct nv*,int ,int ) ;
 int FUNC_4 (int ,struct nv**) ;
 int FUNC_5 (struct hio*) ;
 int FUNC_6 (struct hio*,struct hio*) ;
 int FUNC_7 (struct nv*) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int ,int,int,struct hio*,char*,struct hio*) ;
 scalar_t__ FUNC_10 (struct hast_resource*,struct hio*,struct nv*) ;
 int FUNC_11 (int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static void *
FUNC_12(void *VAR_6)
{
 struct hast_resource *VAR_7 = VAR_6;
 struct hio *VAR_8, *VAR_9;
 struct nv *VAR_10;

 for (;;) {
  FUNC_8(2, "recv: Taking free request.");
  FUNC_2(VAR_4, VAR_8);
  FUNC_8(2, "recv: (%p) Got request.", VAR_8);
  if (FUNC_4(VAR_7->hr_remotein, &VAR_10) == -1) {
   FUNC_11(VAR_0,
       "Unable to receive request header");
  }
  if (FUNC_10(VAR_7, VAR_8, VAR_10) != 0) {
   FUNC_7(VAR_10);
   FUNC_8(2,
       "recv: (%p) Moving request to the send queue.",
       VAR_8);
   FUNC_1(VAR_5, VAR_8);
   continue;
  }
  switch (VAR_8->hio_cmd) {
  case 129:
   VAR_7->hr_stat_read++;
   break;
  case 128:
   VAR_7->hr_stat_write++;
   break;
  case 132:
   VAR_7->hr_stat_delete++;
   break;
  case 131:
   VAR_7->hr_stat_flush++;
   break;
  case 130:
   break;
  default:
   FUNC_0("Unexpected command (cmd=%hhu).",
       VAR_8->hio_cmd);
  }
  FUNC_9(VAR_1, 2, -1, VAR_8,
      "recv: (%p) Got request header: ", VAR_8);
  if (VAR_8->hio_cmd == 130) {
   FUNC_7(VAR_10);
   FUNC_8(2,
       "recv: (%p) Moving request to the free queue.",
       VAR_8);
   FUNC_5(VAR_8);
   FUNC_1(VAR_4, VAR_8);
   continue;
  } else if (VAR_8->hio_cmd == 128) {
   if (FUNC_3(VAR_7, VAR_7->hr_remotein, VAR_10,
       VAR_8->hio_data, VAR_2) == -1) {
    FUNC_11(VAR_0,
        "Unable to receive request data");
   }
   if (VAR_8->hio_memsync) {




    FUNC_8(2, "recv: Taking free request.");
    FUNC_2(VAR_4, VAR_9);
    FUNC_8(2, "recv: (%p) Got request.",
        VAR_9);
    FUNC_6(VAR_8, VAR_9);
    VAR_9->hio_error = 0;




    VAR_8->hio_memsync = 0;
    FUNC_8(2,
        "recv: (%p) Moving memsync request to the send queue.",
        VAR_9);
    FUNC_1(VAR_5, VAR_9);
   }
  }
  FUNC_7(VAR_10);
  FUNC_8(2, "recv: (%p) Moving request to the disk queue.",
      VAR_8);
  FUNC_1(VAR_3, VAR_8);
 }

 return (((void*)0));
}
