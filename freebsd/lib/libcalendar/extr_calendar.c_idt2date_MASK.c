
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int m; scalar_t__ y; scalar_t__ d; } ;
typedef TYPE_1__ date ;



__attribute__((used)) static date *
FUNC_0(date *VAR_0, date *VAR_1)
{

 VAR_0->d = VAR_1->d + 1;
 if (VAR_1->m < 10) {
  VAR_0->m = VAR_1->m + 3;
  VAR_0->y = VAR_1->y;
 } else {
  VAR_0->m = VAR_1->m - 9;
  VAR_0->y = VAR_1->y + 1;
 }
 if (VAR_0->m < 1)
  return (((void*)0));
 else
  return (VAR_0);
}
