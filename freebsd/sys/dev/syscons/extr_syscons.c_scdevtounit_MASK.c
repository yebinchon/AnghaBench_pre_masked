
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty {int dummy; } ;
struct TYPE_4__ {TYPE_1__* sc; } ;
struct TYPE_3__ {int unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct tty*) ;
 TYPE_2__* VAR_2 ;
 int FUNC_1 () ;

__attribute__((used)) static int
FUNC_2(struct tty *VAR_3)
{
    int VAR_4 = FUNC_0(VAR_3);

    if (VAR_4 == VAR_1)
 return ((VAR_2 != ((void*)0)) ? VAR_2->sc->unit : -1);
    else if ((VAR_4 < 0) || (VAR_4 >= VAR_0*FUNC_1()))
 return -1;
    else
 return VAR_4/VAR_0;
}
