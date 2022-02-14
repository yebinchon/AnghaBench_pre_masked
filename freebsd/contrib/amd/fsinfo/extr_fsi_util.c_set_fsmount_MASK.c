
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int f_mask; char* f_localname; char* f_volname; char* f_fstype; char* f_opts; char* f_from; } ;
typedef TYPE_1__ fsmount ;
 int FUNC_0 () ;
 int FUNC_1 (char*,int ) ;
 int * VAR_0 ;

void
FUNC_2(fsmount *VAR_1, int VAR_2, char *VAR_3)
{
  int VAR_4 = 1 << VAR_2;

  if (VAR_1->f_mask & VAR_4) {
    FUNC_1("mount field \"%s\" already set", VAR_0[VAR_2]);
    return;
  }
  VAR_1->f_mask |= VAR_4;

  switch (VAR_2) {

  case 130:
    VAR_1->f_localname = VAR_3;
    break;

  case 128:
    VAR_1->f_volname = VAR_3;
    break;

  case 131:
    VAR_1->f_fstype = VAR_3;
    break;

  case 129:
    VAR_1->f_opts = VAR_3;
    break;

  case 132:
    VAR_1->f_from = VAR_3;
    break;

  case 133:
    break;

  default:
    FUNC_0();
    break;
  }
}
