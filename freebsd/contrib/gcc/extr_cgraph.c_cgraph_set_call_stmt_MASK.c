
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
struct cgraph_edge {int call_stmt; TYPE_1__* caller; } ;
struct TYPE_2__ {scalar_t__ call_site_hash; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 void** FUNC_1 (scalar_t__,int ,int ,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (scalar_t__,int ,int ) ;

void
FUNC_4 (struct cgraph_edge *VAR_1, tree VAR_2)
{
  if (VAR_1->caller->call_site_hash)
    {
      FUNC_3 (VAR_1->caller->call_site_hash,
     VAR_1->call_stmt,
     FUNC_2 (VAR_1->call_stmt));
    }
  VAR_1->call_stmt = VAR_2;
  if (VAR_1->caller->call_site_hash)
    {
      void **VAR_3;
      VAR_3 = FUNC_1 (VAR_1->caller->call_site_hash,
           VAR_1->call_stmt,
           FUNC_2
           (VAR_1->call_stmt), VAR_0);
      FUNC_0 (!*VAR_3);
      *VAR_3 = VAR_1;
    }
}
