
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {int dev; struct sc_info* sc; } ;
struct sc_info {int lock; } ;
struct sc_chinfo {struct sc_pcminfo* parent; } ;
typedef int kobj_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(kobj_t VAR_0, void *VAR_1)
{
 struct sc_chinfo *VAR_2 = VAR_1;
 struct sc_pcminfo *VAR_3 = VAR_2->parent;
 struct sc_info *VAR_4 = VAR_3->sc;





 FUNC_1(VAR_4->lock);

 FUNC_2(VAR_4->lock);

 return (0);
}
