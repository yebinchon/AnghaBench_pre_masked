
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timeval {int tv_usec; int tv_sec; } ;
struct TYPE_2__ {int ST_MTIM_NSEC; } ;
struct stat {int st_mtime; TYPE_1__ st_mtim; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,TYPE_1__*) ;
 scalar_t__ FUNC_1 (struct timeval*,int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3 (struct stat *VAR_1)
{
  FUNC_2 (&VAR_1->st_mtime);
}
