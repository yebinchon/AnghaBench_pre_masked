
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int proto; } ;
struct xfrm_state {TYPE_1__ id; } ;
struct sk_buff {scalar_t__ data; } ;
struct sadb_msg {int sadb_msg_pid; int sadb_msg_seq; scalar_t__ sadb_msg_reserved; scalar_t__ sadb_msg_errno; int sadb_msg_satype; int sadb_msg_type; int sadb_msg_version; } ;
struct km_event {int pid; int seq; int event; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_2 ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*,int ,int ,int *,int ) ;
 int FUNC_4 (int ) ;
 struct sk_buff* FUNC_5 (struct xfrm_state*) ;
 int FUNC_6 (struct xfrm_state*) ;

__attribute__((used)) static int FUNC_7(struct xfrm_state *VAR_3, struct km_event *VAR_4)
{
 struct sk_buff *VAR_5;
 struct sadb_msg *VAR_6;

 VAR_5 = FUNC_5(VAR_3);

 if (FUNC_0(VAR_5))
  return FUNC_1(VAR_5);

 VAR_6 = (struct sadb_msg *) VAR_5->data;
 VAR_6->sadb_msg_version = VAR_2;
 VAR_6->sadb_msg_type = FUNC_2(VAR_4->event);
 VAR_6->sadb_msg_satype = FUNC_4(VAR_3->id.proto);
 VAR_6->sadb_msg_errno = 0;
 VAR_6->sadb_msg_reserved = 0;
 VAR_6->sadb_msg_seq = VAR_4->seq;
 VAR_6->sadb_msg_pid = VAR_4->pid;

 FUNC_3(VAR_5, VAR_1, VAR_0, ((void*)0), FUNC_6(VAR_3));

 return 0;
}
