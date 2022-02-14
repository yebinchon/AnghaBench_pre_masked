
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mlx5_hugetlb_mem {int shmid; void* shmaddr; int bitmap; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 size_t FUNC_0 (size_t,int ) ;
 int VAR_10 ;
 int FUNC_1 (struct mlx5_hugetlb_mem*) ;
 struct mlx5_hugetlb_mem* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,size_t,size_t) ;
 int FUNC_4 (int ,int ,char*,int ) ;
 void* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (int,int ,int *) ;
 int FUNC_7 (void*) ;
 int FUNC_8 (int ,size_t,int) ;
 int VAR_11 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static struct mlx5_hugetlb_mem *FUNC_10(size_t VAR_12)
{
 struct mlx5_hugetlb_mem *VAR_13;
 size_t VAR_14;

 VAR_13 = FUNC_2(sizeof(*VAR_13));
 if (!VAR_13)
  return ((void*)0);

 VAR_14 = FUNC_0(VAR_12, VAR_6);
 VAR_13->shmid = FUNC_8(VAR_0, VAR_14, VAR_7 | VAR_8 | VAR_9);
 if (VAR_13->shmid == -1) {
  FUNC_4(VAR_11, VAR_2, "%s\n", FUNC_9(VAR_10));
  goto out_free;
 }

 VAR_13->shmaddr = FUNC_5(VAR_13->shmid, VAR_5, VAR_4);
 if (VAR_13->shmaddr == (void *)-1) {
  FUNC_4(VAR_11, VAR_2, "%s\n", FUNC_9(VAR_10));
  goto out_rmid;
 }

 if (FUNC_3(&VAR_13->bitmap, VAR_14 / VAR_3,
        VAR_14 / VAR_3 - 1)) {
  FUNC_4(VAR_11, VAR_2, "%s\n", FUNC_9(VAR_10));
  goto out_shmdt;
 }




 FUNC_6(VAR_13->shmid, VAR_1, ((void*)0));

 return VAR_13;

out_shmdt:
 if (FUNC_7(VAR_13->shmaddr) == -1)
  FUNC_4(VAR_11, VAR_2, "%s\n", FUNC_9(VAR_10));

out_rmid:
 FUNC_6(VAR_13->shmid, VAR_1, ((void*)0));

out_free:
 FUNC_1(VAR_13);
 return ((void*)0);
}
