
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef TYPE_6__* sc_p ;
typedef int node_p ;
struct TYPE_12__ {int af; } ;
struct TYPE_11__ {int af; } ;
struct TYPE_10__ {int af; } ;
struct TYPE_9__ {int af; } ;
struct TYPE_13__ {int af; } ;
struct TYPE_14__ {TYPE_4__ ipx; TYPE_3__ atalk; TYPE_2__ inet6; TYPE_1__ inet; TYPE_5__ downstream; int node; int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,TYPE_6__*) ;
 TYPE_6__* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(node_p VAR_7)
{
 sc_p VAR_8;

 VAR_8 = FUNC_1(sizeof(*VAR_8), VAR_4, VAR_5 | VAR_6);

 FUNC_2(&VAR_8->handle);
 FUNC_0(VAR_7, VAR_8);
 VAR_8->node = VAR_7;


 VAR_8->downstream.af = 0xffff;
 VAR_8->inet.af = VAR_1;
 VAR_8->inet6.af = VAR_2;
 VAR_8->atalk.af = VAR_0;
 VAR_8->ipx.af = VAR_3;
 return (0);
}
