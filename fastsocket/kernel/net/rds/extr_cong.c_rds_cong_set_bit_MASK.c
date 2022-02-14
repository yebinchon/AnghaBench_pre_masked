
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_cong_map {scalar_t__* m_page_addrs; int m_addr; } ;
typedef int __be16 ;


 unsigned long VAR_0 ;
 int FUNC_0 (unsigned long,void*) ;
 unsigned long FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,int *,int ,struct rds_cong_map*) ;

void FUNC_4(struct rds_cong_map *VAR_1, __be16 VAR_2)
{
 unsigned long VAR_3;
 unsigned long VAR_4;

 FUNC_3("setting congestion for %pI4:%u in map %p\n",
   &VAR_1->m_addr, FUNC_2(VAR_2), VAR_1);

 VAR_3 = FUNC_1(VAR_2) / VAR_0;
 VAR_4 = FUNC_1(VAR_2) % VAR_0;

 FUNC_0(VAR_4, (void *)VAR_1->m_page_addrs[VAR_3]);
}
