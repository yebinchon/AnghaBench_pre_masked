
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cond_bool_datum {int state; } ;



__attribute__((used)) static int FUNC_0(struct cond_bool_datum *VAR_0)
{
 if (!(VAR_0->state == 0 || VAR_0->state == 1))
  return 0;
 return 1;
}
