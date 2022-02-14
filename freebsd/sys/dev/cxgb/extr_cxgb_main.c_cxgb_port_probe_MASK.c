
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* desc; } ;
struct port_info {int port_id; TYPE_1__ phy; } ;
typedef int device_t ;
typedef int buf ;


 struct port_info* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,char*,int,char const*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct port_info *VAR_1;
 char VAR_2[80];
 const char *VAR_3;

 VAR_1 = FUNC_0(VAR_0);
 VAR_3 = VAR_1->phy.desc;
 FUNC_2(VAR_2, sizeof(VAR_2), "Port %d %s", VAR_1->port_id, VAR_3);
 FUNC_1(VAR_0, VAR_2);
 return (0);
}
