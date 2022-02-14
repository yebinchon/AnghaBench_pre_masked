
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int m_q; } ;
typedef TYPE_1__ fsi_mount ;
struct TYPE_5__ {int d_mask; char* d_fstype; char* d_opts; char* d_dumpset; char* d_log; int * d_mount; void* d_freq; void* d_passno; } ;
typedef TYPE_2__ disk_fs ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 void* FUNC_2 (char*) ;
 int * VAR_0 ;
 int FUNC_3 (char*,int ) ;

void
FUNC_4(disk_fs *VAR_1, int VAR_2, char *VAR_3)
{
  int VAR_4 = 1 << VAR_2;

  if (VAR_1->d_mask & VAR_4) {
    FUNC_3("fs field \"%s\" already set", VAR_0[VAR_2]);
    return;
  }
  VAR_1->d_mask |= VAR_4;

  switch (VAR_2) {

  case 132:
    VAR_1->d_fstype = VAR_3;
    break;

  case 129:
    VAR_1->d_opts = VAR_3;
    break;

  case 134:
    VAR_1->d_dumpset = VAR_3;
    break;

  case 131:
    VAR_1->d_log = VAR_3;
    break;

  case 128:
    VAR_1->d_passno = FUNC_2(VAR_3);
    FUNC_0(VAR_3);
    break;

  case 133:
    VAR_1->d_freq = FUNC_2(VAR_3);
    FUNC_0(VAR_3);
    break;

  case 130:
    VAR_1->d_mount = &((fsi_mount *) VAR_3)->m_q;
    break;

  default:
    FUNC_1();
    break;
  }
}
