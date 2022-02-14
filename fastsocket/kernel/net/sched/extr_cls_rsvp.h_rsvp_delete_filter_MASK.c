
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct rsvp_filter {int exts; int res; } ;


 int FUNC_0 (struct rsvp_filter*) ;
 int FUNC_1 (struct tcf_proto*,int *) ;
 int FUNC_2 (struct tcf_proto*,int *) ;

__attribute__((used)) static inline void
FUNC_3(struct tcf_proto *VAR_0, struct rsvp_filter *VAR_1)
{
 FUNC_2(VAR_0, &VAR_1->res);
 FUNC_1(VAR_0, &VAR_1->exts);
 FUNC_0(VAR_1);
}
