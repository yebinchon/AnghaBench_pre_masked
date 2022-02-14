
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int fsts_id; int * new_iface; int * old_iface; } ;
struct fst_session {TYPE_1__ data; int group; int state; } ;
struct fst_ack_req {int fsts_id; int dialog_token; int action; } ;
typedef int req ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct fst_session*,int ,char*,int ,...) ;
 int FUNC_4 (struct fst_session*,int ,int ,char*) ;
 int FUNC_5 (struct fst_session*) ;
 int FUNC_6 (struct fst_session*,int ,struct fst_ack_req*,int,int *) ;
 int FUNC_7 (struct fst_session*,int ,int *) ;
 int FUNC_8 (struct fst_session*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct fst_ack_req*,int ,int) ;

int FUNC_11(struct fst_session *VAR_5)
{
 struct fst_ack_req VAR_6;
 int VAR_7;
 u8 VAR_8;

 if (!FUNC_5(VAR_5)) {
  FUNC_3(VAR_5, VAR_3,
       "cannot initiate switch due to wrong setup state (%d)",
       VAR_5->state);
  return -1;
 }

 VAR_8 = FUNC_1(VAR_5->group);

 FUNC_0(VAR_5->data.new_iface != ((void*)0));
 FUNC_0(VAR_5->data.old_iface != ((void*)0));

 FUNC_3(VAR_5, VAR_4, "initiating FST switch: %s => %s",
      FUNC_2(VAR_5->data.old_iface),
      FUNC_2(VAR_5->data.new_iface));

 FUNC_10(&VAR_6, 0, sizeof(VAR_6));

 VAR_6.action = VAR_1;
 VAR_6.dialog_token = VAR_8;
 VAR_6.fsts_id = FUNC_9(VAR_5->data.fsts_id);

 VAR_7 = FUNC_6(VAR_5, VAR_0, &VAR_6, sizeof(VAR_6), ((void*)0));
 if (!VAR_7) {
  FUNC_4(VAR_5, VAR_0, VAR_4, "FST Ack Request sent");
  FUNC_7(VAR_5, VAR_2,
          ((void*)0));
  FUNC_8(VAR_5);
 } else {
  FUNC_4(VAR_5, VAR_0, VAR_3,
      "Cannot send FST Ack Request");
 }

 return VAR_7;
}
