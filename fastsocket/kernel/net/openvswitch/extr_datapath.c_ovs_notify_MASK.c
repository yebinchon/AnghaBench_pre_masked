
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct genl_multicast_group {int id; } ;
struct genl_info {int nlhdr; int snd_pid; } ;


 int VAR_0 ;
 int FUNC_0 (struct genl_info*) ;
 int FUNC_1 (struct sk_buff*,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_1, struct genl_info *VAR_2,
         struct genl_multicast_group *VAR_3)
{
 FUNC_1(VAR_1, FUNC_0(VAR_2), VAR_2->snd_pid,
      VAR_3->id, VAR_2->nlhdr, VAR_0);
}
