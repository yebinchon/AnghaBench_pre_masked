
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ zfs_type; } ;
typedef TYPE_1__ zfs_handle_t ;
struct TYPE_11__ {scalar_t__ verbose; scalar_t__ force; } ;
typedef TYPE_2__ recvflags_t ;
typedef int prop_changelist_t ;
typedef int nvlist_t ;
typedef int libzfs_handle_t ;
typedef scalar_t__ boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (TYPE_1__*,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,char const*) ;
 int FUNC_5 (int *,char const*) ;
 int * FUNC_6 () ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char const*) ;
 int FUNC_9 (int *,scalar_t__,int *) ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int *,char const*,int *,int,char*,TYPE_2__*) ;
 int FUNC_12 (TYPE_1__*) ;
 scalar_t__ FUNC_13 (int *,char const*,scalar_t__) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 TYPE_1__* FUNC_15 (int *,char const*,int ) ;
 scalar_t__ FUNC_16 (TYPE_1__*,int*) ;

__attribute__((used)) static int
FUNC_17(libzfs_handle_t *VAR_7, const char *VAR_8, int VAR_9,
    char *VAR_10, recvflags_t *VAR_11)
{
 int VAR_12 = 0;
 prop_changelist_t *VAR_13;
 zfs_handle_t *VAR_14;
 boolean_t VAR_15 = VAR_0;
 int VAR_16;

 VAR_14 = FUNC_15(VAR_7, VAR_8, VAR_5);
 if (VAR_14 == ((void*)0))
  return (-1);
 VAR_13 = FUNC_1(VAR_14, VAR_4, 0,
     VAR_11->force ? VAR_2 : 0);
 if (FUNC_14(VAR_14) == VAR_6 &&
     FUNC_16(VAR_14, &VAR_16) == 0 &&
     VAR_16 >= VAR_3)
  VAR_15 = VAR_1;
 FUNC_12(VAR_14);
 if (VAR_13 == ((void*)0))
  return (-1);
 VAR_12 = FUNC_3(VAR_13);
 if (VAR_12)
  return (VAR_12);

 if (VAR_11->verbose)
  (void) FUNC_10("attempting destroy %s\n", VAR_8);
 if (VAR_14->zfs_type == VAR_6) {
  nvlist_t *VAR_17 = FUNC_6();
  FUNC_5(VAR_17, VAR_8);
  VAR_12 = FUNC_9(VAR_17, VAR_15, ((void*)0));
  FUNC_7(VAR_17);
 } else {
  VAR_12 = FUNC_8(VAR_8);
 }
 if (VAR_12 == 0) {
  if (VAR_11->verbose)
   (void) FUNC_10("success\n");
  FUNC_4(VAR_13, VAR_8);
 }

 (void) FUNC_2(VAR_13);
 FUNC_0(VAR_13);





 if (VAR_12 != 0 || (VAR_15 && FUNC_13(VAR_7, VAR_8,
     VAR_6))) {
  VAR_12 = FUNC_11(VAR_7, VAR_8, ((void*)0), VAR_9, VAR_10, VAR_11);
 }

 return (VAR_12);
}
