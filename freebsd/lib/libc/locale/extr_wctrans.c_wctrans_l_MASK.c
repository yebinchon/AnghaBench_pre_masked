
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ wctrans_t ;
typedef int locale_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (char const*,char const*) ;

wctrans_t
FUNC_1(const char *VAR_5, locale_t VAR_6)
{
 struct {
  const char *name;
  wctrans_t trans;
 } VAR_7[] = {
  { "tolower", VAR_2 },
  { "toupper", VAR_3 },
  { ((void*)0), VAR_1 },
 };
 int VAR_8;

 VAR_8 = 0;
 while (VAR_7[VAR_8].name != ((void*)0) && FUNC_0(VAR_7[VAR_8].name, VAR_5) != 0)
  VAR_8++;

 if (VAR_7[VAR_8].trans == VAR_1)
  VAR_4 = VAR_0;
 return (VAR_7[VAR_8].trans);
}
