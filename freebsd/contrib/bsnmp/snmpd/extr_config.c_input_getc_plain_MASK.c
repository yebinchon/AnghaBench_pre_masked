
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(void)
{
 int VAR_1;

  again:
 if ((VAR_1 = FUNC_0()) == '\\') {
  if ((VAR_1 = FUNC_0()) == '\n')
   goto again;
  if (VAR_1 != VAR_0)
   FUNC_1(VAR_1);
  return ('\\');
 }
 return (VAR_1);
}
