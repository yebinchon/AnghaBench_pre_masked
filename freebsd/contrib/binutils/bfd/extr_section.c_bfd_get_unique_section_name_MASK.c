
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int section_htab; } ;
typedef TYPE_1__ bfd ;


 int VAR_0 ;
 int FUNC_0 () ;
 char* FUNC_1 (unsigned int) ;
 int FUNC_2 (char*,char const*,unsigned int) ;
 scalar_t__ FUNC_3 (int *,char*,int ,int ) ;
 int FUNC_4 (char*,char*,int ) ;
 unsigned int FUNC_5 (char const*) ;

char *
FUNC_6 (bfd *VAR_1, const char *VAR_2, int *VAR_3)
{
  int VAR_4;
  unsigned int VAR_5;
  char *VAR_6;

  VAR_5 = FUNC_5 (VAR_2);
  VAR_6 = FUNC_1 (VAR_5 + 8);
  if (VAR_6 == ((void*)0))
    return ((void*)0);
  FUNC_2 (VAR_6, VAR_2, VAR_5);
  VAR_4 = 1;
  if (VAR_3 != ((void*)0))
    VAR_4 = *VAR_3;

  do
    {

      if (VAR_4 > 999999)
 FUNC_0 ();
      FUNC_4 (VAR_6 + VAR_5, ".%d", VAR_4++);
    }
  while (FUNC_3 (&VAR_1->section_htab, VAR_6, VAR_0, VAR_0));

  if (VAR_3 != ((void*)0))
    *VAR_3 = VAR_4;
  return VAR_6;
}
