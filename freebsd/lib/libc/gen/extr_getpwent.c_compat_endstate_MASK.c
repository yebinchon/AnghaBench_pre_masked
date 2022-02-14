
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct compat_state {int template; TYPE_1__* exclude; TYPE_2__* db; } ;
struct TYPE_4__ {int (* close ) (TYPE_2__*) ;} ;
struct TYPE_3__ {int (* close ) (TYPE_1__*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_0)
{
 struct compat_state *VAR_1;

 if (VAR_0 == ((void*)0))
  return;
 VAR_1 = (struct compat_state *)VAR_0;
 if (VAR_1->db != ((void*)0))
  VAR_1->db->close(VAR_1->db);
 if (VAR_1->exclude != ((void*)0))
  VAR_1->exclude->close(VAR_1->exclude);
 FUNC_0(&VAR_1->template);
 FUNC_1(VAR_0);
}
