
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct loc_at {scalar_t__ la_off; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct loc_at *VAR_2, *VAR_3;

 VAR_2 = (const struct loc_at *)VAR_0;
 VAR_3 = (const struct loc_at *)VAR_1;

 if (VAR_2->la_off > VAR_3->la_off)
  return (1);
 else if (VAR_2->la_off < VAR_3->la_off)
  return (-1);
 else
  return (0);
}
