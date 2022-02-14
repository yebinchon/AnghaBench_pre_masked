
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {struct TYPE_3__* sc_last; struct TYPE_3__* sc_next; void* sc_user_prop; int sc_reverse; scalar_t__ sc_prop; } ;
typedef TYPE_1__ zfs_sort_column_t ;
typedef scalar_t__ zfs_prop_t ;
typedef int boolean_t ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*,char const*) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*) ;
 int FUNC_4 (char const*) ;

int
FUNC_5(zfs_sort_column_t **VAR_1, const char *VAR_2,
    boolean_t VAR_3)
{
 zfs_sort_column_t *VAR_4;
 zfs_prop_t VAR_5;

 if ((VAR_5 = FUNC_3(VAR_2)) == VAR_0 &&
     !FUNC_4(VAR_2))
  return (-1);

 VAR_4 = FUNC_0(sizeof (zfs_sort_column_t));

 VAR_4->sc_prop = VAR_5;
 VAR_4->sc_reverse = VAR_3;
 if (VAR_5 == VAR_0) {
  VAR_4->sc_user_prop = FUNC_0(FUNC_2(VAR_2) + 1);
  (void) FUNC_1(VAR_4->sc_user_prop, VAR_2);
 }

 if (*VAR_1 == ((void*)0)) {
  VAR_4->sc_last = VAR_4;
  *VAR_1 = VAR_4;
 } else {
  (*VAR_1)->sc_last->sc_next = VAR_4;
  (*VAR_1)->sc_last = VAR_4;
 }

 return (0);
}
