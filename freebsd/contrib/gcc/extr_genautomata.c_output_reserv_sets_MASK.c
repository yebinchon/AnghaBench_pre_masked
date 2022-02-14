
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int set_el_t ;
typedef scalar_t__ reserv_sets_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (char*,char*,int) ;
 int FUNC_2 (int *,scalar_t__,int,int) ;

__attribute__((used)) static void
FUNC_3 (FILE *VAR_2, reserv_sets_t VAR_3)
{
  int VAR_4 = 0;
  int VAR_5;
  int VAR_6;

  VAR_6 = 0;
  for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
    if (VAR_6 == 0)
      {
        VAR_6++;
        VAR_4 = VAR_5;
      }
    else if (FUNC_1
             ((char *) VAR_3 + VAR_4 * VAR_0
       * sizeof (set_el_t),
              (char *) VAR_3 + VAR_5 * VAR_0
       * sizeof (set_el_t),
       VAR_0 * sizeof (set_el_t)) == 0)
      VAR_6++;
    else
      {
        if (VAR_4 != 0)
          FUNC_0 (VAR_2, ", ");
        FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_6);
        VAR_6 = 1;
        VAR_4 = VAR_5;
      }
  if (VAR_4 < VAR_1)
    {
      if (VAR_4 != 0)
        FUNC_0 (VAR_2, ", ");
      FUNC_2 (VAR_2, VAR_3, VAR_4, VAR_6);
    }
}
