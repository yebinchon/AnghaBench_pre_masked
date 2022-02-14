
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_memory_stream {int dummy; } ;


 int VAR_0 ;
 char* FUNC_0 (char const*,size_t*) ;
 char* FUNC_1 (char const*,size_t*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;
 int FUNC_3 (char const*,size_t*) ;
 char* FUNC_4 (struct _citrus_memory_stream*,size_t*) ;
 char* FUNC_5 (char const*,int ,size_t) ;
 scalar_t__ FUNC_6 (char const*,char const*,size_t) ;
 size_t FUNC_7 (char const*) ;

const char *
FUNC_8(struct _citrus_memory_stream * __restrict VAR_1,
    const char * __restrict VAR_2, size_t * __restrict VAR_3, int VAR_4)
{
 const char *VAR_5, *VAR_6;
 size_t VAR_7, VAR_8;

 VAR_7 = FUNC_7(VAR_2);
 for(;;) {
  VAR_5 = FUNC_4(VAR_1, &VAR_8);
  if (VAR_5 == ((void*)0))
   return (((void*)0));


  VAR_6 = FUNC_5(VAR_5, VAR_0, VAR_8);
  if (VAR_6) {
   VAR_8 = VAR_6 - VAR_5;
  }

  FUNC_3(VAR_5, &VAR_8);
  if (VAR_8 == 0)
   continue;


  VAR_5 = FUNC_1(VAR_5, &VAR_8);
  VAR_6 = FUNC_0(VAR_5, &VAR_8);

  if ((size_t)(VAR_6 - VAR_5) == VAR_7) {
   if (VAR_4) {
    if (FUNC_6(VAR_2, VAR_5, VAR_7) == 0)
     break;
   } else {
    if (FUNC_2(VAR_2, VAR_5, VAR_7) == 0)
     break;
   }
  }
 }

 VAR_5 = FUNC_1(VAR_6, &VAR_8);
 *VAR_3 = VAR_8;

 return (VAR_5);
}
