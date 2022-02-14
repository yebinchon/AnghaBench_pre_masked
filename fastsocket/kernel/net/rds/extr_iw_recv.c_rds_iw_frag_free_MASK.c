
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_page_frag {int f_page; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,struct rds_page_frag*) ;
 int VAR_0 ;
 int FUNC_2 (char*,struct rds_page_frag*,int ) ;

__attribute__((used)) static void FUNC_3(struct rds_page_frag *VAR_1)
{
 FUNC_2("frag %p page %p\n", VAR_1, VAR_1->f_page);
 FUNC_0(VAR_1->f_page);
 FUNC_1(VAR_0, VAR_1);
}
