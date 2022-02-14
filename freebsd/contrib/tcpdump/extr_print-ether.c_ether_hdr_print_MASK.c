
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
typedef scalar_t__ u_int ;
typedef int u_char ;
struct ether_header {int ether_length_type; } ;
struct TYPE_5__ {int ndo_qflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (struct ether_header const*) ;
 int FUNC_1 (struct ether_header const*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int VAR_1 ;
 int FUNC_5 (int ,char*,scalar_t__) ;

__attribute__((used)) static inline void
FUNC_6(netdissect_options *VAR_2,
                const u_char *VAR_3, u_int VAR_4)
{
 register const struct ether_header *VAR_5;
 uint16_t VAR_6;

 VAR_5 = (const struct ether_header *)VAR_3;

 FUNC_3((VAR_2, "%s > %s",
       FUNC_4(VAR_2, FUNC_1(VAR_5)),
       FUNC_4(VAR_2, FUNC_0(VAR_5))));

 VAR_6 = FUNC_2(&VAR_5->ether_length_type);
 if (!VAR_2->ndo_qflag) {
         if (VAR_6 <= VAR_0) {
          FUNC_3((VAR_2, ", 802.3"));
   VAR_4 = VAR_6;
  } else
          FUNC_3((VAR_2, ", ethertype %s (0x%04x)",
           FUNC_5(VAR_1,"Unknown", VAR_6),
                                       VAR_6));
        } else {
                if (VAR_6 <= VAR_0) {
                        FUNC_3((VAR_2, ", 802.3"));
   VAR_4 = VAR_6;
  } else
                        FUNC_3((VAR_2, ", %s", FUNC_5(VAR_1,"Unknown Ethertype (0x%04x)", VAR_6)));
        }

 FUNC_3((VAR_2, ", length %u: ", VAR_4));
}
