
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int d; size_t m; int y; } ;
typedef TYPE_1__ date ;


 int* VAR_0 ;

__attribute__((used)) static int
FUNC_0(date * VAR_1)
{

 return (VAR_1->d + VAR_0[VAR_1->m] + VAR_1->y * 365 + VAR_1->y / 4);
}
