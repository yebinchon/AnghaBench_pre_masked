
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint32_t ;
struct TYPE_4__ {int RequestFrameSize; } ;
struct mpt_softc {TYPE_1__ ioc_facts; } ;
struct TYPE_5__ {scalar_t__ req_pbuf; int index; int * req_vbuf; } ;
typedef TYPE_2__ request_t ;


 int FUNC_0 (struct mpt_softc*,char*,...) ;
 int FUNC_1 (struct mpt_softc*,char*,...) ;

void
FUNC_2(struct mpt_softc *VAR_0, request_t *VAR_1)
{
        uint32_t *VAR_2 = VAR_1->req_vbuf;
 int VAR_3;

 FUNC_0(VAR_0, "Send Request %d (%jx):",
     VAR_1->index, (uintmax_t) VAR_1->req_pbuf);
 for (VAR_3 = 0; VAR_3 < VAR_0->ioc_facts.RequestFrameSize; VAR_3++) {
  if ((VAR_3 & 0x7) == 0) {
   FUNC_1(VAR_0, "\n");
   FUNC_0(VAR_0, " ");
  }
  FUNC_1(VAR_0, " %08x", VAR_2[VAR_3]);
 }
 FUNC_1(VAR_0, "\n");
}
