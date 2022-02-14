
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct netmap_hw_adapter {int (* nm_hw_register ) (struct netmap_adapter*,int) ;} ;
struct netmap_adapter {int na_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct netmap_adapter*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 (struct netmap_adapter*,int) ;

__attribute__((used)) static int
FUNC_4(struct netmap_adapter *VAR_2, int VAR_3)
{
 struct netmap_hw_adapter *VAR_4 =
  (struct netmap_hw_adapter*)VAR_2;
 int VAR_5 = 0;

 FUNC_1();

 if (FUNC_0(VAR_2)) {
  if (VAR_3) {
   VAR_5 = VAR_0;
  } else if (VAR_2 != ((void*)0)) {
   VAR_2->na_flags &= ~VAR_1;
  }
  goto out;
 }

 VAR_5 = VAR_4->nm_hw_register(VAR_2, VAR_3);

out:
 FUNC_2();

 return VAR_5;
}
