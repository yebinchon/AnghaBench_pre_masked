
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct parse_data {int dummy; } ;


 size_t VAR_0 ;
 int FUNC_0 (char*,int,int const*,int const*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;

__attribute__((used)) static char * FUNC_3(const struct parse_data *VAR_1,
      const u8 *VAR_2, size_t VAR_3, char *VAR_4)
{
 char *VAR_5, *VAR_6, *VAR_7;
 int VAR_8;
 size_t VAR_9;

 if (VAR_2 == ((void*)0) || VAR_3 == 0)
  return ((void*)0);

 VAR_5 = FUNC_2(2 * 20 * VAR_3);
 if (VAR_5 == ((void*)0))
  return ((void*)0);
 VAR_7 = VAR_5;
 VAR_6 = VAR_5 + 2 * 20 * VAR_3;

 for (VAR_9 = VAR_3; VAR_9 > 0; VAR_9--) {
  const u8 *VAR_10 = VAR_2 + (VAR_9 - 1) * 2 * VAR_0;
  const u8 *VAR_11 = VAR_10 + VAR_0;

  if (VAR_9 < VAR_3)
   *VAR_7++ = ' ';
  VAR_8 = FUNC_0(VAR_7, VAR_6 - VAR_7, VAR_10, VAR_11);
  if (VAR_8 < 0) {
   FUNC_1(VAR_5);
   return ((void*)0);
  }
  VAR_7 += VAR_8;
 }

 return VAR_5;
}
