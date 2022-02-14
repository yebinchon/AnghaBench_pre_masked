
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int m_mask; char* m_volname; char* m_exportfs; char* m_sel; } ;
typedef TYPE_1__ fsi_mount ;





 int FUNC_0 () ;
 int FUNC_1 (int ,char*,char*) ;
 int VAR_0 ;
 int FUNC_2 (char*,int ) ;
 int * VAR_1 ;

void
FUNC_3(fsi_mount *VAR_2, int VAR_3, char *VAR_4)
{
  int VAR_5 = 1 << VAR_3;

  if (VAR_2->m_mask & VAR_5) {
    FUNC_2("mount tree field \"%s\" already set", VAR_1[VAR_3]);
    return;
  }
  VAR_2->m_mask |= VAR_5;

  switch (VAR_3) {

  case 128:
    FUNC_1(VAR_0, VAR_4, (char *) VAR_2);
    VAR_2->m_volname = VAR_4;
    break;

  case 130:
    VAR_2->m_exportfs = VAR_4;
    break;

  case 129:
    VAR_2->m_sel = VAR_4;
    break;

  default:
    FUNC_0();
    break;
  }
}
