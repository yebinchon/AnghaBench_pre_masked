
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eloop_sock_table {int dummy; } ;
typedef int eloop_event_type ;
struct TYPE_2__ {struct eloop_sock_table exceptions; struct eloop_sock_table writers; struct eloop_sock_table readers; } ;





 TYPE_1__ VAR_0 ;

__attribute__((used)) static struct eloop_sock_table *FUNC_0(eloop_event_type VAR_1)
{
 switch (VAR_1) {
 case 129:
  return &VAR_0.readers;
 case 128:
  return &VAR_0.writers;
 case 130:
  return &VAR_0.exceptions;
 }

 return ((void*)0);
}
