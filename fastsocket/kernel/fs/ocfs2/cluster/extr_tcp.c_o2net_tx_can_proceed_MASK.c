
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct o2net_sock_container {int sc_kref; } ;
struct o2net_node {int nn_persistent_error; int nn_lock; struct o2net_sock_container* nn_sc; scalar_t__ nn_sc_valid; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct o2net_node *VAR_0,
           struct o2net_sock_container **VAR_1,
    int *VAR_2)
{
 int VAR_3 = 0;

 FUNC_1(&VAR_0->nn_lock);
 if (VAR_0->nn_persistent_error) {
  VAR_3 = 1;
  *VAR_1 = ((void*)0);
  *VAR_2 = VAR_0->nn_persistent_error;
 } else if (VAR_0->nn_sc_valid) {
  FUNC_0(&VAR_0->nn_sc->sc_kref);

  VAR_3 = 1;
  *VAR_1 = VAR_0->nn_sc;
  *VAR_2 = 0;
 }
 FUNC_2(&VAR_0->nn_lock);

 return VAR_3;
}
