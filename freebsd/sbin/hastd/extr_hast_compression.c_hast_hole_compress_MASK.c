
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int size ;


 int FUNC_0 (unsigned char const*,size_t) ;
 int FUNC_1 (int *,void*,int) ;
 int FUNC_2 (int ) ;
 void* FUNC_3 (int) ;
 int FUNC_4 (char*,size_t) ;

__attribute__((used)) static void *
FUNC_5(const unsigned char *VAR_0, size_t *VAR_1)
{
 uint32_t VAR_2;
 void *VAR_3;

 if (!FUNC_0(VAR_0, *VAR_1))
  return (((void*)0));

 VAR_3 = FUNC_3(sizeof(VAR_2));
 if (VAR_3 == ((void*)0)) {
  FUNC_4("Unable to compress (no memory: %zu).",
      (size_t)*VAR_1);
  return (((void*)0));
 }
 VAR_2 = FUNC_2((uint32_t)*VAR_1);
 FUNC_1(&VAR_2, VAR_3, sizeof(VAR_2));
 *VAR_1 = sizeof(VAR_2);

 return (VAR_3);
}
