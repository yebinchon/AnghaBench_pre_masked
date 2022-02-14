
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int mf_flags; } ;
typedef TYPE_1__ mntfs ;
struct TYPE_9__ {int (* umounted ) (TYPE_1__*) ;} ;
struct TYPE_8__ {int (* umounted ) (TYPE_1__*) ;} ;


 int VAR_0 ;
 TYPE_6__ VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(mntfs *VAR_3)
{
  if (VAR_3->mf_flags & VAR_0) {
    if (VAR_1.umounted)
      VAR_1.umounted(VAR_3);
  } else {
    if (VAR_2.umounted)
      VAR_2.umounted(VAR_3);
  }
}
