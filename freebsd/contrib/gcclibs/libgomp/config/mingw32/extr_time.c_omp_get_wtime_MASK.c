
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _timeb {double time; scalar_t__ millitm; } ;


 int FUNC_0 (struct _timeb*) ;

double
FUNC_1 (void)
{
  struct _timeb VAR_0;
  FUNC_0 (&VAR_0);
  return (VAR_0.time + (long)(VAR_0.millitm) / 1e3);
}
