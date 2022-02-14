
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;
typedef int asymbol ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int *,int **) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 long FUNC_4 (int *) ;
 scalar_t__ VAR_1 ;
 int ** FUNC_5 (long) ;

__attribute__((used)) static asymbol **
FUNC_6 (bfd *VAR_2)
{
  asymbol **VAR_3 = ((void*)0);
  long VAR_4;

  if (!(FUNC_2 (VAR_2) & VAR_0))
    {
      VAR_1 = 0;
      return ((void*)0);
    }

  VAR_4 = FUNC_4 (VAR_2);
  if (VAR_4 < 0)
    FUNC_1 (FUNC_3 (VAR_2));
  if (VAR_4)
    VAR_3 = FUNC_5 (VAR_4);

  VAR_1 = FUNC_0 (VAR_2, VAR_3);
  if (VAR_1 < 0)
    FUNC_1 (FUNC_3 (VAR_2));
  return VAR_3;
}
