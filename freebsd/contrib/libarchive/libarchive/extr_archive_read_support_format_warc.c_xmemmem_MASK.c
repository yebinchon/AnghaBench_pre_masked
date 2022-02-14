
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char const*) ;
 char* FUNC_1 (char const*,char const,size_t const) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t const) ;

__attribute__((used)) static char*
FUNC_3(const char *VAR_0, const size_t VAR_1,
 const char *VAR_2, const size_t VAR_3)
{
 const char *const VAR_4 = VAR_0 + VAR_1;
 const char *const VAR_5 = VAR_2 + VAR_3;
 const char *VAR_6;
 const char *VAR_7;
 const char *VAR_8;
 unsigned int VAR_9;
 unsigned int VAR_10;
 unsigned int VAR_11;





 if (VAR_3 == 0UL) {
  return FUNC_0(VAR_0);
 } else if ((VAR_0 = FUNC_1(VAR_0, *VAR_2, VAR_1)) == ((void*)0)) {

  return ((void*)0);
 }





 for (VAR_6 = VAR_0 + 1U, VAR_7 = VAR_2 + 1U, VAR_9 = *VAR_0, VAR_10 = *VAR_0, VAR_11 = 1U;
      VAR_6 < VAR_4 && VAR_7 < VAR_5;
      VAR_9 ^= *VAR_6, VAR_10 ^= *VAR_7, VAR_11 &= *VAR_6 == *VAR_7, VAR_6++, VAR_7++);


 if (VAR_7 < VAR_5) {

  return ((void*)0);
 } else if (VAR_11) {

  return FUNC_0(VAR_0);
 }



 for (VAR_8 = VAR_0; VAR_6 < VAR_4; VAR_6++) {
  VAR_9 ^= *VAR_8++;
  VAR_9 ^= *VAR_6;





  if (VAR_9 == VAR_10 && FUNC_2(VAR_8, VAR_2, VAR_3 - 1U) == 0) {
   return FUNC_0(VAR_8);
  }
 }
 return ((void*)0);
}
