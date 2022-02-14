
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {int dev; struct sc_info* sc; } ;
struct sc_info {int lock; } ;
struct sc_chinfo {int run; struct sc_pcminfo* parent; } ;
typedef int kobj_t ;





 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(kobj_t VAR_0, void *VAR_1, int VAR_2)
{
 struct sc_chinfo *VAR_3 = VAR_1;
 struct sc_pcminfo *VAR_4 = VAR_3->parent;
 struct sc_info *VAR_5 = VAR_4->sc;

 FUNC_1(VAR_5->lock);

 switch (VAR_2) {
 case 129:



  VAR_3->run = 1;
  break;

 case 128:
 case 130:



  VAR_3->run = 0;
  break;
 }

 FUNC_2(VAR_5->lock);

 return (0);
}
