
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int bfd ;
typedef int asymbol ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int *,int **) ;
 int FUNC_2 (int ) ;
 long FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_1 ;
 int FUNC_6 (int ,int ) ;
 int ** FUNC_7 (long) ;

__attribute__((used)) static asymbol **
FUNC_8 (bfd *VAR_2)
{
  asymbol **VAR_3 = ((void*)0);
  long VAR_4;

  VAR_4 = FUNC_3 (VAR_2);
  if (VAR_4 < 0)
    {
      if (!(FUNC_4 (VAR_2) & VAR_0))
 {
   FUNC_6 (FUNC_0("%s: not a dynamic object"), FUNC_5 (VAR_2));
   VAR_1 = 0;
   return ((void*)0);
 }

      FUNC_2 (FUNC_5 (VAR_2));
    }
  if (VAR_4)
    VAR_3 = FUNC_7 (VAR_4);

  VAR_1 = FUNC_1 (VAR_2, VAR_3);
  if (VAR_1 < 0)
    FUNC_2 (FUNC_5 (VAR_2));
  return VAR_3;
}
