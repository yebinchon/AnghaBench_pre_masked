
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t word32 ;
typedef int u8 ;
typedef int DhKey ;


 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *,int *,size_t*,int const*,size_t,int const*,size_t) ;
 scalar_t__ FUNC_3 (int *,int const*,size_t,int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

int FUNC_6(u8 VAR_0, const u8 *VAR_1, size_t VAR_2,
       const u8 *VAR_3, size_t VAR_4,
       const u8 *VAR_5, size_t VAR_6,
       const u8 *VAR_7, size_t VAR_8,
       u8 *VAR_9, size_t *VAR_10)
{
 int VAR_11 = -1;
 DhKey *VAR_12;
 word32 VAR_13;

 VAR_12 = FUNC_1(sizeof(DhKey));
 if (!VAR_12)
  return -1;
 FUNC_5(VAR_12);

 if (FUNC_3(VAR_12, VAR_1, VAR_2, &VAR_0, 1) != 0)
  goto done;

 if (FUNC_2(VAR_12, VAR_9, &VAR_13, VAR_5, VAR_6, VAR_7,
         VAR_8) != 0)
  goto done;

 *VAR_10 = VAR_13;
 VAR_11 = 0;
done:
 FUNC_4(VAR_12);
 FUNC_0(VAR_12);
 return VAR_11;
}
