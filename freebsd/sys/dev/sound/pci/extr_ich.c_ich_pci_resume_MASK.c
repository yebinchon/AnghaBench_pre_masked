
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int hasvra; int hasvrm; struct sc_chinfo* ch; int codec; } ;
struct sc_chinfo {int spd; int blksz; scalar_t__ run_save; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (struct sc_info*) ;
 int FUNC_1 (struct sc_info*) ;
 int VAR_1 ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct sc_info*) ;
 int FUNC_5 (struct sc_info*) ;
 int FUNC_6 (int ,struct sc_chinfo*,int ) ;
 int FUNC_7 (int ,struct sc_chinfo*,int ) ;
 int FUNC_8 (int ,struct sc_chinfo*,int ) ;
 int FUNC_9 (int ) ;
 struct sc_info* FUNC_10 (int ) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_2)
{
 struct sc_info *VAR_3;
 int VAR_4;

 VAR_3 = FUNC_10(VAR_2);

 FUNC_0(VAR_3);

     if (FUNC_4(VAR_3) == -1) {
  FUNC_3(VAR_2, "unable to reinitialize the card\n");
  FUNC_1(VAR_3);
  return (VAR_0);
 }

 FUNC_5(VAR_3);
 FUNC_1(VAR_3);
 FUNC_2(VAR_3->codec, VAR_3->hasvra | VAR_3->hasvrm);
     if (FUNC_9(VAR_2) == -1) {
  FUNC_3(VAR_2, "unable to reinitialize the mixer\n");
  return (VAR_0);
 }

 for (VAR_4 = 0 ; VAR_4 < 3; VAR_4++) {
  struct sc_chinfo *VAR_5 = &VAR_3->ch[VAR_4];
  if (VAR_3->ch[VAR_4].run_save) {
   FUNC_6(0, VAR_5, VAR_5->blksz);
   FUNC_7(0, VAR_5, VAR_5->spd);
   FUNC_8(0, VAR_5, VAR_1);
  }
 }
 return (0);
}
