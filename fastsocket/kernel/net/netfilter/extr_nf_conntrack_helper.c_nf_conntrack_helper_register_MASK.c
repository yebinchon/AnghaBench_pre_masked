
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nf_conntrack_helper {scalar_t__ expect_class_max; int hnode; int name; int * expect_policy; int tuple; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (int ) ;

int FUNC_6(struct nf_conntrack_helper *VAR_5)
{
 unsigned int VAR_6 = FUNC_1(&VAR_5->tuple);

 FUNC_0(VAR_5->expect_policy == ((void*)0));
 FUNC_0(VAR_5->expect_class_max >= VAR_1);
 FUNC_0(FUNC_5(VAR_5->name) > VAR_0 - 1);

 FUNC_3(&VAR_4);
 FUNC_2(&VAR_5->hnode, &VAR_3[VAR_6]);
 VAR_2++;
 FUNC_4(&VAR_4);

 return 0;
}
