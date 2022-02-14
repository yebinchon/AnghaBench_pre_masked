
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rxrpc_conn_bundle {scalar_t__ key; scalar_t__ service_id; } ;
struct key {int dummy; } ;
typedef scalar_t__ __be16 ;



__attribute__((used)) static inline
int FUNC_0(const struct rxrpc_conn_bundle *VAR_0,
       struct key *VAR_1, __be16 VAR_2)
{
 return (VAR_0->service_id - VAR_2) ?:
  ((unsigned long) VAR_0->key - (unsigned long) VAR_1);
}
