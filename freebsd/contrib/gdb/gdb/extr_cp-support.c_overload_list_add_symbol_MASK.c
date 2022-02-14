
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;


 char const* FUNC_0 (struct symbol*) ;
 int FUNC_1 (struct symbol*) ;
 int * FUNC_2 (struct symbol*) ;
 char* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char*,char const*) ;
 struct symbol** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7 (struct symbol *VAR_3, const char *VAR_4)
{
  int VAR_5;
  int VAR_6;
  char *VAR_7;


  if (FUNC_2 (VAR_3) == ((void*)0))
    return;


  for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6)
    if (FUNC_4 (FUNC_0 (VAR_3),
  FUNC_0 (VAR_0[VAR_6])) == 0)
      return;


  VAR_7 = FUNC_3 (FUNC_1 (VAR_3));
  if (!VAR_7)
    return;


  if (FUNC_4 (VAR_7, VAR_4) != 0)
    {
      FUNC_5 (VAR_7);
      return;
    }

  FUNC_5 (VAR_7);



  if (VAR_1 + 3 > VAR_2)
    {
      VAR_5 = (VAR_2 *= 2) * sizeof (struct symbol *);
      VAR_0 = (struct symbol **) FUNC_6 ((char *) VAR_0, VAR_5);
    }
  VAR_0[VAR_1++] = VAR_3;
  VAR_0[VAR_1] = ((void*)0);
}
