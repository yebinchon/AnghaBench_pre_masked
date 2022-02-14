
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t word32 ;
typedef int u8 ;
typedef int WC_RNG ;
typedef int DhKey ;


 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int) ;
 int FUNC_3 (int *,int *,size_t) ;
 int FUNC_4 (int *,int ,size_t) ;
 scalar_t__ FUNC_5 (int *,int *,int *,size_t*,int *,size_t*) ;
 scalar_t__ FUNC_6 (int *,int const*,size_t,int *,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *) ;

int FUNC_11(u8 VAR_0, const u8 *VAR_1, size_t VAR_2, u8 *VAR_3,
     u8 *VAR_4)
{
 int VAR_5 = -1;
 WC_RNG VAR_6;
 DhKey *VAR_7 = ((void*)0);
 word32 VAR_8, VAR_9;

 if (FUNC_0())
  return -1;

 VAR_7 = FUNC_2(sizeof(DhKey));
 if (!VAR_7)
  return -1;
 FUNC_9(VAR_7);

 if (FUNC_10(&VAR_6) != 0) {
  FUNC_1(VAR_7);
  return -1;
 }

 if (FUNC_6(VAR_7, VAR_1, VAR_2, &VAR_0, 1) != 0)
  goto done;

 if (FUNC_5(VAR_7, &VAR_6, VAR_3, &VAR_8, VAR_4, &VAR_9)
     != 0)
  goto done;

 if (VAR_8 < VAR_2) {
  size_t VAR_10 = VAR_2 - VAR_8;

  FUNC_3(VAR_3 + VAR_10, VAR_3, VAR_8);
  FUNC_4(VAR_3, 0, VAR_10);
 }

 if (VAR_9 < VAR_2) {
  size_t VAR_11 = VAR_2 - VAR_9;

  FUNC_3(VAR_4 + VAR_11, VAR_4, VAR_9);
  FUNC_4(VAR_4, 0, VAR_11);
 }
 VAR_5 = 0;
done:
 FUNC_7(VAR_7);
 FUNC_1(VAR_7);
 FUNC_8(&VAR_6);
 return VAR_5;
}
