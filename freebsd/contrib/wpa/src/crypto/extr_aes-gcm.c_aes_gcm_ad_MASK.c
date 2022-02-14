
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int S ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*) ;
 int FUNC_1 (void*,int *,int const*,size_t,int *) ;
 int FUNC_2 (int *,int const*,size_t,int const*,size_t,int *) ;
 void* FUNC_3 (int const*,size_t,int *) ;
 int FUNC_4 (int const*,size_t,int *,int *) ;
 int FUNC_5 (void*,int *,int *,int,int *) ;
 scalar_t__ FUNC_6 (int const*,int *,int) ;
 int FUNC_7 (int ,char*) ;

int FUNC_8(const u8 *VAR_2, size_t VAR_3, const u8 *VAR_4, size_t VAR_5,
        const u8 *VAR_6, size_t VAR_7,
        const u8 *VAR_8, size_t VAR_9, const u8 *VAR_10, u8 *VAR_11)
{
 u8 VAR_12[VAR_0];
 u8 VAR_13[VAR_0];
 u8 VAR_14[16], VAR_15[16];
 void *VAR_16;

 VAR_16 = FUNC_3(VAR_2, VAR_3, VAR_12);
 if (VAR_16 == ((void*)0))
  return -1;

 FUNC_4(VAR_4, VAR_5, VAR_12, VAR_13);


 FUNC_1(VAR_16, VAR_13, VAR_6, VAR_7, VAR_11);

 FUNC_2(VAR_12, VAR_8, VAR_9, VAR_6, VAR_7, VAR_14);


 FUNC_5(VAR_16, VAR_13, VAR_14, sizeof(VAR_14), VAR_15);

 FUNC_0(VAR_16);

 if (FUNC_6(VAR_10, VAR_15, 16) != 0) {
  FUNC_7(VAR_1, "GCM: Tag mismatch");
  return -1;
 }

 return 0;
}
