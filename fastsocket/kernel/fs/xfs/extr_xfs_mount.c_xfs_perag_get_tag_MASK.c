
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xfs_agnumber_t ;
struct xfs_perag {int pag_agno; int pag_ref; } ;
struct xfs_mount {int m_perag_tree; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,void**,int ,int,int) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct xfs_mount*,int ,int,int ) ;

struct xfs_perag *
FUNC_5(
 struct xfs_mount *VAR_1,
 xfs_agnumber_t VAR_2,
 int VAR_3)
{
 struct xfs_perag *VAR_4;
 int VAR_5;
 int VAR_6;

 FUNC_2();
 VAR_5 = FUNC_1(&VAR_1->m_perag_tree,
     (void **)&VAR_4, VAR_2, 1, VAR_3);
 if (VAR_5 <= 0) {
  FUNC_3();
  return ((void*)0);
 }
 VAR_6 = FUNC_0(&VAR_4->pag_ref);
 FUNC_3();
 FUNC_4(VAR_1, VAR_4->pag_agno, VAR_6, VAR_0);
 return VAR_4;
}
