
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {struct sc_info* sc; } ;
struct sc_info {int dev; } ;


 int VAR_0 ;
 int FUNC_0 (struct sc_info*,int ) ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct sc_pcminfo *VAR_2;
 struct sc_info *VAR_3;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2->sc;

 FUNC_1(VAR_3->dev, "Error I2S_TCSR == 0x%08x\n",
     FUNC_0(VAR_3, VAR_0));
}
