
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct TYPE_9__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int const*,int ,int ) ;
 int FUNC_2 (TYPE_1__*,int const*,int ) ;
 int FUNC_3 (TYPE_1__*,int const*,int ) ;
 int FUNC_4 (TYPE_1__*,int const*,int ) ;
 int FUNC_5 (TYPE_1__*,int const*,int ) ;

__attribute__((used)) static int
FUNC_6(netdissect_options *VAR_0, u_char VAR_1, const u_char *VAR_2,
    u_int VAR_3, u_int VAR_4)
{
 switch (VAR_1) {

 case 129:
 case 131:
         FUNC_4(VAR_0, VAR_2, VAR_3);
  return (1);

 case 132:
  FUNC_3(VAR_0, VAR_2, VAR_3);
  return (1);

 case 134:
 case 135:
 case 128:
  FUNC_1(VAR_0, VAR_2, VAR_3, VAR_4);
  return (1);

 case 133:
  if (VAR_0->ndo_vflag)
   FUNC_0((VAR_0, "et1 "));
  FUNC_2(VAR_0, VAR_2, VAR_3);
  return (1);

 case 130:
  FUNC_5(VAR_0, VAR_2, VAR_3);
  return (1);

 default:
  return (0);
 }
}
