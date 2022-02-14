
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {int dummy; } ;
struct tcf_ematch {scalar_t__ data; } ;
struct meta_match {int dummy; } ;


 int FUNC_0 (struct meta_match*) ;

__attribute__((used)) static void FUNC_1(struct tcf_proto *VAR_0, struct tcf_ematch *VAR_1)
{
 if (VAR_1)
  FUNC_0((struct meta_match *) VAR_1->data);
}
