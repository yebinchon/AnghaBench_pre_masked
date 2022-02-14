
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* if_shared_ctx_t ;
typedef TYPE_2__* if_pseudo_t ;
struct TYPE_9__ {int * ip_ifc; int * ip_lladdr_tag; int * ip_detach_tag; int * ip_dc; TYPE_1__* ip_sctx; } ;
struct TYPE_8__ {char* isc_name; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 void* FUNC_1 (int ,int ,int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_2 (char*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 (char*,int ,int ,int ) ;
 int FUNC_6 (int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_7 (TYPE_2__*) ;
 int * FUNC_8 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_2__* FUNC_9 (int,int ,int) ;
 int FUNC_10 (char*,...) ;

if_pseudo_t
FUNC_11(if_shared_ctx_t VAR_11)
{
 if_pseudo_t VAR_12;

 if (VAR_11->isc_name == ((void*)0)) {
  FUNC_10("iflib_clone_register failed - shared_ctx needs to have a device name\n");
  return (((void*)0));
 }
 if (FUNC_8(VAR_11->isc_name) != ((void*)0)) {
  FUNC_10("iflib_clone_register failed - shared_ctx %s alread registered\n",
      VAR_11->isc_name);
  return (((void*)0));
 }
 VAR_12 = FUNC_9(sizeof(*VAR_12), VAR_2, VAR_3|VAR_4);
 VAR_12->ip_sctx = VAR_11;
 VAR_12->ip_dc = FUNC_2(VAR_11->isc_name);
 if (VAR_12->ip_dc == ((void*)0))
  goto fail_clone;

 VAR_12->ip_ifc = FUNC_5(VAR_11->isc_name, VAR_5, VAR_6, 0);
 if (VAR_12->ip_ifc == ((void*)0)) {
  FUNC_10("clone_simple failed -- cloned %s  devices will not be available\n", VAR_11->isc_name);
  goto fail_clone;
 }
 FUNC_6(VAR_12->ip_ifc, VAR_1);
 VAR_12->ip_lladdr_tag = FUNC_1(VAR_9,
            VAR_8, ((void*)0), VAR_0);
 if (VAR_12->ip_lladdr_tag == ((void*)0))
  goto fail_addr;
 VAR_12->ip_detach_tag = FUNC_1(VAR_10,
            VAR_7, ((void*)0), VAR_0);

 if (VAR_12->ip_detach_tag == ((void*)0))
  goto fail_depart;

 FUNC_7(VAR_12);
 return (VAR_12);
 fail_depart:
 FUNC_0(VAR_9, VAR_12->ip_lladdr_tag);
 fail_addr:
 FUNC_4(VAR_12->ip_ifc);
 fail_clone:
 FUNC_3(VAR_12, VAR_2);
 return (((void*)0));
}
