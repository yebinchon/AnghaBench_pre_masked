
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_7__ {TYPE_1__* kb_accentmap; } ;
typedef TYPE_3__ keyboard_t ;
struct TYPE_6__ {scalar_t__ accchar; } ;
struct TYPE_5__ {int n_accs; TYPE_2__* acc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static u_int
FUNC_0(keyboard_t *VAR_3, u_int VAR_4, int *VAR_5)
{
 int VAR_6;


 VAR_6 = VAR_4 - VAR_1 + 1;
 if ((VAR_6 > VAR_3->kb_accentmap->n_accs)
     || (VAR_3->kb_accentmap->acc[VAR_6 - 1].accchar == 0)) {

  *VAR_5 = 0;
  return (VAR_0);
 }





 if (VAR_6 == *VAR_5) {
  VAR_4 = VAR_3->kb_accentmap->acc[VAR_6 - 1].accchar;
  *VAR_5 = 0;
  return (VAR_4);
 }


 *VAR_5 = VAR_6;
 return (VAR_2);
}
