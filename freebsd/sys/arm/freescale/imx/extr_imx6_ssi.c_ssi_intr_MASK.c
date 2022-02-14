
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {struct sc_chinfo* chan; struct sc_info* sc; } ;
struct sc_info {int dev; } ;
struct sc_chinfo {int dummy; } ;


 int FUNC_0 (struct sc_info*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,char*,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct sc_pcminfo *VAR_2;
 struct sc_chinfo *VAR_3;
 struct sc_info *VAR_4;

 VAR_2 = VAR_1;
 VAR_4 = VAR_2->sc;
 VAR_3 = &VAR_2->chan[0];






}
