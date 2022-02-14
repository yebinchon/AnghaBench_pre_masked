
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int *,size_t,int *) ;
 int FUNC_1 (void*,size_t,size_t const,int const*,int const*,size_t,size_t,int *) ;
 int FUNC_2 (void*,size_t,int *,int const*,int *) ;
 int FUNC_3 (void*,size_t const,int const*,size_t,int *,int *) ;
 int FUNC_4 (size_t const,int const*,int *) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int const*,size_t) ;
 scalar_t__ FUNC_7 (int *,int *,size_t) ;
 int FUNC_8 (int ,char*) ;

int FUNC_9(const u8 *VAR_2, size_t VAR_3, const u8 *VAR_4,
        size_t VAR_5, const u8 *VAR_6, size_t VAR_7,
        const u8 *VAR_8, size_t VAR_9, const u8 *VAR_10, u8 *VAR_11)
{
 const size_t VAR_12 = 2;
 void *VAR_13;
 u8 VAR_14[VAR_0], VAR_15[VAR_0];
 u8 VAR_16[VAR_0];

 if (VAR_9 > 30 || VAR_5 > VAR_0)
  return -1;

 VAR_13 = FUNC_6(VAR_2, VAR_3);
 if (VAR_13 == ((void*)0))
  return -1;


 FUNC_4(VAR_12, VAR_4, VAR_15);
 FUNC_2(VAR_13, VAR_5, VAR_15, VAR_10, VAR_16);


 FUNC_3(VAR_13, VAR_12, VAR_6, VAR_7, VAR_11, VAR_15);

 FUNC_1(VAR_13, VAR_5, VAR_12, VAR_4, VAR_8, VAR_9, VAR_7, VAR_14);
 FUNC_0(VAR_13, VAR_11, VAR_7, VAR_14);

 FUNC_5(VAR_13);

 if (FUNC_7(VAR_14, VAR_16, VAR_5) != 0) {
  FUNC_8(VAR_1, "CCM: Auth mismatch");
  return -1;
 }

 return 0;
}
