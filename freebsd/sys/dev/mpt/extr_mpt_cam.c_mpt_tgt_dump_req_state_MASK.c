
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct mpt_softc {int dummy; } ;
struct TYPE_5__ {int state; int index; int serno; } ;
typedef TYPE_1__ request_t ;


 int FUNC_0 (struct mpt_softc*,char*,TYPE_1__*,int ,int ,int ,int ) ;
 int FUNC_1 (struct mpt_softc*,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(struct mpt_softc *VAR_0, request_t *VAR_1)
{

 FUNC_0(VAR_0, "req %p:%u index %u (%x) state %x\n", VAR_1, VAR_1->serno,
     VAR_1->index, VAR_1->index, VAR_1->state);
 FUNC_1(VAR_0, VAR_1);
}
