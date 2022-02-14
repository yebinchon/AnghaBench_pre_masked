
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nv {int dummy; } ;
struct hast_resource {int hr_ctrl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct nv**) ;
 int FUNC_1 (struct hast_resource*,int ,struct nv*,int *,int ) ;
 int FUNC_2 (struct nv*,int,char*) ;
 int FUNC_3 (struct nv*,char const*,char*,unsigned int) ;
 int FUNC_4 (struct nv*,int ,char*,unsigned int) ;
 int FUNC_5 (struct nv*,int ,char*,unsigned int) ;
 int FUNC_6 (struct nv*,int ,char*) ;
 struct nv* FUNC_7 () ;
 int FUNC_8 (struct nv*) ;
 int FUNC_9 (struct nv*) ;
 int FUNC_10 (struct nv*,char*) ;
 char* FUNC_11 (struct nv*,char*) ;
 int FUNC_12 (struct nv*,char*) ;
 int FUNC_13 (struct nv*,char*) ;
 int FUNC_14 (int ,int ,int,char*) ;
 int FUNC_15 (int ,char*) ;

__attribute__((used)) static void
FUNC_16(struct hast_resource *VAR_4, struct nv *VAR_5,
    unsigned int VAR_6)
{
 struct nv *VAR_7, *VAR_8;
 const char *VAR_9;
 int VAR_10;

 VAR_7 = ((void*)0);




 VAR_8 = FUNC_7();
 FUNC_6(VAR_8, VAR_0, "cmd");
 VAR_10 = FUNC_8(VAR_8);
 if (VAR_10 != 0) {
  FUNC_14(VAR_2, 0, VAR_10,
      "Unable to prepare control header");
  goto end;
 }
 if (FUNC_1(VAR_4, VAR_4->hr_ctrl, VAR_8, ((void*)0), 0) == -1) {
  VAR_10 = VAR_3;
  FUNC_15(VAR_2, "Unable to send control header");
  goto end;
 }




 if (FUNC_0(VAR_4->hr_ctrl, &VAR_7) == -1) {
  VAR_10 = VAR_3;
  FUNC_15(VAR_2, "Unable to receive control header");
  goto end;
 }

 VAR_10 = FUNC_10(VAR_7, "error");
 if (VAR_10 != 0)
  goto end;

 if ((VAR_9 = FUNC_11(VAR_7, "status")) == ((void*)0)) {
  VAR_10 = VAR_1;
  FUNC_15(VAR_2, "Field 'status' is missing.");
  goto end;
 }
 FUNC_3(VAR_5, VAR_9, "status%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "dirty"), "dirty%u", VAR_6);
 FUNC_4(VAR_5, FUNC_12(VAR_7, "extentsize"),
     "extentsize%u", VAR_6);
 FUNC_4(VAR_5, FUNC_12(VAR_7, "keepdirty"),
     "keepdirty%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "stat_read"),
     "stat_read%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "stat_write"),
     "stat_write%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "stat_delete"),
     "stat_delete%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "stat_flush"),
     "stat_flush%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "stat_activemap_update"),
     "stat_activemap_update%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "stat_read_error"),
     "stat_read_error%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "stat_write_error"),
     "stat_write_error%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "stat_delete_error"),
     "stat_delete_error%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "stat_flush_error"),
     "stat_flush_error%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "idle_queue_size"),
     "idle_queue_size%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "local_queue_size"),
     "local_queue_size%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "send_queue_size"),
     "send_queue_size%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "recv_queue_size"),
     "recv_queue_size%u", VAR_6);
 FUNC_5(VAR_5, FUNC_13(VAR_7, "done_queue_size"),
     "done_queue_size%u", VAR_6);
end:
 if (VAR_7 != ((void*)0))
  FUNC_9(VAR_7);
 if (VAR_8 != ((void*)0))
  FUNC_9(VAR_8);
 if (VAR_10 != 0)
  FUNC_2(VAR_5, VAR_10, "error");
}
