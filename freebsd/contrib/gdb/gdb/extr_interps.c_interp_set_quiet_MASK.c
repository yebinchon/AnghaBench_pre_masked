
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct interp {int quiet_p; } ;



__attribute__((used)) static int
FUNC_0 (struct interp *VAR_0, int VAR_1)
{
  int VAR_2 = VAR_0->quiet_p;
  VAR_0->quiet_p = VAR_1;
  return VAR_2;
}
