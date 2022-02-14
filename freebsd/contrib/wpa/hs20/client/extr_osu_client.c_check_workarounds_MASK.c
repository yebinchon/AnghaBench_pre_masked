
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hs20_osu_client {unsigned long workarounds; int http; } ;
typedef int buf ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (int ,int) ;
 unsigned long FUNC_4 (char*,int *,int) ;
 int FUNC_5 (int ,char*,unsigned long) ;

__attribute__((used)) static void FUNC_6(struct hs20_osu_client *VAR_2)
{
 FILE *VAR_3;
 char VAR_4[100];
 unsigned long int VAR_5 = 0;

 VAR_3 = FUNC_2("hs20-osu-client.workarounds", "r");
 if (VAR_3 == ((void*)0))
  return;

 if (FUNC_1(VAR_4, sizeof(VAR_4), VAR_3))
  VAR_5 = FUNC_4(VAR_4, ((void*)0), 16);

 FUNC_0(VAR_3);

 if (VAR_5) {
  FUNC_5(VAR_0, "Workarounds enabled: 0x%lx", VAR_5);
  VAR_2->workarounds = VAR_5;
  if (VAR_2->workarounds & VAR_1)
   FUNC_3(VAR_2->http, 1);
 }
}
