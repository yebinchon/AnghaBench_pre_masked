
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmreq_vale_polling {int dummy; } ;
struct nm_bdg_polling_state {int configured; int stopped; struct nm_bdg_polling_state* kthreads; struct netmap_bwrap_adapter* bna; } ;
struct netmap_bwrap_adapter {int hwna; struct nm_bdg_polling_state* na_polling_state; } ;
struct netmap_adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct nmreq_vale_polling*,struct netmap_adapter*,struct nm_bdg_polling_state*) ;
 scalar_t__ FUNC_1 (struct nm_bdg_polling_state*) ;
 int FUNC_2 (struct nm_bdg_polling_state*) ;
 int FUNC_3 (struct nm_bdg_polling_state*) ;
 struct nm_bdg_polling_state* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int
FUNC_7(struct nmreq_vale_polling *VAR_3, struct netmap_adapter *VAR_4)
{
 struct nm_bdg_polling_state *VAR_5;
 struct netmap_bwrap_adapter *VAR_6;
 int VAR_7;

 VAR_6 = (struct netmap_bwrap_adapter *)VAR_4;
 if (VAR_6->na_polling_state) {
  FUNC_5("ERROR adapter already in polling mode");
  return VAR_0;
 }

 VAR_5 = FUNC_4(sizeof(*VAR_5));
 if (!VAR_5)
  return VAR_2;
 VAR_5->configured = 0;
 VAR_5->stopped = 1;

 if (FUNC_0(VAR_3, VAR_4, VAR_5)) {
  FUNC_3(VAR_5);
  return VAR_1;
 }

 if (FUNC_1(VAR_5)) {
  FUNC_3(VAR_5);
  return VAR_0;
 }

 VAR_5->configured = 1;
 VAR_6->na_polling_state = VAR_5;
 VAR_5->bna = VAR_6;


 FUNC_6(VAR_6->hwna, 0);

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7) {
  FUNC_5("ERROR nm_bdg_polling_start_kthread()");
  FUNC_3(VAR_5->kthreads);
  FUNC_3(VAR_5);
  VAR_6->na_polling_state = ((void*)0);
  FUNC_6(VAR_6->hwna, 1);
 }
 return VAR_7;
}
