
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_11__ {int ndo_vflag; scalar_t__ ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (TYPE_1__*,int const*) ;
 int FUNC_4 (TYPE_1__*,int const*) ;
 int FUNC_5 (TYPE_1__*,int const*,int const*,int) ;
 int FUNC_6 (TYPE_1__*,int const*,int const*,int) ;
 int FUNC_7 (TYPE_1__*,int const*,int const*,int) ;
 int FUNC_8 (TYPE_1__*,int const*) ;
 int FUNC_9 (TYPE_1__*,int const*,int const*,int) ;
 int VAR_0 ;

void
FUNC_10(netdissect_options *VAR_1,
            register const u_char *VAR_2, register u_int VAR_3)
{
 register const u_char *VAR_4;
 register u_char VAR_5;

 VAR_4 = (const u_char *)VAR_1->ndo_snapend;
 if (VAR_2 >= VAR_4)
  return;

 FUNC_1(VAR_2[1]);
 VAR_5 = VAR_2[1];


 VAR_2 += 8;
 VAR_3 -= 8;

 switch (VAR_5) {

 case 130:
  FUNC_0((VAR_1, " Probe"));
  if (VAR_1->ndo_vflag) {
   if (FUNC_7(VAR_1, VAR_2, VAR_4, VAR_3) < 0)
    goto trunc;
  }
  break;

 case 128:
  FUNC_0((VAR_1, " Report"));
  if (VAR_1->ndo_vflag > 1) {
   if (FUNC_9(VAR_1, VAR_2, VAR_4, VAR_3) < 0)
    goto trunc;
  }
  break;

 case 136:
  FUNC_0((VAR_1, " Ask-neighbors(old)"));
  break;

 case 132:
  FUNC_0((VAR_1, " Neighbors(old)"));
  if (FUNC_5(VAR_1, VAR_2, VAR_4, VAR_3) < 0)
   goto trunc;
  break;

 case 135:
  FUNC_0((VAR_1, " Ask-neighbors2"));
  break;

 case 131:
  FUNC_0((VAR_1, " Neighbors2"));




  VAR_2 -= 4;
  FUNC_2(VAR_2[0], 4);
  VAR_0 = (VAR_2[0] << 24) | (VAR_2[1] << 16) |
      (VAR_2[2] << 8) | VAR_2[3];
  VAR_2 += 4;
  if (FUNC_6(VAR_1, VAR_2, VAR_4, VAR_3) < 0)
   goto trunc;
  break;

 case 129:
  FUNC_0((VAR_1, " Prune"));
  if (FUNC_8(VAR_1, VAR_2) < 0)
   goto trunc;
  break;

 case 134:
  FUNC_0((VAR_1, " Graft"));
  if (FUNC_3(VAR_1, VAR_2) < 0)
   goto trunc;
  break;

 case 133:
  FUNC_0((VAR_1, " Graft-ACK"));
  if (FUNC_4(VAR_1, VAR_2) < 0)
   goto trunc;
  break;

 default:
  FUNC_0((VAR_1, " [type %d]", VAR_5));
  break;
 }
 return;

trunc:
 FUNC_0((VAR_1, "[|dvmrp]"));
 return;
}
