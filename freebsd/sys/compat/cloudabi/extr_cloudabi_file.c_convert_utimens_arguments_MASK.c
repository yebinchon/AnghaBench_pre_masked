
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct timespec {int tv_nsec; int tv_sec; } ;
typedef int cloudabi_fsflags_t ;
struct TYPE_3__ {int st_atim; int st_mtim; } ;
typedef TYPE_1__ cloudabi_filestat_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 void* VAR_5 ;

__attribute__((used)) static void
FUNC_0(const cloudabi_filestat_t *VAR_6,
    cloudabi_fsflags_t VAR_7, struct timespec *VAR_8)
{

 if ((VAR_7 & VAR_1) != 0) {
  VAR_8[0].tv_nsec = VAR_4;
 } else if ((VAR_7 & VAR_0) != 0) {
  VAR_8[0].tv_sec = VAR_6->st_atim / 1000000000;
  VAR_8[0].tv_nsec = VAR_6->st_atim % 1000000000;
 } else {
  VAR_8[0].tv_nsec = VAR_5;
 }

 if ((VAR_7 & VAR_3) != 0) {
  VAR_8[1].tv_nsec = VAR_4;
 } else if ((VAR_7 & VAR_2) != 0) {
  VAR_8[1].tv_sec = VAR_6->st_mtim / 1000000000;
  VAR_8[1].tv_nsec = VAR_6->st_mtim % 1000000000;
 } else {
  VAR_8[1].tv_nsec = VAR_5;
 }
}
