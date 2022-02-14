
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* opt_rfs; } ;
typedef TYPE_1__ am_opts ;
struct TYPE_6__ {char* (* fs_match ) (TYPE_1__*) ;} ;
typedef TYPE_2__ am_ops ;


 char* FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static char *
FUNC_1(am_opts *VAR_0)
{
  extern am_ops VAR_1;




  if (!VAR_0->opt_rfs)
    VAR_0->opt_rfs = "/";

  return (*VAR_1.fs_match) (VAR_0);
}
