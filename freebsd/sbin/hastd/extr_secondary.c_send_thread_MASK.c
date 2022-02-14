
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {int dummy; } ;
struct hio {int hio_cmd; scalar_t__ hio_error; size_t hio_length; void* hio_data; scalar_t__ hio_memsync; int hio_seq; } ;
struct hast_resource {int hr_remoteout; int hr_stat_flush_error; int hr_stat_delete_error; int hr_stat_write_error; int hr_stat_read_error; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,struct hio*) ;
 int FUNC_3 (int ,struct hio*) ;
 int VAR_2 ;
 int FUNC_4 (struct hast_resource*,int ,struct nv*,void*,size_t) ;
 int FUNC_5 (struct hio*) ;
 int FUNC_6 (struct nv*,scalar_t__,char*) ;
 int FUNC_7 (struct nv*,int,char*) ;
 int FUNC_8 (struct nv*,int ,char*) ;
 struct nv* FUNC_9 () ;
 int FUNC_10 (struct nv*) ;
 int FUNC_11 (int,char*,...) ;
 int FUNC_12 (int ,int,int,struct hio*,char*,struct hio*) ;
 int FUNC_13 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void *
FUNC_14(void *VAR_4)
{
 struct hast_resource *VAR_5 = VAR_4;
 struct nv *VAR_6;
 struct hio *VAR_7;
 void *VAR_8;
 size_t VAR_9;

 for (;;) {
  FUNC_11(2, "send: Taking request.");
  FUNC_3(VAR_3, VAR_7);
  FUNC_12(VAR_1, 2, -1, VAR_7, "send: (%p) Got request: ", VAR_7);
  VAR_6 = FUNC_9();

  FUNC_8(VAR_6, VAR_7->hio_seq, "seq");
  if (VAR_7->hio_memsync) {
   FUNC_1(VAR_7->hio_cmd == 128);
   FUNC_7(VAR_6, 1, "received");
  }
  switch (VAR_7->hio_cmd) {
  case 129:
   if (VAR_7->hio_error == 0) {
    VAR_8 = VAR_7->hio_data;
    VAR_9 = VAR_7->hio_length;
    break;
   }




  case 131:
  case 130:
  case 128:
   VAR_8 = ((void*)0);
   VAR_9 = 0;
   break;
  default:
   FUNC_0("Unexpected command (cmd=%hhu).",
       VAR_7->hio_cmd);
  }
  if (VAR_7->hio_error != 0) {
   switch (VAR_7->hio_cmd) {
   case 129:
    VAR_5->hr_stat_read_error++;
    break;
   case 128:
    VAR_5->hr_stat_write_error++;
    break;
   case 131:
    VAR_5->hr_stat_delete_error++;
    break;
   case 130:
    VAR_5->hr_stat_flush_error++;
    break;
   }
   FUNC_6(VAR_6, VAR_7->hio_error, "error");
  }
  if (FUNC_4(VAR_5, VAR_5->hr_remoteout, VAR_6, VAR_8,
      VAR_9) == -1) {
   FUNC_13(VAR_0, "Unable to send reply");
  }
  FUNC_10(VAR_6);
  FUNC_11(2, "send: (%p) Moving request to the free queue.",
      VAR_7);
  FUNC_5(VAR_7);
  FUNC_2(VAR_2, VAR_7);
 }

 return (((void*)0));
}
