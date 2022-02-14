
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_9__ {scalar_t__ nvp_type; scalar_t__ nvp_nitems; scalar_t__ nvp_data; } ;
typedef TYPE_1__ nvpair_t ;
typedef int nvlist_t ;
typedef int nvl ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int const*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int const*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int const*,int *) ;
 int FUNC_8 (int *,TYPE_1__*) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,TYPE_1__*) ;
 TYPE_1__* FUNC_11 (char*,int ,int ,int ,int ) ;
 int FUNC_12 (TYPE_1__*,int **,int,int ) ;
 int FUNC_13 (TYPE_1__*) ;

int
FUNC_14(nvpair_t *VAR_4, const nvlist_t *VAR_5)
{
 nvpair_t *VAR_6;
 nvlist_t *VAR_7, *VAR_8;
 int VAR_9;

 FUNC_1(VAR_4);
 FUNC_2(VAR_4->nvp_type == VAR_3);
 if (VAR_5 == ((void*)0) || FUNC_5(VAR_5) != 0 ||
     FUNC_7(VAR_5, ((void*)0)) != ((void*)0)) {
  FUNC_0(VAR_0);
  return (-1);
 }
 VAR_7 = FUNC_3(VAR_5);
 if (VAR_7 == ((void*)0)) {
  return (-1);
 }
 VAR_9 = FUNC_6(VAR_7) | VAR_1;
 FUNC_9(VAR_7, VAR_9);

 VAR_6 = ((void*)0);
 VAR_8 = ((void*)0);
 if (VAR_4->nvp_nitems > 0) {
  nvlist_t **VAR_10 = (void *)(uintptr_t)VAR_4->nvp_data;

  VAR_8 = VAR_10[VAR_4->nvp_nitems - 1];
  FUNC_2(VAR_8 != ((void*)0));

  VAR_6 = FUNC_11(" ", VAR_2,
      (uint64_t)(uintptr_t)VAR_7, 0, 0);
  if (VAR_6 == ((void*)0)) {
   goto fail;
  }
 }
 if (FUNC_12(VAR_4, &VAR_7, sizeof(VAR_7), 0) == -1) {
  goto fail;
 }
 if (VAR_6) {
  FUNC_1(VAR_6);
  FUNC_8(VAR_8, VAR_6);
 }
 FUNC_10(VAR_7, VAR_4);
 return (0);
fail:
 if (VAR_6) {
  FUNC_13(VAR_6);
 }
 FUNC_4(VAR_7);
 return (-1);
}
