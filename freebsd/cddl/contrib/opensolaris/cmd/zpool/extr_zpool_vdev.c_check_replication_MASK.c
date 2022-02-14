
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
struct TYPE_4__ {scalar_t__ zprl_parity; scalar_t__ zprl_children; int zprl_type; } ;
typedef TYPE_1__ replication_level_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int *,int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *,int ,int **) ;
 scalar_t__ FUNC_5 (int *,int ,int ***,scalar_t__*) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,scalar_t__,scalar_t__,...) ;
 int FUNC_8 (int) ;

__attribute__((used)) static int
FUNC_9(nvlist_t *VAR_4, nvlist_t *VAR_5)
{
 nvlist_t **VAR_6;
 uint_t VAR_7;
 replication_level_t *VAR_8 = ((void*)0), *VAR_9;
 int VAR_10;





 if (VAR_4 != ((void*)0)) {
  nvlist_t *VAR_11;

  FUNC_8(FUNC_4(VAR_4, VAR_3,
      &VAR_11) == 0);
  if ((VAR_8 = FUNC_1(VAR_11, VAR_0)) == ((void*)0))
   return (0);
 }




 if ((FUNC_5(VAR_5, VAR_2,
     &VAR_6, &VAR_7) != 0) || (VAR_7 == 0)) {
  FUNC_0(VAR_8);
  return (0);
 }




 if (FUNC_3(VAR_5) == VAR_7) {
  FUNC_0(VAR_8);
  return (0);
 }





 if ((VAR_9 = FUNC_1(VAR_5, VAR_1)) == ((void*)0)) {
  FUNC_0(VAR_8);
  return (-1);
 }





 VAR_10 = 0;
 if (VAR_8 != ((void*)0)) {
  if (FUNC_6(VAR_8->zprl_type, VAR_9->zprl_type) != 0) {
   FUNC_7(FUNC_2(
       "mismatched replication level: pool uses %s "
       "and new vdev is %s\n"),
       VAR_8->zprl_type, VAR_9->zprl_type);
   VAR_10 = -1;
  } else if (VAR_8->zprl_parity != VAR_9->zprl_parity) {
   FUNC_7(FUNC_2(
       "mismatched replication level: pool uses %llu "
       "device parity and new vdev uses %llu\n"),
       VAR_8->zprl_parity, VAR_9->zprl_parity);
   VAR_10 = -1;
  } else if (VAR_8->zprl_children != VAR_9->zprl_children) {
   FUNC_7(FUNC_2(
       "mismatched replication level: pool uses %llu-way "
       "%s and new vdev uses %llu-way %s\n"),
       VAR_8->zprl_children, VAR_8->zprl_type,
       VAR_9->zprl_children, VAR_9->zprl_type);
   VAR_10 = -1;
  }
 }

 FUNC_0(VAR_9);
 if (VAR_8 != ((void*)0))
  FUNC_0(VAR_8);

 return (VAR_10);
}
