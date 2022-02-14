
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct general_symbol_info {scalar_t__ language; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (char const*,int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 char* FUNC_1 (char const*,int ) ;

__attribute__((used)) static char *
FUNC_2 (struct general_symbol_info *VAR_8,
       const char *VAR_9)
{
  char *VAR_10 = ((void*)0);

  if (VAR_8->language == VAR_7)
    VAR_8->language = VAR_3;

  if (VAR_8->language == VAR_6
      || VAR_8->language == VAR_3)
    {
      VAR_10 =
 FUNC_1 (VAR_9, 0);
      if (VAR_10 != ((void*)0))
 {
   VAR_8->language = VAR_6;
   return VAR_10;
 }
    }
  if (VAR_8->language == VAR_4
      || VAR_8->language == VAR_3)
    {
      VAR_10 =
        FUNC_0 (VAR_9, VAR_2 | VAR_0);
      if (VAR_10 != ((void*)0))
 {
   VAR_8->language = VAR_4;
   return VAR_10;
 }
    }
  if (VAR_8->language == VAR_5)
    {
      VAR_10 =
        FUNC_0 (VAR_9,
                        VAR_2 | VAR_0 | VAR_1);
      if (VAR_10 != ((void*)0))
 {
   VAR_8->language = VAR_5;
   return VAR_10;
 }
    }
  return ((void*)0);
}
