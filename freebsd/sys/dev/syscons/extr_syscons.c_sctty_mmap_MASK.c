
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int vm_paddr_t ;
typedef int vm_ooffset_t ;
typedef int vm_memattr_t ;
struct tty {int dummy; } ;
struct TYPE_5__ {TYPE_1__* sc; } ;
typedef TYPE_2__ scr_stat ;
struct TYPE_4__ {int adp; TYPE_2__* cur_scp; } ;


 TYPE_2__* FUNC_0 (struct tty*) ;
 int FUNC_1 (int ,int ,int *,int,int *) ;

__attribute__((used)) static int
FUNC_2(struct tty *VAR_0, vm_ooffset_t VAR_1, vm_paddr_t *VAR_2,
    int VAR_3, vm_memattr_t *VAR_4)
{
    scr_stat *VAR_5;

    VAR_5 = FUNC_0(VAR_0);
    if (VAR_5 != VAR_5->sc->cur_scp)
 return -1;
    return FUNC_1(VAR_5->sc->adp, VAR_1, VAR_2, VAR_3, VAR_4);
}
