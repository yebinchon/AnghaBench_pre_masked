
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd_boolean ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,char*) ;
 scalar_t__ FUNC_1 (char) ;
 int VAR_1 ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static bfd_boolean
FUNC_5 (const char *VAR_4, bfd_boolean VAR_5)
{
  char * VAR_6 = VAR_2 ? FUNC_3 (VAR_4) : ((void*)0);
  int VAR_7;
  bfd_boolean VAR_8;

  if (! VAR_6)
    return VAR_0;

  VAR_7 = FUNC_4 (VAR_6);

  if (((! VAR_5 && VAR_7 == VAR_3)
       || (VAR_7 >= VAR_3
    && FUNC_1 (VAR_6[VAR_3])
    && (VAR_6[VAR_3] = '\0') == '\0'))
      && FUNC_0 (VAR_2, VAR_6) == 0)
    VAR_8 = VAR_1;
  else
    VAR_8 = VAR_0;

  if (VAR_6)
    FUNC_2 (VAR_6);

  return VAR_8;
}
