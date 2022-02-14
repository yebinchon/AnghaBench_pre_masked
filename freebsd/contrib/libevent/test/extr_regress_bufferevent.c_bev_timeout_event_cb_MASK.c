
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timeout_cb_result {int n_write_timeouts; int write_timeout_at; int n_read_timeouts; int read_timeout_at; int total_calls; } ;
struct bufferevent {int dummy; } ;


 short VAR_0 ;
 short VAR_1 ;
 short VAR_2 ;
 int FUNC_0 (int *,int *) ;

__attribute__((used)) static void
FUNC_1(struct bufferevent *VAR_3, short VAR_4, void *VAR_5)
{
 struct timeout_cb_result *VAR_6 = VAR_5;
 ++VAR_6->total_calls;

 if ((VAR_4 & (VAR_0|VAR_1))
     == (VAR_0|VAR_1)) {
  FUNC_0(&VAR_6->read_timeout_at, ((void*)0));
  ++VAR_6->n_read_timeouts;
 }
 if ((VAR_4 & (VAR_2|VAR_1))
     == (VAR_2|VAR_1)) {
  FUNC_0(&VAR_6->write_timeout_at, ((void*)0));
  ++VAR_6->n_write_timeouts;
 }
}
