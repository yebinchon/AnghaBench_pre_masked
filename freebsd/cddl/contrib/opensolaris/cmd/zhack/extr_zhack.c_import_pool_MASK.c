
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spa_t ;
typedef int nvpair_t ;
typedef int nvlist_t ;
typedef void* boolean_t ;
struct TYPE_3__ {char const* poolname; void* can_be_active; void* unique; } ;


 int FUNC_0 (int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,char*,char const*,...) ;
 TYPE_1__ VAR_10 ;
 char const* VAR_11 ;
 void* VAR_12 ;
 int * VAR_13 ;
 int FUNC_3 (int) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int ,int) ;
 scalar_t__ FUNC_6 (int **,int ,int ) ;
 scalar_t__ FUNC_7 (int *) ;
 int * FUNC_8 (int *,int *) ;
 char* FUNC_9 (int *) ;
 scalar_t__ FUNC_10 (int *,int **) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (char const*,int *,int *,int ) ;
 scalar_t__ FUNC_13 (char const*,int **,int ) ;
 int VAR_14 ;
 char* FUNC_14 (char const*) ;
 char const* FUNC_15 (int) ;
 char* FUNC_16 (char const*,char*) ;
 int FUNC_17 (int) ;
 void* VAR_15 ;
 int FUNC_18 (int ) ;
 int * FUNC_19 (int *,TYPE_1__*) ;

__attribute__((used)) static void
FUNC_20(const char *VAR_16, boolean_t VAR_17)
{
 nvlist_t *VAR_18;
 nvlist_t *VAR_19;
 int VAR_20;
 char *VAR_21;
 spa_t *VAR_22;
 nvpair_t *VAR_23;
 nvlist_t *VAR_24;
 const char *VAR_25;

 FUNC_3(VAR_17 ? VAR_4 : (VAR_4 | VAR_6));
 VAR_13 = FUNC_4();
 FUNC_0(VAR_13 != ((void*)0));

 FUNC_1(VAR_2, VAR_14);

 VAR_12 = VAR_17;






 if (VAR_17 && FUNC_13(VAR_16, &VAR_22, VAR_5) == 0) {
  FUNC_11(VAR_22, VAR_5);
  return;
 }

 VAR_10.unique = VAR_1;
 VAR_10.can_be_active = VAR_17;
 VAR_11 = FUNC_14(VAR_16);
 if ((VAR_21 = FUNC_16(VAR_11, "/@")) != ((void*)0))
  *VAR_21 = '\0';
 VAR_10.poolname = VAR_11;
 VAR_19 = FUNC_19(VAR_13, &VAR_10);

 if (FUNC_7(VAR_19)) {
  if (!VAR_10.can_be_active) {
   VAR_10.can_be_active = VAR_1;
   if (FUNC_19(VAR_13, &VAR_10) != ((void*)0) ||
       FUNC_13(VAR_16, &VAR_22, VAR_5) == 0) {
    FUNC_2(VAR_22, VAR_5, "cannot import '%s': pool is "
        "active; run " "\"zpool export %s\" "
        "first\n", VAR_11, VAR_11);
   }
  }

  FUNC_2(((void*)0), VAR_5, "cannot import '%s': no such pool "
      "available\n", VAR_11);
 }

 VAR_23 = FUNC_8(VAR_19, ((void*)0));
 VAR_25 = FUNC_9(VAR_23);
 FUNC_17(FUNC_10(VAR_23, &VAR_18) == 0);

 VAR_24 = ((void*)0);
 if (VAR_17) {
  FUNC_17(FUNC_6(&VAR_24, VAR_7, 0) == 0);
  FUNC_17(FUNC_5(VAR_24,
      FUNC_18(VAR_9), 1) == 0);
 }

 VAR_15 = VAR_1;
 VAR_20 = FUNC_12(VAR_25, VAR_18, VAR_24, VAR_8);
 VAR_15 = VAR_0;
 if (VAR_20 == VAR_3)
  VAR_20 = 0;

 if (VAR_20)
  FUNC_2(((void*)0), VAR_5, "can't import '%s': %s", VAR_25,
      FUNC_15(VAR_20));
}
