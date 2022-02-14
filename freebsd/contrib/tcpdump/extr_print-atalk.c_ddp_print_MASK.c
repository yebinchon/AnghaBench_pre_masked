
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
struct atNBP {int dummy; } ;
struct atATP {int dummy; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,struct atATP const*,int ) ;



 int FUNC_2 (int *,int const*,int ) ;
 int FUNC_3 (int *,struct atNBP const*,int ,int ,int ,int ) ;
 int FUNC_4 (int ,int *,int) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_1,
          register const u_char *VAR_2, register u_int VAR_3, register int VAR_4,
          register u_short VAR_5, register u_char VAR_6, u_char VAR_7)
{

 switch (VAR_4) {

 case 128:
  FUNC_3(VAR_1, (const struct atNBP *)VAR_2, VAR_3, VAR_5, VAR_6, VAR_7);
  break;

 case 130:
  FUNC_1(VAR_1, (const struct atATP *)VAR_2, VAR_3);
  break;

 case 129:
  FUNC_2(VAR_1, VAR_2, VAR_3);
  break;

 default:
  FUNC_0((VAR_1, " at-%s %d", FUNC_4(VAR_0, ((void*)0), VAR_4), VAR_3));
  break;
 }
}
