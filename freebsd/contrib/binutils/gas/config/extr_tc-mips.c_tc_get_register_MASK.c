
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 () ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int,unsigned int*) ;

int
FUNC_2 (int VAR_8)
{
  unsigned int VAR_9;

  FUNC_0 ();
  if (! FUNC_1 (&VAR_4, VAR_2 | VAR_1 | VAR_0, &VAR_9))
    VAR_9 = 0;
  if (VAR_8)
    {
      VAR_6 = VAR_9 != 0 ? VAR_9 : VAR_3;
      VAR_7 = 1;
      VAR_5 = 0;
    }
  return VAR_9;
}
