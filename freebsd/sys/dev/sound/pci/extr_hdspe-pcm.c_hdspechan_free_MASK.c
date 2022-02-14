
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_pcminfo {int dev; struct sc_info* sc; } ;
struct sc_info {int lock; } ;
struct sc_chinfo {int * data; struct sc_pcminfo* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_1, void *VAR_2)
{
 struct sc_pcminfo *VAR_3;
 struct sc_chinfo *VAR_4;
 struct sc_info *VAR_5;

 VAR_4 = VAR_2;
 VAR_3 = VAR_4->parent;
 VAR_5 = VAR_3->sc;





 FUNC_2(VAR_5->lock);
 if (VAR_4->data != ((void*)0)) {
  FUNC_1(VAR_4->data, VAR_0);
  VAR_4->data = ((void*)0);
 }
 FUNC_3(VAR_5->lock);

 return (0);
}
