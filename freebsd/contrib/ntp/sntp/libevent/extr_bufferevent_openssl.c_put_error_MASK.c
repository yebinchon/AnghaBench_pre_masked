
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufferevent_openssl {scalar_t__ n_errors; scalar_t__* errors; } ;
typedef scalar_t__ ev_uint32_t ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline void
FUNC_0(struct bufferevent_openssl *VAR_1, unsigned long VAR_2)
{
 if (VAR_1->n_errors == VAR_0)
  return;





 VAR_1->errors[VAR_1->n_errors++] = (ev_uint32_t) VAR_2;
}
