
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef char u_int ;
struct acc_t {char accchar; char** map; } ;
struct TYPE_5__ {TYPE_1__* kb_accentmap; } ;
typedef TYPE_2__ keyboard_t ;
struct TYPE_4__ {struct acc_t* acc; } ;


 char VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static u_int
FUNC_0(keyboard_t *VAR_2, u_int VAR_3, int *VAR_4)
{
 struct acc_t *VAR_5;
 int VAR_6;

 VAR_5 = &VAR_2->kb_accentmap->acc[*VAR_4 - 1];
 *VAR_4 = 0;





 if (VAR_3 == ' ')
  return (VAR_5->accchar);


 for (VAR_6 = 0; VAR_6 < VAR_1; ++VAR_6) {
  if (VAR_5->map[VAR_6][0] == 0)
   break;
  if (VAR_5->map[VAR_6][0] == VAR_3)
   return (VAR_5->map[VAR_6][1]);
 }

 return (VAR_0);
}
