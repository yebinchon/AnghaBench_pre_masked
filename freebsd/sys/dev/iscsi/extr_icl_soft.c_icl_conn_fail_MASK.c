
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct icl_conn {int (* ic_error ) (struct icl_conn*) ;TYPE_1__* ic_socket; } ;
struct TYPE_2__ {int so_error; } ;


 int VAR_0 ;
 int FUNC_0 (struct icl_conn*) ;

__attribute__((used)) static void
FUNC_1(struct icl_conn *VAR_1)
{
 if (VAR_1->ic_socket == ((void*)0))
  return;




 VAR_1->ic_socket->so_error = VAR_0;
 (VAR_1->ic_error)(VAR_1);
}
