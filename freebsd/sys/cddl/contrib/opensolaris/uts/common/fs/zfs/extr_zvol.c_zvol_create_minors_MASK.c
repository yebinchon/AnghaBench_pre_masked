
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct TYPE_8__ {int os_dsl_dataset; } ;
typedef TYPE_1__ objset_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int,char*,int *,scalar_t__*) ;
 int FUNC_2 (char const*,int ,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (char*,int *) ;
 int FUNC_5 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int ,int ) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,int ) ;
 int FUNC_10 (int ,int ) ;
 char* FUNC_11 (int,int ) ;
 int FUNC_12 (char*,int) ;
 int FUNC_13 (char*,char const*,int) ;
 int FUNC_14 (char*,int,char*,char const*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char const*) ;
 int FUNC_17 (TYPE_1__*,char const*) ;

int
FUNC_18(const char *VAR_7)
{
 uint64_t VAR_8;
 objset_t *VAR_9;
 char *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 if (FUNC_0(VAR_7))
  return (0);

 if ((VAR_12 = FUNC_2(VAR_7, VAR_4, &VAR_9)) != 0) {
  FUNC_13("ZFS WARNING: Unable to put hold on %s (error=%d).\n",
      VAR_7, VAR_12);
  return (VAR_12);
 }
 if (FUNC_6(VAR_9) == VAR_1) {
  FUNC_7(VAR_9->os_dsl_dataset, VAR_4);
  FUNC_10(FUNC_3(VAR_9), VAR_4);
  VAR_12 = FUNC_16(VAR_7);
  if (VAR_12 == 0 || VAR_12 == VAR_2) {
   VAR_12 = FUNC_17(VAR_9, VAR_7);
  } else {
   FUNC_13("ZFS WARNING: Unable to create ZVOL %s (error=%d).\n",
       VAR_7, VAR_12);
  }
  FUNC_8(VAR_9->os_dsl_dataset, VAR_4);
  FUNC_9(VAR_9->os_dsl_dataset, VAR_4);
  return (VAR_12);
 }
 if (FUNC_6(VAR_9) != VAR_0) {
  FUNC_5(VAR_9, VAR_4);
  return (0);
 }

 VAR_10 = FUNC_11(VAR_6, VAR_5);
 if (FUNC_14(VAR_10, VAR_6, "%s/", VAR_7) >= VAR_6) {
  FUNC_5(VAR_9, VAR_4);
  FUNC_12(VAR_10, VAR_6);
  return (VAR_3);
 }
 VAR_11 = VAR_10 + FUNC_15(VAR_10);
 VAR_13 = VAR_6 - (VAR_11 - VAR_10);
 VAR_8 = 0;
 while (FUNC_1(VAR_9, VAR_6 - (VAR_11 - VAR_10), VAR_11, ((void*)0),
     &VAR_8) == 0) {
  FUNC_5(VAR_9, VAR_4);
  (void)FUNC_18(VAR_10);
  if ((VAR_12 = FUNC_2(VAR_7, VAR_4, &VAR_9)) != 0) {
   FUNC_13("ZFS WARNING: Unable to put hold on %s (error=%d).\n",
       VAR_7, VAR_12);
   return (VAR_12);
  }
 }

 FUNC_5(VAR_9, VAR_4);
 FUNC_12(VAR_10, VAR_6);
 return (0);
}
