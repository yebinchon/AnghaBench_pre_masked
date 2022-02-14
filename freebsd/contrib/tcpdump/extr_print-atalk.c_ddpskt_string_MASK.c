
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ ndo_nflag; } ;
typedef TYPE_1__ netdissect_options ;
typedef int buf ;


 int VAR_0 ;
 int FUNC_0 (char*,int,char*,int) ;
 char const* FUNC_1 (int ,char*,int) ;

__attribute__((used)) static const char *
FUNC_2(netdissect_options *VAR_1,
              register int VAR_2)
{
 static char VAR_3[8];

 if (VAR_1->ndo_nflag) {
  (void)FUNC_0(VAR_3, sizeof(VAR_3), "%d", VAR_2);
  return (VAR_3);
 }
 return (FUNC_1(VAR_0, "%d", VAR_2));
}
