
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct set_element {char* name; } ;


 int FUNC_0 (char const*) ;

__attribute__((used)) static int
FUNC_1 (const void *VAR_0, const void *VAR_1)
{
  const struct set_element * const *VAR_2 = VAR_0;
  const struct set_element * const *VAR_3 = VAR_1;
  const char *VAR_4;
  const char *VAR_5;
  int VAR_6;
  int VAR_7;

  VAR_4 = (*VAR_2)->name;
  if (VAR_4 == ((void*)0))
    VAR_4 = "";
  VAR_5 = (*VAR_3)->name;
  if (VAR_5 == ((void*)0))
    VAR_5 = "";





  VAR_6 = FUNC_0 (VAR_4);
  VAR_7 = FUNC_0 (VAR_5);


  if (VAR_6 < VAR_7)
    return 1;
  else if (VAR_6 > VAR_7)
    return -1;



  if (VAR_2 < VAR_3)
    return -1;
  else if (VAR_2 > VAR_3)
    return 1;
  else
    return 0;
}
