
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (char const*,int,size_t*,int ) ;
 char const* VAR_2 ;
 char* FUNC_1 (char const*,int ,int) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (char const*,char const*,char) ;
 size_t FUNC_3 (char const*,int,size_t*,int ) ;

__attribute__((used)) static void
FUNC_4 (char const *VAR_6)
{
  if (!VAR_2)
    VAR_2 = VAR_0;
  while (VAR_5 > 0 && VAR_2 < VAR_6)
    {
      char const *VAR_7 = FUNC_1 (VAR_2, VAR_1, VAR_6 - VAR_2);
      size_t VAR_8;
      --VAR_5;
      if (VAR_4
   || ((FUNC_0) (VAR_2, VAR_7 - VAR_2, &VAR_8, 0) == (size_t) -1)
       == !VAR_3))
 FUNC_2 (VAR_2, VAR_7 + 1, '-');
      else
 VAR_5 = 0;
    }
}
