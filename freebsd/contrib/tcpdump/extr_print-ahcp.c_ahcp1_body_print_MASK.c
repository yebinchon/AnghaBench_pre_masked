
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
typedef scalar_t__ u_char ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__ const,int) ;
 int VAR_1 ;
 int FUNC_3 (TYPE_1__*,scalar_t__ const*,scalar_t__ const*) ;
 int VAR_2 ;
 int FUNC_4 (int ,char*,scalar_t__) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_4, const u_char *VAR_5, const u_char *VAR_6)
{
 uint8_t VAR_7, VAR_8;
 uint16_t VAR_9;

 if (VAR_5 + VAR_0 > VAR_6)
  goto invalid;

 FUNC_2(*VAR_5, 1);
 VAR_7 = *VAR_5;
 VAR_5 += 1;

 FUNC_2(*VAR_5, 1);
 VAR_8 = *VAR_5;
 VAR_5 += 1;

 FUNC_2(*VAR_5, 2);
 VAR_9 = FUNC_0(VAR_5);
 VAR_5 += 2;

 if (VAR_4->ndo_vflag) {
  FUNC_1((VAR_4, "\n\t%s", FUNC_4(VAR_1, "Unknown-%u", VAR_7)));
  if (VAR_8 != 0)
   FUNC_1((VAR_4, ", MBZ %u", VAR_8));
  FUNC_1((VAR_4, ", Length %u", VAR_9));
 }
 if (VAR_5 + VAR_9 > VAR_6)
  goto invalid;


 if (VAR_4->ndo_vflag >= 2)
  FUNC_3(VAR_4, VAR_5, VAR_5 + VAR_9);
 else
  FUNC_2(*VAR_5, VAR_9);
 return;

invalid:
 FUNC_1((VAR_4, "%s", VAR_2));
 FUNC_2(*VAR_5, VAR_6 - VAR_5);
 return;
trunc:
 FUNC_1((VAR_4, "%s", VAR_3));
}
