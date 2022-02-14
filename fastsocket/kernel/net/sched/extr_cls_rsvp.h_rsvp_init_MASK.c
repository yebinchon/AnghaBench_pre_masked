
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {struct rsvp_head* root; } ;
struct rsvp_head {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct rsvp_head* FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct tcf_proto *VAR_2)
{
 struct rsvp_head *VAR_3;

 VAR_3 = FUNC_0(sizeof(struct rsvp_head), VAR_1);
 if (VAR_3) {
  VAR_2->root = VAR_3;
  return 0;
 }
 return -VAR_0;
}
