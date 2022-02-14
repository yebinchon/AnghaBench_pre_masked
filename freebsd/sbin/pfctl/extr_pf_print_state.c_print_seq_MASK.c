
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfsync_state_peer {scalar_t__ seqlo; scalar_t__ seqhi; scalar_t__ seqdiff; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (char*,int,int,...) ;

void
FUNC_2(struct pfsync_state_peer *VAR_0)
{
 if (VAR_0->seqdiff)
  FUNC_1("[%u + %u](+%u)", FUNC_0(VAR_0->seqlo),
      FUNC_0(VAR_0->seqhi) - FUNC_0(VAR_0->seqlo), FUNC_0(VAR_0->seqdiff));
 else
  FUNC_1("[%u + %u]", FUNC_0(VAR_0->seqlo),
      FUNC_0(VAR_0->seqhi) - FUNC_0(VAR_0->seqlo));
}
