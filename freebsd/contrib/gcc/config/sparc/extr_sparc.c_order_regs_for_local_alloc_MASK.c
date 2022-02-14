
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*,char const*,int) ;
 scalar_t__ VAR_1 ;
 scalar_t__* VAR_2 ;
 int* VAR_3 ;

void
FUNC_1 (void)
{
  static int VAR_4 = 1;

  if (VAR_3[15] != VAR_4)
    {
      VAR_4 = !VAR_4;
      FUNC_0 ((char *) VAR_1,
       (const char *) VAR_2[VAR_4],
       VAR_0 * sizeof (int));
    }
}
