
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ wchan_t ;
typedef int u_short ;
struct TYPE_7__ {int np_error; int np_mountd_inval; int np_mountd; } ;
typedef TYPE_1__ nfs_private ;
struct TYPE_8__ {int fs_flags; scalar_t__ fs_private; } ;
typedef TYPE_2__ fserver ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 () ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,scalar_t__,scalar_t__) ;
 int VAR_2 ;

int
FUNC_5(fserver *VAR_3, u_short *VAR_4, wchan_t VAR_5)
{
  int VAR_6 = -1;

  if (FUNC_0(VAR_3))
    return VAR_0;

  if (FUNC_1(VAR_3)) {
    nfs_private *VAR_7 = (nfs_private *) VAR_3->fs_private;
    if (VAR_7->np_error == 0) {
      *VAR_4 = VAR_7->np_mountd;
      VAR_6 = 0;
    } else {
      VAR_6 = VAR_7->np_error;
    }







    switch (VAR_7->np_mountd_inval) {
    case 'Y':
      FUNC_3(VAR_3);
      break;
    case 'N':
      VAR_7->np_mountd_inval = 'Y';
      break;
    case 'P':
      break;
    default:
      FUNC_2();
    }
  }
  if (VAR_6 < 0 && VAR_5 && !(VAR_3->fs_flags & VAR_1)) {
    VAR_3->fs_flags |= VAR_1;
    FUNC_4(VAR_2, VAR_5, (wchan_t) VAR_3);
  }
  return VAR_6;
}
