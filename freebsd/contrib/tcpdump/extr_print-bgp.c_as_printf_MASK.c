
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int ndo_bflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (char*,int,char*,int,...) ;

__attribute__((used)) static char *
FUNC_1(netdissect_options *VAR_0,
          char *VAR_1, int VAR_2, u_int VAR_3)
{
 if (!VAR_0->ndo_bflag || VAR_3 <= 0xFFFF) {
  FUNC_0(VAR_1, VAR_2, "%u", VAR_3);
 } else {
  FUNC_0(VAR_1, VAR_2, "%u.%u", VAR_3 >> 16, VAR_3 & 0xFFFF);
 }
 return VAR_1;
}
