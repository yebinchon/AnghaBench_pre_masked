
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ bfd_boolean ;
typedef int bfd ;
typedef int asymbol ;


 long FUNC_0 (int *,int **) ;
 long FUNC_1 (int *,int **) ;
 int VAR_0 ;
 long FUNC_2 (int *) ;
 long FUNC_3 (int *) ;
 int ** FUNC_4 (long) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int **) ;

long
FUNC_7 (bfd *VAR_1,
          bfd_boolean VAR_2,
          void **VAR_3,
          unsigned int *VAR_4)
{
  long VAR_5;
  asymbol **VAR_6 = ((void*)0);
  long VAR_7;

  if (VAR_2)
    VAR_5 = FUNC_2 (VAR_1);
  else
    VAR_5 = FUNC_3 (VAR_1);
  if (VAR_5 < 0)
    goto error_return;
  if (VAR_5 == 0)
    return 0;

  VAR_6 = FUNC_4 (VAR_5);
  if (VAR_6 == ((void*)0))
    goto error_return;

  if (VAR_2)
    VAR_7 = FUNC_0 (VAR_1, VAR_6);
  else
    VAR_7 = FUNC_1 (VAR_1, VAR_6);
  if (VAR_7 < 0)
    goto error_return;

  *VAR_3 = VAR_6;
  *VAR_4 = sizeof (asymbol *);
  return VAR_7;

 error_return:
  FUNC_5 (VAR_0);
  if (VAR_6 != ((void*)0))
    FUNC_6 (VAR_6);
  return -1;
}
