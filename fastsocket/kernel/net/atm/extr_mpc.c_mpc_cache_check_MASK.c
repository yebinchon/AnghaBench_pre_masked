
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long mpc_p4; unsigned long mpc_p5; } ;
struct mpoa_client {struct mpoa_client* next; TYPE_3__* in_ops; TYPE_2__ parameters; TYPE_1__* eg_ops; } ;
struct TYPE_6__ {int (* refresh ) (struct mpoa_client*) ;int (* check_resolving ) (struct mpoa_client*) ;int (* clear_count ) (struct mpoa_client*) ;} ;
struct TYPE_4__ {int (* clear_expired ) (struct mpoa_client*) ;} ;


 unsigned long VAR_0 ;
 int FUNC_0 () ;
 struct mpoa_client* VAR_1 ;
 int FUNC_1 (struct mpoa_client*) ;
 int FUNC_2 (struct mpoa_client*) ;
 int FUNC_3 (struct mpoa_client*) ;
 int FUNC_4 (struct mpoa_client*) ;

__attribute__((used)) static void FUNC_5( unsigned long VAR_2 )
{
 struct mpoa_client *VAR_3 = VAR_1;
 static unsigned long VAR_4;
 static unsigned long VAR_5;

 while( VAR_3 != ((void*)0) ){
  VAR_3->in_ops->clear_count(VAR_3);
  VAR_3->eg_ops->clear_expired(VAR_3);
  if(VAR_2 - VAR_4 > VAR_3->parameters.mpc_p4 * VAR_0 ){
   VAR_3->in_ops->check_resolving(VAR_3);
   VAR_4 = VAR_2;
  }
  if(VAR_2 - VAR_5 > VAR_3->parameters.mpc_p5 * VAR_0 ){
   VAR_3->in_ops->refresh(VAR_3);
   VAR_5 = VAR_2;
  }
  VAR_3 = VAR_3->next;
 }
 FUNC_0();

 return;
}
