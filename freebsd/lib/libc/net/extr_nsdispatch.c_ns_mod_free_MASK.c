
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * handle; int mtabsize; int mtab; int (* unregister ) (int ,int ) ;int name; } ;
typedef TYPE_1__ ns_mod ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int * VAR_1 ;
 int FUNC_2 (int ,int ) ;

__attribute__((used)) static void
FUNC_3(ns_mod *VAR_2)
{

 FUNC_1(VAR_2->name);
 if (VAR_2->handle == ((void*)0))
  return;
 if (VAR_2->unregister != ((void*)0))
  VAR_2->unregister(VAR_2->mtab, VAR_2->mtabsize);
 if (VAR_2->handle != VAR_1 && !VAR_0)
  (void)FUNC_0(VAR_2->handle);
}
