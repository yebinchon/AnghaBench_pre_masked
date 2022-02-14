
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_3__* fc; } ;
struct fwip_softc {TYPE_2__ fd; } ;
struct TYPE_6__ {TYPE_1__* atq; } ;
struct TYPE_4__ {int (* start ) (TYPE_3__*) ;} ;


 int FUNC_0 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_1 (void *VAR_0, int VAR_1)
{
 struct fwip_softc *VAR_2 = VAR_0;

 VAR_2->fd.fc->atq->start(VAR_2->fd.fc);
}
