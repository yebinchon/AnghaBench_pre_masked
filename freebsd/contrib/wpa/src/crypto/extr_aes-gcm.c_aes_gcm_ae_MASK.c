
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int S ;


 int VAR_0 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int *,int const*,size_t,int *) ;
 int FUNC_2 (int *,int const*,size_t,int *,size_t,int *) ;
 void* FUNC_3 (int const*,size_t,int *) ;
 int FUNC_4 (int const*,size_t,int *,int *) ;
 int FUNC_5 (void*,int *,int *,int,int *) ;

int FUNC_6(const u8 *VAR_1, size_t VAR_2, const u8 *VAR_3, size_t VAR_4,
        const u8 *VAR_5, size_t VAR_6,
        const u8 *VAR_7, size_t VAR_8, u8 *VAR_9, u8 *VAR_10)
{
 u8 VAR_11[VAR_0];
 u8 VAR_12[VAR_0];
 u8 VAR_13[16];
 void *VAR_14;

 VAR_14 = FUNC_3(VAR_1, VAR_2, VAR_11);
 if (VAR_14 == ((void*)0))
  return -1;

 FUNC_4(VAR_3, VAR_4, VAR_11, VAR_12);


 FUNC_1(VAR_14, VAR_12, VAR_5, VAR_6, VAR_9);

 FUNC_2(VAR_11, VAR_7, VAR_8, VAR_9, VAR_6, VAR_13);


 FUNC_5(VAR_14, VAR_12, VAR_13, sizeof(VAR_13), VAR_10);



 FUNC_0(VAR_14);

 return 0;
}
