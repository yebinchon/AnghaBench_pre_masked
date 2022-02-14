
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * pi_name; } ;
typedef TYPE_1__ zprop_index_t ;
struct TYPE_5__ {int pd_proptype; TYPE_1__* pd_table; int * pd_colname; } ;
typedef TYPE_2__ zprop_desc_t ;
typedef int zfs_type_t ;
typedef int boolean_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;



 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 TYPE_2__* FUNC_3 (int ) ;

size_t
FUNC_4(int VAR_5, boolean_t *VAR_6, zfs_type_t VAR_7)
{
 zprop_desc_t *VAR_8, *VAR_9;
 const zprop_index_t *VAR_10;
 size_t VAR_11;
 int VAR_12;

 FUNC_0(VAR_5 != VAR_4 && VAR_5 != VAR_3);
 FUNC_0(VAR_5 < FUNC_2(VAR_7));

 VAR_8 = FUNC_3(VAR_7);
 VAR_9 = &VAR_8[VAR_5];

 *VAR_6 = VAR_1;




 VAR_11 = FUNC_1(VAR_9->pd_colname);





 switch (VAR_9->pd_proptype) {
 case 129:




  if (VAR_11 < 5)
   VAR_11 = 5;




  if (VAR_5 == VAR_2)
   *VAR_6 = VAR_0;
  break;
 case 130:
  VAR_10 = VAR_8[VAR_5].pd_table;
  for (VAR_12 = 0; VAR_10[VAR_12].pi_name != ((void*)0); VAR_12++) {
   if (FUNC_1(VAR_10[VAR_12].pi_name) > VAR_11)
    VAR_11 = FUNC_1(VAR_10[VAR_12].pi_name);
  }
  break;

 case 128:
  *VAR_6 = VAR_0;
  break;
 }

 return (VAR_11);
}
