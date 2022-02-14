
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct siosc {int io_port; int io_res; TYPE_1__* methods; int conf_lock; } ;
struct TYPE_2__ {int (* enter ) (int ,int ) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct siosc *VAR_0)
{
 FUNC_0(&VAR_0->conf_lock);
 VAR_0->methods->enter(VAR_0->io_res, VAR_0->io_port);
}
