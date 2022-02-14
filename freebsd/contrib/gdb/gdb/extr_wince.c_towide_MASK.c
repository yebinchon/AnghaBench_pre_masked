
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int outs ;
typedef int gdb_wince_len ;
typedef int WCHAR ;
typedef int * LPWSTR ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,char const*,int,int *,int) ;
 int FUNC_1 (int *,int ,int) ;
 scalar_t__ FUNC_2 (int *,int) ;

LPWSTR
FUNC_3 (const char *VAR_1, gdb_wince_len * VAR_2)
{
  static int VAR_3 = -1;
  static LPWSTR VAR_4[8] =
  {((void*)0) };
  gdb_wince_len VAR_5;

  if (!VAR_2)
    VAR_2 = &VAR_5;


  *VAR_2 = sizeof (WCHAR) * FUNC_0 (VAR_0, 0, VAR_1, -1, ((void*)0), 0);
  if (!*VAR_2)
    return ((void*)0);

  if (++VAR_3 >= (sizeof (VAR_4) / sizeof (VAR_4[0])))
    VAR_3 = 0;





  VAR_4[VAR_3] = (LPWSTR) FUNC_2 (VAR_4[VAR_3], *VAR_2);
  FUNC_1 (VAR_4[VAR_3], 0, *VAR_2);
  (void) FUNC_0 (VAR_0, 0, VAR_1, -1, VAR_4[VAR_3], *VAR_2);
  return VAR_4[VAR_3];
}
