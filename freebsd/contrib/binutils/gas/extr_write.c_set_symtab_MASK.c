
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int symbolS ;
typedef int bfd_size_type ;
typedef int bfd_boolean ;
typedef int asymbol ;


 int FUNC_0 (int ) ;
 int ** FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int **,int) ;
 int VAR_0 ;
 int * FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_6 (void)
{
  int VAR_3;
  asymbol **VAR_4;
  symbolS *VAR_5;
  bfd_boolean VAR_6;




  VAR_3 = 0;
  for (VAR_5 = VAR_1; VAR_5; VAR_5 = FUNC_5 (VAR_5))
    VAR_3++;

  if (VAR_3)
    {
      int VAR_7;
      bfd_size_type VAR_8 = (bfd_size_type) VAR_3 * sizeof (asymbol *);

      VAR_4 = FUNC_1 (VAR_0, VAR_8);
      VAR_5 = VAR_1;
      for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++, VAR_5 = FUNC_5 (VAR_5))
 {
   VAR_4[VAR_7] = FUNC_3 (VAR_5);
   FUNC_4 (VAR_5);
 }
    }
  else
    VAR_4 = 0;
  VAR_6 = FUNC_2 (VAR_0, VAR_4, VAR_3);
  FUNC_0 (VAR_6);
  VAR_2 = 1;
}
