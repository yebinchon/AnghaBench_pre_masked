
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_page_frag {int * f_page; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,struct rds_page_frag*,int *) ;

__attribute__((used)) static void FUNC_2(struct rds_page_frag *VAR_0)
{
 FUNC_1("frag %p page %p\n", VAR_0, VAR_0->f_page);
 FUNC_0(VAR_0->f_page);
 VAR_0->f_page = ((void*)0);
}
