
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct g_consumer {TYPE_1__* provider; } ;
typedef int buf ;
struct TYPE_2__ {char* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*,char*,char*,int ) ;
 int FUNC_1 (char*,int,char*,char*) ;

__attribute__((used)) static void
FUNC_2(struct g_consumer *VAR_2)
{
 char VAR_3[VAR_1 + 6];

 FUNC_1(VAR_3, sizeof(VAR_3), "cdev=%s", VAR_2->provider->name);
 FUNC_0("GEOM", "DEV", "SIZECHANGE", VAR_3, VAR_0);
}
