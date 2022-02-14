
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct db_state {TYPE_1__* db; } ;
struct TYPE_3__ {int (* close ) (TYPE_1__*) ;} ;
typedef TYPE_1__ DB ;


 int FUNC_0 (void*) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0)
{
 DB *VAR_1;

 if (VAR_0 == ((void*)0))
  return;

 VAR_1 = ((struct db_state *)VAR_0)->db;
 if (VAR_1 != ((void*)0))
  VAR_1->close(VAR_1);

 FUNC_0(VAR_0);
}
