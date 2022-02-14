
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ sc_prop; scalar_t__ sc_reverse; int sc_user_prop; struct TYPE_3__* sc_next; } ;
typedef TYPE_1__ zfs_sort_column_t ;
struct TYPE_4__ {int * zn_handle; } ;
typedef TYPE_2__ zfs_node_t ;
typedef int zfs_handle_t ;
typedef scalar_t__ uint64_t ;
typedef int rbuf ;
typedef int nvlist_t ;
typedef int lbuf ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int *,int ,int **) ;
 scalar_t__ FUNC_1 (int *,int ,char**) ;
 int FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (void const*,void const*,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int *,scalar_t__,char*,int,int *,int *,int ,scalar_t__) ;
 int FUNC_10 (int *,scalar_t__,scalar_t__*,int *,int *,int ) ;
 scalar_t__ FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__,int ) ;

__attribute__((used)) static int
FUNC_13(const void *VAR_5, const void *VAR_6, void *VAR_7)
{
 zfs_handle_t *VAR_8 = ((zfs_node_t *)VAR_5)->zn_handle;
 zfs_handle_t *VAR_9 = ((zfs_node_t *)VAR_6)->zn_handle;
 zfs_sort_column_t *VAR_10 = (zfs_sort_column_t *)VAR_7;
 zfs_sort_column_t *VAR_11;

 for (VAR_11 = VAR_10; VAR_11 != ((void*)0); VAR_11 = VAR_11->sc_next) {
  char VAR_12[VAR_1], VAR_13[VAR_1];
  char *VAR_14, *VAR_15;
  uint64_t VAR_16, VAR_17;
  boolean_t VAR_18, VAR_19;
  int VAR_20 = 0;






  VAR_14 = VAR_15 = ((void*)0);
  if (VAR_11->sc_prop == VAR_3) {
   nvlist_t *VAR_21, *VAR_22;
   nvlist_t *VAR_23, *VAR_24;

   VAR_21 = FUNC_8(VAR_8);
   VAR_22 = FUNC_8(VAR_9);

   VAR_18 = (FUNC_0(VAR_21,
       VAR_11->sc_user_prop, &VAR_23) == 0);
   VAR_19 = (FUNC_0(VAR_22,
       VAR_11->sc_user_prop, &VAR_24) == 0);

   if (VAR_18)
    FUNC_4(FUNC_1(VAR_23,
        VAR_4, &VAR_14) == 0);
   if (VAR_19)
    FUNC_4(FUNC_1(VAR_24,
        VAR_4, &VAR_15) == 0);
  } else if (VAR_11->sc_prop == VAR_2) {
   VAR_18 = VAR_19 = VAR_0;

   (void) FUNC_3(VAR_12, FUNC_6(VAR_8), sizeof (VAR_12));
   (void) FUNC_3(VAR_13, FUNC_6(VAR_9), sizeof (VAR_13));

   VAR_14 = VAR_12;
   VAR_15 = VAR_13;
  } else if (FUNC_11(VAR_11->sc_prop)) {
   VAR_18 = (FUNC_9(VAR_8, VAR_11->sc_prop, VAR_12,
       sizeof (VAR_12), ((void*)0), ((void*)0), 0, VAR_0) == 0);
   VAR_19 = (FUNC_9(VAR_9, VAR_11->sc_prop, VAR_13,
       sizeof (VAR_13), ((void*)0), ((void*)0), 0, VAR_0) == 0);

   VAR_14 = VAR_12;
   VAR_15 = VAR_13;
  } else {
   VAR_18 = FUNC_12(VAR_11->sc_prop,
       FUNC_7(VAR_8));
   VAR_19 = FUNC_12(VAR_11->sc_prop,
       FUNC_7(VAR_9));

   if (VAR_18)
    (void) FUNC_10(VAR_8, VAR_11->sc_prop,
        &VAR_16, ((void*)0), ((void*)0), 0);
   if (VAR_19)
    (void) FUNC_10(VAR_9, VAR_11->sc_prop,
        &VAR_17, ((void*)0), ((void*)0), 0);
  }

  if (!VAR_18 && !VAR_19)
   continue;
  else if (!VAR_18)
   return (1);
  else if (!VAR_19)
   return (-1);

  if (VAR_14)
   VAR_20 = FUNC_2(VAR_14, VAR_15);
  else if (VAR_16 < VAR_17)
   VAR_20 = -1;
  else if (VAR_16 > VAR_17)
   VAR_20 = 1;

  if (VAR_20 != 0) {
   if (VAR_11->sc_reverse == VAR_0)
    VAR_20 = (VAR_20 < 0) ? 1 : -1;
   return (VAR_20);
  }
 }

 return (FUNC_5(VAR_5, VAR_6, ((void*)0)));
}
