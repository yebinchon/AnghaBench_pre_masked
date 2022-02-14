
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct point {double prob; double delay; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct point *VAR_2 = VAR_0;
 const struct point *VAR_3 = VAR_1;
 double VAR_4 = 0;

 VAR_4 = VAR_2->prob - VAR_3->prob;
 if (VAR_4 == 0)
  VAR_4 = VAR_2->delay - VAR_3->delay;
 if (VAR_4 < 0)
  return -1;
 else if (VAR_4 > 0)
  return 1;
 else
  return 0;
}
