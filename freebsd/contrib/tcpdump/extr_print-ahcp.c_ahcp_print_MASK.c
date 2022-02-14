
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int u_int ;
typedef scalar_t__ u_char ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int const VAR_0 ;
 scalar_t__ const VAR_1 ;

 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__ const,int) ;
 int FUNC_3 (TYPE_1__*,scalar_t__ const*,scalar_t__ const*) ;
 int VAR_2 ;
 int FUNC_4 (TYPE_1__*,scalar_t__ const*,int ,int) ;
 int VAR_3 ;

void
FUNC_5(netdissect_options *VAR_4, const u_char *VAR_5, const u_int VAR_6)
{
 const u_char *VAR_7 = VAR_5 + VAR_6;
 uint8_t VAR_8;

 FUNC_1((VAR_4, "AHCP"));
 if (VAR_6 < 2)
  goto invalid;

 FUNC_2(*VAR_5, 1);
 if (*VAR_5 != VAR_1)
  goto invalid;
 VAR_5 += 1;

 FUNC_2(*VAR_5, 1);
 VAR_8 = *VAR_5;
 VAR_5 += 1;
 switch (VAR_8) {
  case 128: {
   FUNC_1((VAR_4, " Version 1"));
   if (VAR_6 < VAR_0)
    goto invalid;
   if (!VAR_4->ndo_vflag) {
    FUNC_2(*VAR_5, VAR_0 - 2);
    VAR_5 += VAR_0 - 2;
   } else {

    FUNC_2(*VAR_5, 1);
    FUNC_1((VAR_4, "\n\tHopcount %u", *VAR_5));
    VAR_5 += 1;

    FUNC_2(*VAR_5, 1);
    FUNC_1((VAR_4, ", Original Hopcount %u", *VAR_5));
    VAR_5 += 1;

    FUNC_2(*VAR_5, 4);
    FUNC_1((VAR_4, ", Nonce 0x%08x", FUNC_0(VAR_5)));
    VAR_5 += 4;

    FUNC_2(*VAR_5, 8);
    FUNC_1((VAR_4, ", Source Id %s", FUNC_4(VAR_4, VAR_5, 0, 8)));
    VAR_5 += 8;

    FUNC_2(*VAR_5, 8);
    FUNC_1((VAR_4, ", Destination Id %s", FUNC_4(VAR_4, VAR_5, 0, 8)));
    VAR_5 += 8;
   }

   FUNC_3(VAR_4, VAR_5, VAR_7);
   break;
  }
  default:
   FUNC_1((VAR_4, " Version %u (unknown)", VAR_8));
   break;
 }
 return;

invalid:
 FUNC_1((VAR_4, "%s", VAR_2));
 FUNC_2(*VAR_5, VAR_7 - VAR_5);
 return;
trunc:
 FUNC_1((VAR_4, "%s", VAR_3));
}
