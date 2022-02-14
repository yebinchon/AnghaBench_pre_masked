
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct link {scalar_t__ exp_msg_count; int reset_checkpoint; int name; int next_in_no; TYPE_2__* b_ptr; TYPE_1__* owner; } ;
struct TYPE_4__ {int net_plane; } ;
struct TYPE_3__ {struct link** links; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct sk_buff*) ;
 struct sk_buff* FUNC_1 (struct sk_buff*,int ) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,scalar_t__,...) ;
 int FUNC_4 (struct link*,char*) ;
 int FUNC_5 (char*,int ) ;
 int FUNC_6 (char*,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 (int ) ;
 size_t FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*,char*) ;
 struct tipc_msg* FUNC_11 (struct tipc_msg*) ;
 scalar_t__ FUNC_12 (struct tipc_msg*) ;
 int FUNC_13 (struct tipc_msg*) ;
 scalar_t__ FUNC_14 (struct tipc_msg*) ;
 scalar_t__ FUNC_15 (struct link*) ;
 int FUNC_16 (struct link*) ;
 int FUNC_17 (char*) ;

__attribute__((used)) static int FUNC_18(struct link **VAR_3,
        struct sk_buff **VAR_4)
{
 struct sk_buff *VAR_5 = *VAR_4;
 struct link *VAR_6;
 struct tipc_msg *VAR_7;
 struct tipc_msg *VAR_8 = FUNC_2(VAR_5);
 u32 VAR_9 = FUNC_14(VAR_8);
 u32 VAR_10 = FUNC_12(VAR_8);

 VAR_6 = (*VAR_3)->owner->links[FUNC_9(VAR_8)];
 if (!VAR_6) {
  FUNC_10(VAR_8, "NOLINK/<REC<");
  goto exit;
 }
 if (VAR_6 == *VAR_3) {
  FUNC_5("Unexpected changeover message on link <%s>\n",
      (*VAR_3)->name);
  goto exit;
 }
 FUNC_3("%c<-%c:", VAR_6->b_ptr->net_plane,
     (*VAR_3)->b_ptr->net_plane);
 *VAR_3 = VAR_6;
 VAR_7 = FUNC_11(VAR_8);

 if (VAR_9 == VAR_0) {
  if (FUNC_7(FUNC_13(VAR_7), FUNC_8(VAR_6->next_in_no))) {
   FUNC_10(VAR_8, "DROP/<REC<");
   goto exit;
  }
  *VAR_4 = FUNC_1(VAR_5,VAR_1);
  if (*VAR_4 == ((void*)0)) {
   FUNC_17("Link changeover error, duplicate msg dropped\n");
   goto exit;
  }
  FUNC_10(VAR_8, "TNL<REC<");
  FUNC_0(VAR_5);
  return 1;
 }



 if (FUNC_15(VAR_6)) {
  FUNC_10(VAR_8, "UP/FIRST/<REC<");
  FUNC_6("Resetting link <%s>, changeover initiated by peer\n",
       VAR_6->name);
  FUNC_16(VAR_6);
  VAR_6->exp_msg_count = VAR_10;
  FUNC_3("Expecting %u tunnelled messages\n", VAR_10);
  if (!VAR_10)
   goto exit;
 } else if (VAR_6->exp_msg_count == VAR_2) {
  FUNC_10(VAR_8, "BLK/FIRST/<REC<");
  VAR_6->exp_msg_count = VAR_10;
  FUNC_3("Expecting %u tunnelled messages\n", VAR_10);
  if (!VAR_10)
   goto exit;
 }



 if (VAR_6->exp_msg_count == 0) {
  FUNC_17("Link switchover error, "
       "got too many tunnelled messages\n");
  FUNC_10(VAR_8, "OVERDUE/DROP/<REC<");
  FUNC_4(VAR_6, "LINK:");
  goto exit;
 }
 VAR_6->exp_msg_count--;
 if (FUNC_7(FUNC_13(VAR_7), VAR_6->reset_checkpoint)) {
  FUNC_10(VAR_8, "DROP/DUPL/<REC<");
  goto exit;
 } else {
  *VAR_4 = FUNC_1(VAR_5, VAR_1);
  if (*VAR_4 != ((void*)0)) {
   FUNC_10(VAR_8, "TNL<REC<");
   FUNC_0(VAR_5);
   return 1;
  } else {
   FUNC_17("Link changeover error, original msg dropped\n");
  }
 }
exit:
 *VAR_4 = ((void*)0);
 FUNC_0(VAR_5);
 return 0;
}
