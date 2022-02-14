
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {TYPE_2__* fc; } ;
struct dcons_crom_softc {TYPE_1__ fd; } ;
struct TYPE_4__ {int (* poll ) (TYPE_2__*,int,int) ;} ;


 int FUNC_0 (TYPE_2__*,int,int) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0, int VAR_1)
{
 struct dcons_crom_softc *VAR_2 = (struct dcons_crom_softc *) VAR_0;

 VAR_2->fd.fc->poll(VAR_2->fd.fc, -1, -1);
}
