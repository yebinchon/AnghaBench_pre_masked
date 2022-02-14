
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct port_info {long port_id; } ;
struct adapter {TYPE_1__* names; int dev; } ;
struct TYPE_2__ {char* ifnet_name; } ;


 char* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int*,char const*,int*,char*,char const*) ;
 scalar_t__ FUNC_2 (char const*,int,char*,long*) ;

__attribute__((used)) static int
FUNC_3(struct adapter *VAR_0, struct port_info *VAR_1)
{
 const char *VAR_2, *VAR_3;
 long VAR_4;
 int VAR_5, VAR_6;

 VAR_5 = 0;
 VAR_2 = FUNC_0(VAR_0->dev);
 VAR_3 = VAR_0->names->ifnet_name;
 while (FUNC_1(&VAR_5, VAR_3, &VAR_6, "at", VAR_2) == 0) {
  if (FUNC_2(VAR_3, VAR_6, "port", &VAR_4) == 0 &&
      VAR_4 == VAR_1->port_id)
   return (VAR_6);
 }
 return (-1);
}
