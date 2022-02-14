
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int * gcry_mpi_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int const*,size_t,int const*,size_t,int const*,size_t,int *,size_t*) ;
 scalar_t__ FUNC_1 (int *,int) ;
 int * FUNC_2 (size_t) ;
 int FUNC_3 (int *,int *,int *,int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int **,int ,int const*,size_t,int *) ;
 scalar_t__ FUNC_6 (int const*,int const*,size_t) ;

int FUNC_7(u8 VAR_2, const u8 *VAR_3, size_t VAR_4,
       const u8 *VAR_5, size_t VAR_6,
       const u8 *VAR_7, size_t VAR_8,
       const u8 *VAR_9, size_t VAR_10,
       u8 *VAR_11, size_t *VAR_12)
{
 gcry_mpi_t VAR_13 = ((void*)0);
 int VAR_14 = -1;

 if (VAR_10 > VAR_4 ||
     (VAR_10 == VAR_4 &&
      FUNC_6(VAR_9, VAR_3, VAR_4) >= 0))
  return -1;

 if (FUNC_5(&VAR_13, VAR_0, VAR_9, VAR_10, ((void*)0)) !=
     VAR_1 ||
     FUNC_1(VAR_13, 1) <= 0)
  goto fail;

 if (VAR_5) {
  gcry_mpi_t VAR_15 = ((void*)0), VAR_16 = ((void*)0), VAR_17;
  int VAR_18;


  VAR_17 = FUNC_2(VAR_4 * 8);
  VAR_18 = !VAR_17 ||
   FUNC_5(&VAR_15, VAR_0, VAR_3, VAR_4,
          ((void*)0)) != VAR_1 ||
   FUNC_5(&VAR_16, VAR_0, VAR_5, VAR_6,
          ((void*)0)) != VAR_1;
  if (!VAR_18) {
   FUNC_3(VAR_17, VAR_13, VAR_16, VAR_15);
   VAR_18 = FUNC_1(VAR_17, 1) != 0;
  }
  FUNC_4(VAR_15);
  FUNC_4(VAR_16);
  FUNC_4(VAR_17);
  if (VAR_18)
   goto fail;
 }

 VAR_14 = FUNC_0(VAR_9, VAR_10, VAR_7, VAR_8,
        VAR_3, VAR_4, VAR_11, VAR_12);
fail:
 FUNC_4(VAR_13);
 return VAR_14;
}
