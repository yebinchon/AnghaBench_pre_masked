
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
typedef int size ;


 int FUNC_0 (unsigned char const*,size_t*,int) ;
 int FUNC_1 (void*,size_t) ;
 size_t FUNC_2 (size_t) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (char*,size_t) ;

__attribute__((used)) static void *
FUNC_5(const unsigned char *VAR_0, size_t *VAR_1)
{
 uint32_t VAR_2;
 void *VAR_3;

 if (*VAR_1 != sizeof(VAR_2)) {
  FUNC_4("Unable to decompress (invalid size: %zu).",
      *VAR_1);
  return (((void*)0));
 }

 FUNC_0(VAR_0, &VAR_2, sizeof(VAR_2));
 VAR_2 = FUNC_2(VAR_2);

 VAR_3 = FUNC_3(VAR_2);
 if (VAR_3 == ((void*)0)) {
  FUNC_4("Unable to decompress (no memory: %zu).",
      (size_t)VAR_2);
  return (((void*)0));
 }
 FUNC_1(VAR_3, VAR_2);
 *VAR_1 = VAR_2;

 return (VAR_3);
}
