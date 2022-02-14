
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct timespec {scalar_t__ tv_sec; } ;
struct TYPE_10__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct stat {TYPE_3__ st_mtim; } ;
struct TYPE_11__ {scalar_t__ tv_sec; scalar_t__ tv_nsec; } ;
struct __res_state_ext {scalar_t__ reload_period; scalar_t__ conf_stat; TYPE_4__ conf_mtim; } ;
typedef TYPE_5__* res_state ;
struct TYPE_8__ {struct __res_state_ext* ext; } ;
struct TYPE_9__ {TYPE_1__ _ext; } ;
struct TYPE_12__ {int options; TYPE_2__ _u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct timespec*) ;
 scalar_t__ FUNC_1 (int ,struct stat*) ;

__attribute__((used)) static res_state
FUNC_2(res_state VAR_3)
{
 struct timespec VAR_4;
 struct stat VAR_5;
 struct __res_state_ext *VAR_6;

 if ((VAR_3->options & VAR_1) == 0) {
  return (VAR_3);
 }

 VAR_6 = VAR_3->_u._ext.ext;
 if (VAR_6 == ((void*)0) || VAR_6->reload_period == 0) {
  return (VAR_3);
 }

 if (FUNC_0(VAR_0, &VAR_4) != 0 ||
     (VAR_4.tv_sec - VAR_6->conf_stat) < VAR_6->reload_period) {
  return (VAR_3);
 }

 VAR_6->conf_stat = VAR_4.tv_sec;
 if (FUNC_1(VAR_2, &VAR_5) == 0 &&
     (VAR_5.st_mtim.tv_sec != VAR_6->conf_mtim.tv_sec ||
      VAR_5.st_mtim.tv_nsec != VAR_6->conf_mtim.tv_nsec)) {
  VAR_3->options &= ~VAR_1;
 }

 return (VAR_3);
}
