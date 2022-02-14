
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {TYPE_1__* desc_ring; } ;
struct awg_softc {TYPE_2__ rx; } ;
struct TYPE_3__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct awg_softc *VAR_1, int VAR_2)
{

 VAR_1->rx.desc_ring[VAR_2].status = FUNC_0(VAR_0);
}
