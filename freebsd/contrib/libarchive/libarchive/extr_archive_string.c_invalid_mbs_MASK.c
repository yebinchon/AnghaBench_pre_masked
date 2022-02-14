
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;
struct archive_string_conv {int dummy; } ;
typedef int shift_state ;
typedef int mbstate_t ;


 size_t FUNC_0 (int *,char const*,size_t,int *) ;
 size_t FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (int *,int ,int) ;

__attribute__((used)) static int
FUNC_3(const void *VAR_0, size_t VAR_1, struct archive_string_conv *VAR_2)
{
 const char *VAR_3 = (const char *)VAR_0;
 size_t VAR_4;







 FUNC_1(((void*)0), ((void*)0), 0);

 while (VAR_1) {
  wchar_t VAR_5;




  VAR_4 = FUNC_1(&VAR_5, VAR_3, VAR_1);

  if (VAR_4 == (size_t)-1 || VAR_4 == (size_t)-2)
   return (-1);
  if (VAR_4 == 0)
   break;
  VAR_3 += VAR_4;
  VAR_1 -= VAR_4;
 }
 (void)VAR_2;
 return (0);
}
