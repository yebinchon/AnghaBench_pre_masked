
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtnet_softc {int vtnet_dev; } ;
typedef int path ;


 int FUNC_0 (char*,int*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int,char*,int,char const*) ;

__attribute__((used)) static int
FUNC_3(struct vtnet_softc *VAR_0, const char *VAR_1, int VAR_2)
{
 char VAR_3[64];

 FUNC_2(VAR_3, sizeof(VAR_3),
     "hw.vtnet.%d.%s", FUNC_1(VAR_0->vtnet_dev), VAR_1);
 FUNC_0(VAR_3, &VAR_2);

 return (VAR_2);
}
