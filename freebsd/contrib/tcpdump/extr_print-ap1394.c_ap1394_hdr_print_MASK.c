
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct firewire_header {int firewire_type; int firewire_dhost; int firewire_shost; } ;
struct TYPE_5__ {int ndo_qflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ,char*,int ) ;

__attribute__((used)) static inline void
FUNC_4(netdissect_options *VAR_1, register const u_char *VAR_2, u_int VAR_3)
{
 register const struct firewire_header *VAR_4;
 uint16_t VAR_5;

 VAR_4 = (const struct firewire_header *)VAR_2;

 FUNC_1((VAR_1, "%s > %s",
       FUNC_2(VAR_1, VAR_4->firewire_shost),
       FUNC_2(VAR_1, VAR_4->firewire_dhost)));

 VAR_5 = FUNC_0(&VAR_4->firewire_type);
 if (!VAR_1->ndo_qflag) {
  FUNC_1((VAR_1, ", ethertype %s (0x%04x)",
          FUNC_3(VAR_0,"Unknown", VAR_5),
                               VAR_5));
        } else {
                FUNC_1((VAR_1, ", %s", FUNC_3(VAR_0,"Unknown Ethertype (0x%04x)", VAR_5)));
        }

 FUNC_1((VAR_1, ", length %u: ", VAR_3));
}
