
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct isis_spb_mcid {int * digest; int revision_lvl; int name; int format_id; } ;
struct TYPE_5__ {int ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct isis_spb_mcid const) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_1,
                const struct isis_spb_mcid *VAR_2)
{
  int VAR_3;

  FUNC_2(*VAR_2);
  FUNC_1((VAR_1, "ID: %d, Name: ", VAR_2->format_id));

  if (FUNC_3(VAR_1, VAR_2->name, 32, VAR_1->ndo_snapend))
    goto trunc;

  FUNC_1((VAR_1, "\n\t              Lvl: %d", FUNC_0(VAR_2->revision_lvl)));

  FUNC_1((VAR_1, ", Digest: "));

  for(VAR_3=0;VAR_3<16;VAR_3++)
    FUNC_1((VAR_1, "%.2x ", VAR_2->digest[VAR_3]));

trunc:
  FUNC_1((VAR_1, "%s", VAR_0));
}
