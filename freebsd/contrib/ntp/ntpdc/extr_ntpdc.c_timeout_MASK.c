
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct parse {scalar_t__ nargs; TYPE_1__* argval; } ;
struct TYPE_4__ {int tv_sec; int tv_usec; } ;
struct TYPE_3__ {int uval; } ;
typedef int FILE ;


 int FUNC_0 (int *,char*,int) ;
 TYPE_2__ VAR_0 ;

__attribute__((used)) static void
FUNC_1(
 struct parse *VAR_1,
 FILE *VAR_2
 )
{
 int VAR_3;

 if (VAR_1->nargs == 0) {
  VAR_3 = VAR_0.tv_sec * 1000 + VAR_0.tv_usec / 1000;
  (void) FUNC_0(VAR_2, "primary timeout %d ms\n", VAR_3);
 } else {
  VAR_0.tv_sec = VAR_1->argval[0].uval / 1000;
  VAR_0.tv_usec = (VAR_1->argval[0].uval - (VAR_0.tv_sec * 1000))
   * 1000;
 }
}
