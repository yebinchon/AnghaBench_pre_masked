
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int u_char ;
typedef int rrset_ns ;
struct TYPE_7__ {int flags; int name; int addrs; } ;
typedef TYPE_1__ rr_ns ;
typedef int res_state ;
typedef int ns_msg ;
typedef int ns_class ;


 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (int ,int ,int ,int ,int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,TYPE_1__*) ;
 int VAR_3 ;
 int * FUNC_7 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ,int *,int ,int ,int ,int,TYPE_1__*) ;

__attribute__((used)) static int
FUNC_10(res_state VAR_7, ns_class VAR_8, int VAR_9, rrset_ns *VAR_10) {
 rr_ns *VAR_11, *VAR_12;
 u_char *VAR_13;

 VAR_13 = FUNC_7(VAR_0);
 if (VAR_13 == ((void*)0))
  return(-1);


 for (VAR_11 = FUNC_2(*VAR_10); VAR_11 != ((void*)0); VAR_11 = VAR_12) {
  ns_msg VAR_14;
  int VAR_15;

  VAR_12 = FUNC_3(VAR_11, VAR_3);

  if ((VAR_11->flags & VAR_1) == 0) {
   VAR_15 = FUNC_4(VAR_7, VAR_11->name, VAR_8, VAR_5,
         VAR_13, &VAR_14);
   if (VAR_15 < 0) {
    FUNC_0(
           ("get_glue: do_query('%s', %s') failed",
     VAR_11->name, FUNC_8(VAR_8)));
    goto cleanup;
   }
   if (VAR_15 > 0) {
    FUNC_0((
   "get_glue: do_query('%s', %s') CNAME or DNAME found",
      VAR_11->name, FUNC_8(VAR_8)));
   }
   if (FUNC_9(VAR_7, &VAR_14, VAR_4, VAR_11->name, VAR_8,
       VAR_9, VAR_11) < 0) {
    FUNC_0(("get_glue: save_r('%s', %s) failed",
      VAR_11->name, FUNC_8(VAR_8)));
    goto cleanup;
   }
  }

  if ((VAR_11->flags & VAR_2) == 0) {
   VAR_15 = FUNC_4(VAR_7, VAR_11->name, VAR_8, VAR_6,
         VAR_13, &VAR_14);
   if (VAR_15 < 0) {
    FUNC_0(
           ("get_glue: do_query('%s', %s') failed",
     VAR_11->name, FUNC_8(VAR_8)));
    goto cleanup;
   }
   if (VAR_15 > 0) {
    FUNC_0((
   "get_glue: do_query('%s', %s') CNAME or DNAME found",
      VAR_11->name, FUNC_8(VAR_8)));
   }
   if (FUNC_9(VAR_7, &VAR_14, VAR_4, VAR_11->name, VAR_8,
       VAR_9, VAR_11) < 0) {
    FUNC_0(("get_glue: save_r('%s', %s) failed",
      VAR_11->name, FUNC_8(VAR_8)));
    goto cleanup;
   }
  }


  if (FUNC_1(VAR_11->addrs)) {
   FUNC_0(("get_glue: removing empty '%s' NS",
     VAR_11->name));
   FUNC_6(VAR_10, VAR_11);
  }
 }
 FUNC_5(VAR_13);
 return (0);

 cleanup:
 FUNC_5(VAR_13);
 return (-1);
}
