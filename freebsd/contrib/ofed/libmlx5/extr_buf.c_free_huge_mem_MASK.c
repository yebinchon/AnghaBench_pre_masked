
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_hugetlb_mem {int shmid; int shmaddr; int bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_hugetlb_mem*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int ,char*,int ) ;
 int FUNC_3 (int ,int ,int *) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct mlx5_hugetlb_mem *VAR_4)
{
 FUNC_1(&VAR_4->bitmap);
 if (FUNC_4(VAR_4->shmaddr) == -1)
  FUNC_2(VAR_3, VAR_1, "%s\n", FUNC_5(VAR_2));
 FUNC_3(VAR_4->shmid, VAR_0, ((void*)0));
 FUNC_0(VAR_4);
}
