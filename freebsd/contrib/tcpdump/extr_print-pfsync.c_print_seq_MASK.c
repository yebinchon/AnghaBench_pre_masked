
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfsync_state_peer {scalar_t__ seqlo; scalar_t__ seqhi; scalar_t__ seqdiff; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (scalar_t__) ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_0, const struct pfsync_state_peer *VAR_1)
{
 if (VAR_1->seqdiff)
  FUNC_0((VAR_0, "[%u + %u](+%u)", FUNC_1(VAR_1->seqlo),
      FUNC_1(VAR_1->seqhi) - FUNC_1(VAR_1->seqlo), FUNC_1(VAR_1->seqdiff)));
 else
  FUNC_0((VAR_0, "[%u + %u]", FUNC_1(VAR_1->seqlo),
      FUNC_1(VAR_1->seqhi) - FUNC_1(VAR_1->seqlo)));
}
