
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int (* interface_receiver_t ) (void*,TYPE_1__*) ;
struct TYPE_6__ {TYPE_5__* ep; int action; } ;
typedef TYPE_1__ interface_info_t ;
struct TYPE_7__ {struct TYPE_7__* elink; } ;


 int VAR_0 ;
 TYPE_5__* VAR_1 ;
 int FUNC_0 (void*,TYPE_1__*) ;

void
FUNC_1(
 interface_receiver_t VAR_2,
 void * VAR_3
 )
{
 interface_info_t VAR_4;

 VAR_4.action = VAR_0;
 for (VAR_4.ep = VAR_1; VAR_4.ep != ((void*)0); VAR_4.ep = VAR_4.ep->elink)
  (*VAR_2)(VAR_3, &VAR_4);
}
