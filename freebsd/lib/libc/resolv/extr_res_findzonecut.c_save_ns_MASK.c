
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_char ;
typedef int rrset_ns ;
struct TYPE_8__ {int * name; scalar_t__ flags; int addrs; } ;
typedef TYPE_1__ rr_ns ;
typedef int res_state ;
typedef int ns_sect ;
typedef int ns_rr ;
typedef int ns_msg ;
typedef scalar_t__ ns_class ;


 int FUNC_0 (int ,TYPE_1__*,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 TYPE_1__* FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_1 ;
 TYPE_1__* FUNC_6 (int) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (int ,int ,int const*,char*,int) ;
 int VAR_2 ;
 scalar_t__ FUNC_11 (int *,int ,int,int *) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int * FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int VAR_3 ;
 int FUNC_16 (int ,char const*) ;
 scalar_t__ VAR_4 ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (int ,int ) ;
 scalar_t__ FUNC_19 (int ,int *,int ,int *,scalar_t__,int,TYPE_1__*) ;
 int * FUNC_20 (char*) ;

__attribute__((used)) static int
FUNC_21(res_state VAR_5, ns_msg *VAR_6, ns_sect VAR_7,
 const char *VAR_8, ns_class VAR_9, int VAR_10,
 rrset_ns *VAR_11)
{
 int VAR_12;

 for (VAR_12 = 0; VAR_12 < FUNC_8(*VAR_6, VAR_7); VAR_12++) {
  char VAR_13[VAR_0];
  const u_char *VAR_14;
  rr_ns *VAR_15;
  ns_rr VAR_16;

  if (FUNC_11(VAR_6, VAR_7, VAR_12, &VAR_16) < 0) {
   FUNC_1(("save_ns: ns_parserr(%s, %d) failed",
     FUNC_18(VAR_7, VAR_2), VAR_12));
   return (-1);
  }
  if (FUNC_15(VAR_16) != VAR_4 ||
      FUNC_12(VAR_16) != VAR_9 ||
      FUNC_16(FUNC_13(VAR_16), VAR_8) != 1)
   continue;
  VAR_15 = FUNC_4(VAR_11, FUNC_13(VAR_16));
  if (VAR_15 == ((void*)0)) {
   VAR_15 = FUNC_6(sizeof *VAR_15);
   if (VAR_15 == ((void*)0)) {
    FUNC_1(("save_ns: malloc failed"));
    return (-1);
   }
   VAR_14 = FUNC_14(VAR_16);
   if (FUNC_10(FUNC_7(*VAR_6),
            FUNC_9(*VAR_6), VAR_14,
            VAR_13, sizeof VAR_13) < 0) {
    FUNC_1(("save_ns: ns_name_uncompress failed")
     );
    FUNC_5(VAR_15);
    return (-1);
   }
   VAR_15->name = FUNC_20(VAR_13);
   if (VAR_15->name == ((void*)0)) {
    FUNC_1(("save_ns: strdup failed"));
    FUNC_5(VAR_15);
    return (-1);
   }
   FUNC_2(VAR_15, VAR_1);
   FUNC_3(VAR_15->addrs);
   VAR_15->flags = 0;
   FUNC_0(*VAR_11, VAR_15, VAR_1);
  }
  if (FUNC_19(VAR_5, VAR_6, VAR_3,
      VAR_15->name, VAR_9, VAR_10, VAR_15) < 0) {
   FUNC_1(("save_ns: save_r('%s', %s) failed",
     VAR_15->name, FUNC_17(VAR_9)));
   return (-1);
  }
 }
 return (0);
}
