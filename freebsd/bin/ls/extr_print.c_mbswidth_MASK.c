
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int wchar_t ;


 int VAR_0 ;
 size_t FUNC_0 (int *,char const*,int ,int *) ;
 size_t FUNC_1 (int ) ;

__attribute__((used)) static size_t
FUNC_2(const char *VAR_1)
{
 wchar_t VAR_2;
 size_t VAR_3, VAR_4, VAR_5, VAR_6;

 VAR_3 = VAR_4 = 0;
 while ((VAR_5 = FUNC_0(&VAR_2, VAR_1 + VAR_4, VAR_0, ((void*)0))) != 0) {
  if (VAR_5 == (size_t)-1 || VAR_5 == (size_t)-2)
   return (-1);
  VAR_4 += VAR_5;
  if ((VAR_6 = FUNC_1(VAR_2)) == (size_t)-1)
   return (-1);
  VAR_3 += VAR_6;
 }

 return (VAR_3);
}
