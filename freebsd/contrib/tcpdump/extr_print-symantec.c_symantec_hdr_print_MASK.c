
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef int u_int ;
typedef int u_char ;
struct symantec_header {int ether_type; } ;
struct TYPE_4__ {int ndo_qflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_3(netdissect_options *VAR_2, register const u_char *VAR_3, u_int VAR_4)
{
 register const struct symantec_header *VAR_5;
 uint16_t VAR_6;

 VAR_5 = (const struct symantec_header *)VAR_3;

 VAR_6 = FUNC_0(&VAR_5->ether_type);
 if (!VAR_2->ndo_qflag) {
         if (VAR_6 <= VAR_0)
            FUNC_1((VAR_2, "invalid ethertype %u", VAR_6));
                else
            FUNC_1((VAR_2, "ethertype %s (0x%04x)",
           FUNC_2(VAR_1,"Unknown", VAR_6),
                                       VAR_6));
        } else {
                if (VAR_6 <= VAR_0)
                          FUNC_1((VAR_2, "invalid ethertype %u", VAR_6));
                else
                          FUNC_1((VAR_2, "%s", FUNC_2(VAR_1,"Unknown Ethertype (0x%04x)", VAR_6)));
        }

 FUNC_1((VAR_2, ", length %u: ", VAR_4));
}
