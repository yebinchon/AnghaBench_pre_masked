
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int (* zprop_func ) (int,void*) ;
struct TYPE_7__ {int pd_propnum; scalar_t__ pd_visible; } ;
typedef TYPE_1__ zprop_desc_t ;
typedef int zfs_type_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__**) ;
 TYPE_1__** FUNC_1 (int,int ) ;
 int FUNC_2 (TYPE_1__**,int) ;
 TYPE_1__** FUNC_3 (int) ;
 int FUNC_4 (void*,int,int,int ) ;
 int VAR_2 ;
 int FUNC_5 (int ) ;
 TYPE_1__* FUNC_6 (int ) ;

int
FUNC_7(zprop_func VAR_3, void *VAR_4, boolean_t VAR_5,
    boolean_t VAR_6, zfs_type_t VAR_7)
{
 int VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
 zprop_desc_t *VAR_13;
 zprop_desc_t **VAR_14;

 VAR_13 = FUNC_6(VAR_7);
 VAR_10 = FUNC_5(VAR_7);
 VAR_11 = VAR_10 * sizeof (zprop_desc_t *);




 if ((VAR_14 = FUNC_3(VAR_11)) == ((void*)0))
  return (VAR_1);


 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  VAR_14[VAR_9] = &VAR_13[VAR_9];

 if (VAR_6) {
  FUNC_4((void *)VAR_14, VAR_10, sizeof (zprop_desc_t *),
      VAR_2);
 }

 VAR_12 = VAR_1;
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  if ((VAR_14[VAR_8]->pd_visible || VAR_5) &&
      (VAR_3(VAR_14[VAR_8]->pd_propnum, VAR_4) != VAR_1)) {
   VAR_12 = VAR_14[VAR_8]->pd_propnum;
   break;
  }
 }




 FUNC_0(VAR_14);

 return (VAR_12);
}
