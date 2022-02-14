
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nm_bdg_polling_state {int configured; } ;
struct netmap_bwrap_adapter {int hwna; struct nm_bdg_polling_state* na_polling_state; } ;
struct netmap_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nm_bdg_polling_state*) ;
 int FUNC_1 (struct nm_bdg_polling_state*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static int
FUNC_4(struct netmap_adapter *VAR_1)
{
 struct netmap_bwrap_adapter *VAR_2 = (struct netmap_bwrap_adapter *)VAR_1;
 struct nm_bdg_polling_state *VAR_3;

 if (!VAR_2->na_polling_state) {
  FUNC_2("ERROR adapter is not in polling mode");
  return VAR_0;
 }
 VAR_3 = VAR_2->na_polling_state;
 FUNC_0(VAR_2->na_polling_state);
 VAR_3->configured = 0;
 FUNC_1(VAR_3);
 VAR_2->na_polling_state = ((void*)0);

 FUNC_3(VAR_2->hwna, 1);
 return 0;
}
