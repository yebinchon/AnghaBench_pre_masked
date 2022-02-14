
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct netif_driver {int netif_nifs; char* netif_bname; TYPE_1__* netif_ifs; } ;
struct TYPE_4__ {char* dv_name; } ;
struct TYPE_3__ {int dif_unit; } ;


 TYPE_2__ VAR_0 ;
 struct netif_driver** VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int
FUNC_2(int VAR_2)
{
 struct netif_driver *VAR_3;
 int VAR_4, VAR_5, VAR_6;
 int VAR_7 = 0;

 if (VAR_1[0] == ((void*)0))
  return (VAR_7);

 FUNC_1("%s devices:", VAR_0.dv_name);
 if ((VAR_7 = FUNC_0("\n")) != 0)
  return (VAR_7);

 VAR_6 = 0;
 for (VAR_5 = 0; VAR_1[VAR_5]; VAR_5++) {
  VAR_3 = VAR_1[VAR_5];
  for (VAR_4 = 0; VAR_4 < VAR_3->netif_nifs; VAR_4++) {
   FUNC_1("\t%s%d:", VAR_0.dv_name, VAR_6++);
   if (VAR_2) {
    FUNC_1(" (%s%d)", VAR_3->netif_bname,
        VAR_3->netif_ifs[VAR_4].dif_unit);
   }
   if ((VAR_7 = FUNC_0("\n")) != 0)
    return (VAR_7);
  }
 }
 return (VAR_7);
}
