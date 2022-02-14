
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ time_t ;
struct TYPE_2__ {int serverzone; } ;
struct smb_sb_info {TYPE_1__ opt; } ;



__attribute__((used)) static time_t
FUNC_0(struct smb_sb_info *VAR_0, time_t VAR_1)
{
 return VAR_1 + VAR_0->opt.serverzone*60;
}
