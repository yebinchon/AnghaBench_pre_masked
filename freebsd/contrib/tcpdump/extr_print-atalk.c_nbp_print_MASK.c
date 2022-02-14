
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct atNBPtuple {int skt; int node; int net; int enumerator; } ;
struct atNBP {int control; int id; } ;
struct TYPE_7__ {int * ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ,int ) ;

 int VAR_0 ;


 int FUNC_3 (TYPE_1__*,struct atNBPtuple const*,int const*) ;
 struct atNBPtuple* FUNC_4 (TYPE_1__*,struct atNBPtuple const*,int const*,int ,int ,int ) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_2,
          register const struct atNBP *VAR_3, u_int VAR_4, register u_short VAR_5,
          register u_char VAR_6, register u_char VAR_7)
{
 register const struct atNBPtuple *VAR_8 =
  (const struct atNBPtuple *)((const u_char *)VAR_3 + VAR_0);
 int VAR_9;
 const u_char *VAR_10;

 if (VAR_4 < VAR_0) {
  FUNC_1((VAR_2, " truncated-nbp %u", VAR_4));
  return;
 }

 VAR_4 -= VAR_0;
 if (VAR_4 < 8) {

  FUNC_1((VAR_2, " truncated-nbp %u", VAR_4 + VAR_0));
  return;
 }

 VAR_10 = VAR_2->ndo_snapend;
 if ((const u_char *)VAR_8 > VAR_10) {
  FUNC_1((VAR_2, "%s", VAR_1));
  return;
 }
 switch (VAR_9 = VAR_3->control & 0xf0) {

 case 130:
 case 129:
  FUNC_1((VAR_2, VAR_9 == 129? " nbp-lkup %d:":" nbp-brRq %d:", VAR_3->id));
  if ((const u_char *)(VAR_8 + 1) > VAR_10) {
   FUNC_1((VAR_2, "%s", VAR_1));
   return;
  }
  (void)FUNC_3(VAR_2, VAR_8, VAR_10);





  if ((VAR_3->control & 0xf) != 1)
   FUNC_1((VAR_2, " [ntup=%d]", VAR_3->control & 0xf));
  if (VAR_8->enumerator)
   FUNC_1((VAR_2, " [enum=%d]", VAR_8->enumerator));
  if (FUNC_0(&VAR_8->net) != VAR_5 ||
      VAR_8->node != VAR_6 || VAR_8->skt != VAR_7)
   FUNC_1((VAR_2, " [addr=%s.%d]",
       FUNC_2(VAR_2, FUNC_0(&VAR_8->net),
       VAR_8->node), VAR_8->skt));
  break;

 case 128:
  FUNC_1((VAR_2, " nbp-reply %d:", VAR_3->id));


  for (VAR_9 = VAR_3->control & 0xf; --VAR_9 >= 0 && VAR_8; )
   VAR_8 = FUNC_4(VAR_2, VAR_8, VAR_10, VAR_5, VAR_6, VAR_7);
  break;

 default:
  FUNC_1((VAR_2, " nbp-0x%x  %d (%u)", VAR_3->control, VAR_3->id, VAR_4));
  break;
 }
}
