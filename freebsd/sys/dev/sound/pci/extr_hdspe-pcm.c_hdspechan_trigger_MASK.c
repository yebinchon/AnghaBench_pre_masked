
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {int dev; struct sc_info* sc; } ;
struct sc_info {int lock; } ;
struct sc_chinfo {int run; struct sc_pcminfo* parent; } ;
typedef int kobj_t ;







 int FUNC_0 (struct sc_chinfo*) ;
 int FUNC_1 (struct sc_chinfo*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (struct sc_info*) ;
 int FUNC_4 (struct sc_info*) ;
 int FUNC_5 (struct sc_chinfo*,int) ;
 int FUNC_6 (struct sc_chinfo*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct sc_pcminfo *VAR_3;
 struct sc_chinfo *VAR_4;
 struct sc_info *VAR_5;

 VAR_4 = VAR_1;
 VAR_3 = VAR_4->parent;
 VAR_5 = VAR_3->sc;

 FUNC_7(VAR_5->lock);
 switch (VAR_2) {
 case 129:



  FUNC_5(VAR_4, 1);
  FUNC_6(VAR_4);
  FUNC_3(VAR_5);
  break;

 case 128:
 case 132:



  FUNC_1(VAR_4);
  FUNC_5(VAR_4, 0);
  FUNC_4(VAR_5);
  break;

 case 130:
 case 131:
  if(VAR_4->run)
   FUNC_0(VAR_4);
  break;
 }

 FUNC_8(VAR_5->lock);

 return (0);
}
