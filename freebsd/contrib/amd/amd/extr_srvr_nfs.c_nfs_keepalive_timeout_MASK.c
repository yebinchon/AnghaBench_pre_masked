
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef TYPE_1__* voidp ;
struct TYPE_12__ {int np_ping; scalar_t__ np_ttl; int np_error; int np_xid; } ;
typedef TYPE_2__ nfs_private ;
struct TYPE_11__ {int fs_flags; int fs_host; scalar_t__ fs_private; } ;
typedef TYPE_1__ fserver ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_9(voidp VAR_4)
{
  fserver *VAR_5 = VAR_4;
  nfs_private *VAR_6 = (nfs_private *) VAR_5->fs_private;




  VAR_6->np_ping++;
  if (VAR_6->np_ping > 1)
    FUNC_7(VAR_5, "not responding");




  if (FUNC_0(VAR_5))
    VAR_5->fs_flags &= ~VAR_1;




  if (VAR_6->np_ttl < FUNC_3(((void*)0))) {
    int VAR_7 = VAR_5->fs_flags;
    FUNC_4("ttl has expired");
    if ((VAR_5->fs_flags & VAR_0) == 0) {



      FUNC_7(VAR_5, "is down");
      VAR_5->fs_flags |= VAR_0 | VAR_1;





      FUNC_5(VAR_5);
      VAR_6->np_error = -1;
      FUNC_2(VAR_5);
    } else {



      if ((VAR_5->fs_flags & VAR_1) == 0)
 FUNC_7(VAR_5, "starts down");
      VAR_5->fs_flags |= VAR_1;
    }
    if (VAR_7 != VAR_5->fs_flags && (VAR_5->fs_flags & VAR_2))
      FUNC_8(VAR_5);



    VAR_6->np_ping = 0;
  } else {
    if (VAR_6->np_ping > 1)
      FUNC_4("%d pings to %s failed - at most %d allowed", VAR_6->np_ping, VAR_5->fs_host, VAR_3);
  }





  VAR_6->np_xid = FUNC_1();




  FUNC_6(VAR_5);
}
