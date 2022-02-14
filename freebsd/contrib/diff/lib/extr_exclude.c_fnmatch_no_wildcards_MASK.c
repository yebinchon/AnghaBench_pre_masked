
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,char const*) ;
 int FUNC_1 (char const*,char const*) ;
 size_t FUNC_2 (char const*) ;
 int FUNC_3 (char const*,char const*,size_t) ;
 int FUNC_4 (char const*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_5 (char const *VAR_2, char const *VAR_3, int VAR_4)
{
  if (! (VAR_4 & VAR_1))
    return ((VAR_4 & VAR_0)
     ? FUNC_0 (VAR_2, VAR_3)
     : FUNC_1 (VAR_2, VAR_3));
  else
    {
      size_t VAR_5 = FUNC_2 (VAR_2);
      int VAR_6 = ((VAR_4 & VAR_0)
  ? FUNC_3 (VAR_2, VAR_3, VAR_5)
  : FUNC_4 (VAR_2, VAR_3, VAR_5));
      if (! VAR_6)
 {
   VAR_6 = VAR_3[VAR_5];
   if (VAR_6 == '/')
     VAR_6 = 0;
 }
      return VAR_6;
    }
}
