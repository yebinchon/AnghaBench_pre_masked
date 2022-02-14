
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tcf_proto {struct basic_head* root; } ;
struct basic_head {int flist; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct basic_head* FUNC_1 (int,int ) ;

__attribute__((used)) static int FUNC_2(struct tcf_proto *VAR_2)
{
 struct basic_head *VAR_3;

 VAR_3 = FUNC_1(sizeof(*VAR_3), VAR_1);
 if (VAR_3 == ((void*)0))
  return -VAR_0;
 FUNC_0(&VAR_3->flist);
 VAR_2->root = VAR_3;
 return 0;
}
