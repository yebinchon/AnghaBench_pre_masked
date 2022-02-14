
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct arc_header {int arc_dhost; int arc_shost; int arc_type; } ;
struct TYPE_4__ {scalar_t__ ndo_qflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 char* FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static inline void
FUNC_2(netdissect_options *VAR_1, const u_char *VAR_2, u_int VAR_3, int VAR_4,
             int VAR_5, u_int VAR_6)
{
 const struct arc_header *VAR_7;
 const char *VAR_8;


 VAR_7 = (const struct arc_header *)VAR_2;


 if (VAR_1->ndo_qflag) {
  FUNC_0((VAR_1, "%02x %02x %d: ",
        VAR_7->arc_shost,
        VAR_7->arc_dhost,
        VAR_3));
  return;
 }

 VAR_8 = FUNC_1(VAR_0, "%02x", VAR_7->arc_type);

 if (!VAR_4) {
  FUNC_0((VAR_1, "%02x %02x %s %d: ",
        VAR_7->arc_shost, VAR_7->arc_dhost, VAR_8,
        VAR_3));
        return;
 }

 if (VAR_5 == 0) {
  FUNC_0((VAR_1, "%02x %02x %s seqid %04x %d: ",
   VAR_7->arc_shost, VAR_7->arc_dhost, VAR_8, VAR_6,
   VAR_3));
   return;
 }

 if (VAR_5 & 1)
  FUNC_0((VAR_1, "%02x %02x %s seqid %04x "
   "(first of %d fragments) %d: ",
   VAR_7->arc_shost, VAR_7->arc_dhost, VAR_8, VAR_6,
   (VAR_5 + 3) / 2, VAR_3));
 else
  FUNC_0((VAR_1, "%02x %02x %s seqid %04x "
   "(fragment %d) %d: ",
   VAR_7->arc_shost, VAR_7->arc_dhost, VAR_8, VAR_6,
   VAR_5/2 + 1, VAR_3));
}
