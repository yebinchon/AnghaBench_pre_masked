
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rds_cong_map {unsigned long* m_page_addrs; int m_conn_list; int m_waitq; int m_addr; } ;
typedef int __be32 ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 unsigned long VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (unsigned long) ;
 unsigned long FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct rds_cong_map*) ;
 struct rds_cong_map* FUNC_6 (int,int ) ;
 int VAR_2 ;
 struct rds_cong_map* FUNC_7 (int ,struct rds_cong_map*) ;
 int FUNC_8 (char*,struct rds_cong_map*,int ) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

__attribute__((used)) static struct rds_cong_map *FUNC_11(__be32 VAR_3)
{
 struct rds_cong_map *VAR_4;
 struct rds_cong_map *VAR_5 = ((void*)0);
 unsigned long VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;

 VAR_4 = FUNC_6(sizeof(struct rds_cong_map), VAR_0);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->m_addr = VAR_3;
 FUNC_4(&VAR_4->m_waitq);
 FUNC_0(&VAR_4->m_conn_list);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++) {
  VAR_6 = FUNC_3(VAR_0);
  if (VAR_6 == 0)
   goto out;
  VAR_4->m_page_addrs[VAR_7] = VAR_6;
 }

 FUNC_9(&VAR_2, VAR_8);
 VAR_5 = FUNC_7(VAR_3, VAR_4);
 FUNC_10(&VAR_2, VAR_8);

 if (!VAR_5) {
  VAR_5 = VAR_4;
  VAR_4 = ((void*)0);
 }

out:
 if (VAR_4) {
  for (VAR_7 = 0; VAR_7 < VAR_1 && VAR_4->m_page_addrs[VAR_7]; VAR_7++)
   FUNC_2(VAR_4->m_page_addrs[VAR_7]);
  FUNC_5(VAR_4);
 }

 FUNC_8("map %p for addr %x\n", VAR_5, FUNC_1(VAR_3));

 return VAR_5;
}
