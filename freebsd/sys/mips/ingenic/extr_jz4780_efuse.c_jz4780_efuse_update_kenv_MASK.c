
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int macaddr; } ;
struct jz4780_efuse_softc {TYPE_1__ data; } ;
typedef int macstr ;


 int * FUNC_0 (char*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*,int,char*,int ,char*) ;

__attribute__((used)) static void
FUNC_3(struct jz4780_efuse_softc *VAR_0)
{
 char VAR_1[sizeof("xx:xx:xx:xx:xx:xx")];





 if (FUNC_0("hint.dme.0.macaddr") == ((void*)0)) {
  FUNC_2(VAR_1, sizeof(VAR_1), "%6D",
      VAR_0->data.macaddr, ":");
  FUNC_1("hint.dme.0.macaddr", VAR_1);
 }
}
