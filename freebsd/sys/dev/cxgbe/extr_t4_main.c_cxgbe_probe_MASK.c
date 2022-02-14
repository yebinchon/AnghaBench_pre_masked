
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct port_info {int port_id; } ;
typedef int device_t ;
typedef int buf ;


 int VAR_0 ;
 struct port_info* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,char*,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 char VAR_2[128];
 struct port_info *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_2, sizeof(VAR_2), "port %d", VAR_3->port_id);
 FUNC_1(VAR_1, VAR_2);

 return (VAR_0);
}
