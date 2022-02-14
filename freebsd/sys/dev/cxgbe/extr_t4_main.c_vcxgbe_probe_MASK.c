
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vi_info {TYPE_1__* pi; } ;
typedef int device_t ;
typedef int buf ;
struct TYPE_2__ {int port_id; struct vi_info* vi; } ;


 int VAR_0 ;
 struct vi_info* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (char*,int,char*,int,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 char VAR_2[128];
 struct vi_info *VAR_3 = FUNC_0(VAR_1);

 FUNC_2(VAR_2, sizeof(VAR_2), "port %d vi %td", VAR_3->pi->port_id,
     VAR_3 - VAR_3->pi->vi);
 FUNC_1(VAR_1, VAR_2);

 return (VAR_0);
}
