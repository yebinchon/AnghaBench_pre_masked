
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int FUNC_0 (void*,int const*,size_t,int *) ;
 int FUNC_1 (void*,size_t,size_t const,int const*,int const*,size_t,size_t,int *) ;
 int FUNC_2 (void*,size_t const,int const*,size_t,int *,int *) ;
 int FUNC_3 (void*,size_t,int *,int *,int *) ;
 int FUNC_4 (size_t const,int const*,int *) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int const*,size_t) ;

int FUNC_7(const u8 *VAR_1, size_t VAR_2, const u8 *VAR_3,
        size_t VAR_4, const u8 *VAR_5, size_t VAR_6,
        const u8 *VAR_7, size_t VAR_8, u8 *VAR_9, u8 *VAR_10)
{
 const size_t VAR_11 = 2;
 void *VAR_12;
 u8 VAR_13[VAR_0], VAR_14[VAR_0];

 if (VAR_8 > 30 || VAR_4 > VAR_0)
  return -1;

 VAR_12 = FUNC_6(VAR_1, VAR_2);
 if (VAR_12 == ((void*)0))
  return -1;

 FUNC_1(VAR_12, VAR_4, VAR_11, VAR_3, VAR_7, VAR_8, VAR_6, VAR_13);
 FUNC_0(VAR_12, VAR_5, VAR_6, VAR_13);


 FUNC_4(VAR_11, VAR_3, VAR_14);
 FUNC_2(VAR_12, VAR_11, VAR_5, VAR_6, VAR_9, VAR_14);
 FUNC_3(VAR_12, VAR_4, VAR_13, VAR_14, VAR_10);

 FUNC_5(VAR_12);

 return 0;
}
