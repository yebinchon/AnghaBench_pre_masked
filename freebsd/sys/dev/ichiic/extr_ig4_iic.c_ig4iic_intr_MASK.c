
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ intr_mask; int io_lock; } ;
typedef TYPE_1__ ig4iic_softc_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_5(void *VAR_3)
{
 ig4iic_softc_t *VAR_4 = VAR_3;
 int VAR_5 = VAR_1;

 FUNC_1(&VAR_4->io_lock);

 if (VAR_4->intr_mask != 0 && FUNC_3(VAR_4, VAR_2) != 0) {

  FUNC_0(VAR_4, 0);
  FUNC_4(VAR_4);
  VAR_5 = VAR_0;
 }
 FUNC_2(&VAR_4->io_lock);

 return (VAR_5);
}
