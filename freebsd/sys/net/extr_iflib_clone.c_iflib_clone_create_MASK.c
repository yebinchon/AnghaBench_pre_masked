
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct iflib_cloneattach_ctx {char const* cc_name; int cc_params; scalar_t__ cc_len; struct if_clone* cc_ifc; } ;
struct if_clone {int dummy; } ;
typedef TYPE_1__* if_pseudo_t ;
typedef int if_ctx_t ;
typedef int * device_t ;
typedef int caddr_t ;
struct TYPE_3__ {int ip_sctx; int ip_dc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int ,int) ;
 void* FUNC_6 (int *,char const*,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 (int *,int ) ;
 char* FUNC_12 (struct if_clone*) ;
 TYPE_1__* FUNC_13 (char const*) ;
 int FUNC_14 (int *,int ,int *,struct iflib_cloneattach_ctx*) ;
 int * VAR_3 ;
 int VAR_4 ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (char*,...) ;
 int * VAR_5 ;

__attribute__((used)) static int
FUNC_18(struct if_clone *VAR_6, int VAR_7, caddr_t VAR_8)
{
 const char *VAR_9 = FUNC_12(VAR_6);
 struct iflib_cloneattach_ctx VAR_10;
 if_ctx_t VAR_11;
 if_pseudo_t VAR_12;
 device_t VAR_13;
 int VAR_14;

 VAR_10.cc_ifc = VAR_6;
 VAR_10.cc_len = 0;
 VAR_10.cc_params = VAR_8;
 VAR_10.cc_name = VAR_9;

 if (FUNC_3(VAR_3 == ((void*)0))) {

  FUNC_15(&VAR_2);
  VAR_3 = FUNC_6(VAR_5, "ifpseudo", 0);
  FUNC_16(&VAR_2);
  FUNC_0(VAR_3 != ((void*)0));
 }
 VAR_12 = FUNC_13(VAR_9);
 if (VAR_12 == ((void*)0)) {
  FUNC_17("no ip found for %s\n", VAR_9);
  return (VAR_1);
 }
 if ((VAR_13 = FUNC_5(VAR_12->ip_dc, VAR_7)) != ((void*)0)) {
  FUNC_17("unit %d allocated\n", VAR_7);
  FUNC_4(VAR_3, VAR_13);
  return (VAR_0);
 }
 FUNC_1();
 VAR_13 = FUNC_6(VAR_3, VAR_9, VAR_7);
 FUNC_10(VAR_13, &VAR_4);
 FUNC_2();
 FUNC_9(VAR_13);
 VAR_14 = FUNC_7(VAR_13);
 FUNC_0(VAR_14 == 0);
 FUNC_0(VAR_13 != ((void*)0));
 FUNC_0(FUNC_5(VAR_12->ip_dc, VAR_7) == VAR_13);
 VAR_14 = FUNC_14(VAR_13, VAR_12->ip_sctx, &VAR_11, &VAR_10);
 if (VAR_14) {
  FUNC_15(&VAR_2);
  FUNC_8(VAR_3, VAR_13);
  FUNC_16(&VAR_2);
 } else
  FUNC_11(VAR_13, VAR_11);

 return (VAR_14);
}
