
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int fs_flags; char* fs_maxbpg; char* fs_avgfilesize; char* fs_avgfpdir; char* fs_minfree; char* fs_metaspace; scalar_t__ fs_optim; char* fs_volname; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int FUNC_0 (char*,char*,...) ;

__attribute__((used)) static void
FUNC_1(void)
{
 FUNC_0("POSIX.1e ACLs: (-a)                                %s",
  (VAR_11.fs_flags & VAR_0)? "enabled" : "disabled");
 FUNC_0("NFSv4 ACLs: (-N)                                   %s",
  (VAR_11.fs_flags & VAR_4)? "enabled" : "disabled");
 FUNC_0("MAC multilabel: (-l)                               %s",
  (VAR_11.fs_flags & VAR_3)? "enabled" : "disabled");
 FUNC_0("soft updates: (-n)                                 %s",
  (VAR_11.fs_flags & VAR_1)? "enabled" : "disabled");
 FUNC_0("soft update journaling: (-j)                       %s",
  (VAR_11.fs_flags & VAR_7)? "enabled" : "disabled");
 FUNC_0("gjournal: (-J)                                     %s",
  (VAR_11.fs_flags & VAR_2)? "enabled" : "disabled");
 FUNC_0("trim: (-t)                                         %s",
  (VAR_11.fs_flags & VAR_8)? "enabled" : "disabled");
 FUNC_0("maximum blocks per file in a cylinder group: (-e)  %d",
       VAR_11.fs_maxbpg);
 FUNC_0("average file size: (-f)                            %d",
       VAR_11.fs_avgfilesize);
 FUNC_0("average number of files in a directory: (-s)       %d",
       VAR_11.fs_avgfpdir);
 FUNC_0("minimum percentage of free space: (-m)             %d%%",
       VAR_11.fs_minfree);
 FUNC_0("space to hold for metadata blocks: (-k)            %jd",
       VAR_11.fs_metaspace);
 FUNC_0("optimization preference: (-o)                      %s",
       VAR_11.fs_optim == VAR_5 ? "space" : "time");
 if (VAR_11.fs_minfree >= VAR_9 &&
     VAR_11.fs_optim == VAR_5)
  FUNC_0(VAR_10, "time", ">=", VAR_9);
 if (VAR_11.fs_minfree < VAR_9 &&
     VAR_11.fs_optim == VAR_6)
  FUNC_0(VAR_10, "space", "<", VAR_9);
 FUNC_0("volume label: (-L)                                 %s",
  VAR_11.fs_volname);
}
