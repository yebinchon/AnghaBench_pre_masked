
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int asymbol ;
typedef int asection ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int * FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 (int ,int ,void const*,int ) ;
 int FUNC_5 (void const*,void const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7 (const void *VAR_4, const void *VAR_5)
{
  asymbol *VAR_6, *VAR_7;
  asection *VAR_8, *VAR_9;

  VAR_6 = FUNC_4 (VAR_0, VAR_1, VAR_4, VAR_2);
  VAR_7 = FUNC_4 (VAR_0, VAR_1, VAR_5, VAR_3);
  if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0))
    FUNC_0 (FUNC_1 (VAR_0));

  VAR_8 = FUNC_2 (VAR_6);
  VAR_9 = FUNC_2 (VAR_7);

  if (FUNC_3 (VAR_8))
    {
      if (! FUNC_3 (VAR_9))
 return -1;
    }
  else if (FUNC_3 (VAR_9))
    return 1;
  else if (FUNC_6 (VAR_6) != FUNC_6 (VAR_7))
    return FUNC_6 (VAR_6) < FUNC_6 (VAR_7) ? -1 : 1;

  return FUNC_5 (VAR_4, VAR_5);
}
