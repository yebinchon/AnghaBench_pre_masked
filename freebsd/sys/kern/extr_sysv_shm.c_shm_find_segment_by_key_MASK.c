
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct prison {int dummy; } ;
typedef scalar_t__ key_t ;
struct TYPE_5__ {int mode; scalar_t__ key; } ;
struct TYPE_6__ {TYPE_1__ shm_perm; } ;
struct TYPE_8__ {TYPE_2__ u; TYPE_3__* cred; } ;
struct TYPE_7__ {struct prison* cr_prison; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;

__attribute__((used)) static int
FUNC_0(struct prison *VAR_3, key_t VAR_4)
{
 int VAR_5;

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++)
  if ((VAR_2[VAR_5].u.shm_perm.mode & VAR_0) &&
      VAR_2[VAR_5].cred != ((void*)0) &&
      VAR_2[VAR_5].cred->cr_prison == VAR_3 &&
      VAR_2[VAR_5].u.shm_perm.key == VAR_4)
   return (VAR_5);
 return (-1);
}
