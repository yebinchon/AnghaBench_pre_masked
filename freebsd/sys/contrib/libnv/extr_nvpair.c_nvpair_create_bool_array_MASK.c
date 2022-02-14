
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int value ;
typedef int uint64_t ;
typedef int nvpair_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int FUNC_3 (void*,int const*,size_t) ;
 int FUNC_4 (void*) ;
 void* FUNC_5 (size_t) ;
 int * FUNC_6 (char const*,int ,int ,size_t,size_t) ;

nvpair_t *
FUNC_7(const char *VAR_2, const bool *VAR_3, size_t VAR_4)
{
 nvpair_t *VAR_5;
 size_t VAR_6;
 void *VAR_7;

 if (VAR_3 == ((void*)0) || VAR_4 == 0) {
  FUNC_2(VAR_0);
  return (((void*)0));
 }

 VAR_6 = sizeof(VAR_3[0]) * VAR_4;
 VAR_7 = FUNC_5(VAR_6);
 if (VAR_7 == ((void*)0))
  return (((void*)0));

 FUNC_3(VAR_7, VAR_3, VAR_6);
 VAR_5 = FUNC_6(VAR_2, VAR_1, (uint64_t)(uintptr_t)VAR_7,
     VAR_6, VAR_4);
 if (VAR_5 == ((void*)0)) {
  FUNC_1();
  FUNC_4(VAR_7);
  FUNC_0();
 }

 return (VAR_5);
}
