
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_4__ {int ndo_qflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static inline void
FUNC_2(netdissect_options *VAR_1, u_int VAR_2, u_int VAR_3)
{
 if (!VAR_1->ndo_qflag) {
  FUNC_0((VAR_1, "AF %s (%u)",
   FUNC_1(VAR_0,"Unknown",VAR_2),VAR_2));
 } else {
  FUNC_0((VAR_1, "%s",
   FUNC_1(VAR_0,"Unknown AF %u",VAR_2)));
 }

 FUNC_0((VAR_1, ", length %u: ", VAR_3));
}
