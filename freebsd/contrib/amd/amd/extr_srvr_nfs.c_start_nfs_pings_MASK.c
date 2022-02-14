
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int fs_flags; int fs_pinger; scalar_t__ fs_cid; int fs_host; } ;
typedef TYPE_1__ fserver ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,char*,int ,int,...) ;
 int FUNC_3 (TYPE_1__*,char*) ;
 int FUNC_4 (scalar_t__) ;

__attribute__((used)) static void
FUNC_5(fserver *VAR_6, int VAR_7)
{
  if (VAR_7 == 0)
    VAR_7 = VAR_0;

  if (VAR_6->fs_flags & VAR_3) {
    VAR_6->fs_flags &= ~VAR_3;
    FUNC_2(VAR_5, "initializing %s's pinger to %d sec", VAR_6->fs_host, VAR_7);
    goto do_pings;
  }

  if ((VAR_6->fs_flags & VAR_2) && VAR_6->fs_pinger == VAR_7) {
    FUNC_0("already running pings to %s", VAR_6->fs_host);
    return;
  }


  FUNC_2(VAR_5, "changing %s's ping value from %d%s to %d%s",
       VAR_6->fs_host,
       VAR_6->fs_pinger, (VAR_6->fs_pinger < 0 ? " (off)" : ""),
       VAR_7, (VAR_7 < 0 ? " (off)" : ""));
 do_pings:
  VAR_6->fs_pinger = VAR_7;

  if (VAR_6->fs_cid)
    FUNC_4(VAR_6->fs_cid);
  if (VAR_7 < 0) {
    FUNC_3(VAR_6, "wired up (pings disabled)");
    VAR_6->fs_flags |= VAR_4;
    VAR_6->fs_flags &= ~VAR_1;
  } else {
    VAR_6->fs_flags |= VAR_2;
    FUNC_1(VAR_6);
  }
}
