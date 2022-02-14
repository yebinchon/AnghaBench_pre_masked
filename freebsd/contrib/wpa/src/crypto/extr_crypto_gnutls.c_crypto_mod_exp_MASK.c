
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int * gcry_mpi_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,int *,int *,int *) ;
 scalar_t__ FUNC_2 (int ,int *,size_t,size_t*,int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int **,int ,int const*,size_t,int *) ;

int FUNC_5(const u8 *VAR_2, size_t VAR_3,
     const u8 *VAR_4, size_t VAR_5,
     const u8 *VAR_6, size_t VAR_7,
     u8 *VAR_8, size_t *VAR_9)
{
 gcry_mpi_t VAR_10 = ((void*)0), VAR_11 = ((void*)0), VAR_12 = ((void*)0),
  VAR_13 = ((void*)0);
 int VAR_14 = -1;

 if (FUNC_4(&VAR_10, VAR_0, VAR_2, VAR_3, ((void*)0)) !=
     VAR_1 ||
     FUNC_4(&VAR_11, VAR_0, VAR_4, VAR_5, ((void*)0)) !=
     VAR_1 ||
     FUNC_4(&VAR_12, VAR_0, VAR_6, VAR_7,
     ((void*)0)) != VAR_1)
  goto error;
 VAR_13 = FUNC_0(VAR_7 * 8);

 FUNC_1(VAR_13, VAR_10, VAR_11, VAR_12);

 if (FUNC_2(VAR_0, VAR_8, *VAR_9, VAR_9,
      VAR_13) != VAR_1)
  goto error;

 VAR_14 = 0;

error:
 FUNC_3(VAR_10);
 FUNC_3(VAR_11);
 FUNC_3(VAR_12);
 FUNC_3(VAR_13);
 return VAR_14;
}
