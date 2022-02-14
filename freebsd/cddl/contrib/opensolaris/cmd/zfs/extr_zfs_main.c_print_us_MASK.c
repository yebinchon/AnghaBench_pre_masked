
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uu_avl_t ;
struct TYPE_6__ {int usn_nvl; } ;
typedef TYPE_1__ us_node_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,scalar_t__,int*,int,size_t*,TYPE_1__*) ;
 int FUNC_3 (char*,...) ;
 int * VAR_5 ;
 TYPE_1__* FUNC_4 (int *) ;
 TYPE_1__* FUNC_5 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(boolean_t VAR_6, boolean_t VAR_7, int *VAR_8, int VAR_9,
    size_t *VAR_10, boolean_t VAR_11, uu_avl_t *VAR_12)
{
 us_node_t *VAR_13;
 const char *VAR_14;
 int VAR_15 = 0;
 int VAR_16;

 if (!VAR_6) {
  boolean_t VAR_17 = VAR_1;

  while ((VAR_16 = VAR_8[VAR_15]) != VAR_2) {
   VAR_14 = FUNC_0(VAR_5[VAR_16]);
   if (VAR_16 == VAR_4 || VAR_16 == VAR_3) {
    (void) FUNC_3(VAR_17 ? "%-*s" : "  %-*s",
        VAR_10[VAR_16], VAR_14);
   } else {
    (void) FUNC_3(VAR_17 ? "%*s" : "  %*s",
        VAR_10[VAR_16], VAR_14);
   }
   VAR_17 = VAR_0;
   VAR_15++;
  }
  (void) FUNC_3("\n");
 }

 for (VAR_13 = FUNC_4(VAR_12); VAR_13; VAR_13 = FUNC_5(VAR_12, VAR_13)) {
  FUNC_2(VAR_6, VAR_7, VAR_8, VAR_9, VAR_10, VAR_13);
  if (VAR_11)
   FUNC_1(VAR_13->usn_nvl);
 }
}
