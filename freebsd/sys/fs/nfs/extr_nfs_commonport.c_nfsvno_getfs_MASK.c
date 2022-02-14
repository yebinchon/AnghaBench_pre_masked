
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tv_nsec; scalar_t__ tv_sec; } ;
struct nfsfsinfo {int fs_rtpref; int fs_wtpref; int fs_dtpref; int fs_maxfilesize; int fs_properties; TYPE_1__ fs_timedelta; void* fs_wtmult; void* fs_wtmax; void* fs_rtmult; void* fs_rtmax; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 void* VAR_6 ;

void
FUNC_0(struct nfsfsinfo *VAR_7, int VAR_8)
{
 int VAR_9;






 if (VAR_8)
  VAR_9 = VAR_5;
 else
  VAR_9 = VAR_6;
 VAR_7->fs_rtmax = VAR_6;
 VAR_7->fs_rtpref = VAR_9;
 VAR_7->fs_rtmult = VAR_4;
 VAR_7->fs_wtmax = VAR_6;
 VAR_7->fs_wtpref = VAR_9;
 VAR_7->fs_wtmult = VAR_4;
 VAR_7->fs_dtpref = VAR_9;
 VAR_7->fs_maxfilesize = 0xffffffffffffffffull;
 VAR_7->fs_timedelta.tv_sec = 0;
 VAR_7->fs_timedelta.tv_nsec = 1;
 VAR_7->fs_properties = (VAR_2 |
     VAR_3 | VAR_1 |
     VAR_0);
}
