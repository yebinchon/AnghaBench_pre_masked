
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int const,scalar_t__ const) ;
 int FUNC_2 (TYPE_1__*,char*,int const*,scalar_t__ const) ;
 int VAR_0 ;

__attribute__((used)) static const u_char *
FUNC_3(netdissect_options *VAR_1,
                const u_char *VAR_2, const u_char *VAR_3, const u_int VAR_4)
{
 if (VAR_4 == 0)
  return VAR_2;

 FUNC_0((VAR_1, "\n\t data (%u octets)", VAR_4));
 FUNC_1(*VAR_2, VAR_4);
 if (VAR_1->ndo_vflag >= 2)
  FUNC_2(VAR_1, "\n\t  ", VAR_2, VAR_4);
 return VAR_2 + VAR_4;

trunc:
 FUNC_0((VAR_1, "%s", VAR_0));
 return VAR_3;
}
