
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_short ;
typedef scalar_t__ u_char ;
struct atNBPtuple {int enumerator; scalar_t__ skt; scalar_t__ node; int net; } ;
typedef int netdissect_options ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__,scalar_t__) ;
 struct atNBPtuple* FUNC_3 (int *,struct atNBPtuple const*,scalar_t__ const*) ;
 int VAR_0 ;

__attribute__((used)) static const struct atNBPtuple *
FUNC_4(netdissect_options *VAR_1,
                register const struct atNBPtuple *VAR_2, register const u_char *VAR_3,
                register u_short VAR_4, register u_char VAR_5, register u_char VAR_6)
{
 register const struct atNBPtuple *VAR_7;

 if ((const u_char *)(VAR_2 + 1) > VAR_3) {
  FUNC_1((VAR_1, "%s", VAR_0));
  return 0;
 }
 VAR_7 = FUNC_3(VAR_1, VAR_2, VAR_3);


 if (VAR_2->enumerator != 1)
  FUNC_1((VAR_1, "(%d)", VAR_2->enumerator));


 if (VAR_2->skt != VAR_6)
  FUNC_1((VAR_1, " %d", VAR_2->skt));


 if (FUNC_0(&VAR_2->net) != VAR_4 || VAR_2->node != VAR_5)
  FUNC_1((VAR_1, " [addr=%s]",
      FUNC_2(VAR_1, FUNC_0(&VAR_2->net), VAR_2->node)));

 return (VAR_7);
}
