
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct fid {int dummy; } ;
struct TYPE_3__ {int fh_fid; } ;
typedef TYPE_1__ fhandle_t ;


 int FUNC_0 (int *,int,int ) ;

uint32_t
FUNC_1(fhandle_t *VAR_0)
{
 uint32_t VAR_1;

 VAR_1 = FUNC_0(&VAR_0->fh_fid, sizeof(struct fid), 0);
 return (VAR_1);
}
