
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char svn_wc_notify_state_t ;
typedef int ordering ;
__attribute__((used)) static void
FUNC_0(svn_wc_notify_state_t *VAR_0,
                     svn_wc_notify_state_t VAR_1)
{
  static char VAR_2[] =
    { 128,
      129,
      132,
      134,
      131,
      130,
      133 };
  int VAR_3 = 0, VAR_4;

  if (! VAR_0)
    return;


  for (VAR_4 = 0; VAR_4 < sizeof(VAR_2); VAR_4++)
    {
      if (*VAR_0 == VAR_2[VAR_4])
        {
          VAR_3 = VAR_4;
          break;
        }
    }







  for (VAR_4 = 0; VAR_4 <= VAR_3; VAR_4++)
    {
      if (VAR_1 == VAR_2[VAR_4])
        return;
    }

  *VAR_0 = VAR_1;
}
