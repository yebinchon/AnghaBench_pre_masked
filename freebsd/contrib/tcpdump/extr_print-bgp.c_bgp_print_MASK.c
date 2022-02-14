
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_char ;
struct bgp {int bgp_type; int bgp_len; } ;
struct TYPE_5__ {int const* ndo_snapend; int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
typedef int marker ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const,int) ;
 scalar_t__ FUNC_2 (int const,int) ;
 int FUNC_3 (TYPE_1__*,int const*,int) ;
 int VAR_1 ;
 scalar_t__ FUNC_4 (int const*,int const*,int) ;
 int FUNC_5 (struct bgp*,int const*,int) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,int ) ;

void
FUNC_8(netdissect_options *VAR_2,
          const u_char *VAR_3, int VAR_4)
{
 const u_char *VAR_5;
 const u_char *VAR_6;
 const u_char *VAR_7;
 const u_char VAR_8[] = {
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
  0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
 };
 struct bgp VAR_9;
 uint16_t VAR_10;

 VAR_6 = VAR_3 + VAR_4;
 if (VAR_2->ndo_snapend < VAR_3 + VAR_4)
  VAR_6 = VAR_2->ndo_snapend;

 FUNC_0((VAR_2, ": BGP"));

        if (VAR_2->ndo_vflag < 1)
                return;

 VAR_5 = VAR_3;
 VAR_7 = VAR_5;
 while (VAR_5 < VAR_6) {
  if (!FUNC_2(VAR_5[0], 1))
   break;
  if (VAR_5[0] != 0xff) {
   VAR_5++;
   continue;
  }

  if (!FUNC_2(VAR_5[0], sizeof(VAR_8)))
   break;
  if (FUNC_4(VAR_5, VAR_8, sizeof(VAR_8)) != 0) {
   VAR_5++;
   continue;
  }


  FUNC_1(VAR_5[0], VAR_0);
  FUNC_5(&VAR_9, VAR_5, VAR_0);

  if (VAR_7 != VAR_5)
   FUNC_0((VAR_2, " [|BGP]"));

  VAR_10 = FUNC_6(VAR_9.bgp_len);
  if (VAR_10 < VAR_0) {
   FUNC_0((VAR_2, "\n[|BGP Bogus header length %u < %u]", VAR_10,
       VAR_0));
   break;
  }

  if (FUNC_2(VAR_5[0], VAR_10)) {
   if (!FUNC_3(VAR_2, VAR_5, VAR_10))
    return;
   VAR_5 += VAR_10;
   VAR_7 = VAR_5;
  } else {
   FUNC_0((VAR_2, "\n[|BGP %s]",
          FUNC_7(VAR_1,
       "Unknown Message Type",
       VAR_9.bgp_type)));
   break;
  }
 }

 return;

trunc:
 FUNC_0((VAR_2, " [|BGP]"));
}
