
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int lock; int dev; } ;
struct sc_chinfo {int * data; struct sc_info* parent; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_1, void *VAR_2)
{
 struct sc_chinfo *VAR_3 = VAR_2;
 struct sc_info *VAR_4 = VAR_3->parent;




 FUNC_2(VAR_4->lock);
 if (VAR_3->data != ((void*)0)) {
  FUNC_1(VAR_3->data, VAR_0);
  VAR_3->data = ((void*)0);
 }
 FUNC_3(VAR_4->lock);

 return 0;
}
