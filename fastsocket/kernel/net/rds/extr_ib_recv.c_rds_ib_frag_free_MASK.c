
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_page_frag {int f_cache_entry; int f_sg; } ;
struct rds_ib_connection {int i_cache_frags; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (char*,struct rds_page_frag*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct rds_ib_connection *VAR_0,
        struct rds_page_frag *VAR_1)
{
 FUNC_1("frag %p page %p\n", VAR_1, FUNC_2(&VAR_1->f_sg));

 FUNC_0(&VAR_1->f_cache_entry, &VAR_0->i_cache_frags);
}
