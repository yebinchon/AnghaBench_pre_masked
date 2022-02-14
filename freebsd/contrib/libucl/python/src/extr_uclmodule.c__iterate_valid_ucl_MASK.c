
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int ud; } ;
struct TYPE_9__ {scalar_t__ type; TYPE_1__ value; int * key; } ;
typedef TYPE_2__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
typedef int PyObject ;


 int * FUNC_0 (int ) ;
 int * FUNC_1 () ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 (int ,char*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *) ;
 int * FUNC_5 (int ) ;
 int * FUNC_6 (char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int * FUNC_7 (TYPE_2__ const*) ;
 TYPE_2__* FUNC_8 (TYPE_2__ const*,int **,int) ;
 int FUNC_9 (TYPE_2__ const*) ;

__attribute__((used)) static PyObject *
FUNC_10 (ucl_object_t const *VAR_4)
{
 const ucl_object_t *VAR_5;
 ucl_object_iter_t VAR_6 = ((void*)0);

 VAR_5 = VAR_4;

 while ((VAR_4 = FUNC_8 (VAR_5, &VAR_6, 0))) {
  PyObject *VAR_7;

  VAR_7 = FUNC_7(VAR_4);
  if (!VAR_7) {
   PyObject *VAR_8 = ((void*)0);

   if (VAR_4->key != ((void*)0)) {
    VAR_8 = FUNC_6("s", FUNC_9(VAR_4));
   }

   if (VAR_4->type == VAR_2) {
    const ucl_object_t *VAR_9;
    ucl_object_iter_t VAR_10 = ((void*)0);

    VAR_7 = FUNC_1();

    while ((VAR_9 = FUNC_8 (VAR_4, &VAR_10, 1))) {
     PyObject *VAR_11 = FUNC_6("s",FUNC_9(VAR_9));
     FUNC_2(VAR_7, VAR_11, FUNC_10(VAR_9));
    }
   } else if (VAR_4->type == VAR_1) {
    const ucl_object_t *VAR_12;
    ucl_object_iter_t VAR_13 = ((void*)0);

    VAR_7 = FUNC_5(0);

    while ((VAR_12 = FUNC_8 (VAR_4, &VAR_13, 1))) {
     FUNC_4(VAR_7, FUNC_10(VAR_12));
    }
   } else if (VAR_4->type == VAR_3) {



    VAR_7 = FUNC_0(VAR_4->value.ud);
   }
  }
  return VAR_7;
 }

 FUNC_3(VAR_0, "unhandled type");
 return ((void*)0);
}
