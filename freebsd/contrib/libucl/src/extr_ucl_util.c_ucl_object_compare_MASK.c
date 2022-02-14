
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {int type; int len; } ;
typedef TYPE_1__ ucl_object_t ;
typedef int * ucl_object_iter_t ;
struct TYPE_19__ {unsigned int n; } ;



 int FUNC_0 (TYPE_2__*,TYPE_1__ const*) ;






 TYPE_1__* FUNC_1 (TYPE_2__,unsigned int) ;
 int FUNC_2 (int ,int ) ;
 TYPE_1__* FUNC_3 (TYPE_1__ const*,int **,int) ;
 int FUNC_4 (TYPE_1__ const*) ;
 TYPE_1__* FUNC_5 (TYPE_1__ const*,int ) ;
 int FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__ const*) ;
 TYPE_2__* VAR_0 ;
 TYPE_2__* VAR_1 ;

int
FUNC_9 (const ucl_object_t *VAR_2, const ucl_object_t *VAR_3)
{
 const ucl_object_t *VAR_4, *VAR_5;
 ucl_object_iter_t VAR_6 = ((void*)0);
 int VAR_7 = 0;

 if (VAR_2->type != VAR_3->type) {
  return (VAR_2->type) - (VAR_3->type);
 }

 switch (VAR_2->type) {
 case 129:
  if (VAR_2->len == VAR_3->len && VAR_2->len > 0) {
   VAR_7 = FUNC_2 (FUNC_8(VAR_2), FUNC_8(VAR_3));
  }
  else {
   VAR_7 = VAR_2->len - VAR_3->len;
  }
  break;
 case 132:
 case 131:
 case 128:
  VAR_7 = FUNC_7 (VAR_2) - FUNC_7 (VAR_3);
  break;
 case 133:
  VAR_7 = FUNC_6 (VAR_2) - FUNC_6 (VAR_3);
  break;
 case 134:
  if (VAR_2->len == VAR_3->len && VAR_2->len > 0) {
   FUNC_0 (VAR_0, VAR_2);
   FUNC_0 (VAR_1, VAR_3);
   unsigned VAR_8;


   for (VAR_8 = 0; VAR_8 < VAR_0->n; VAR_8 ++) {
    VAR_4 = FUNC_1 (*VAR_0, VAR_8);
    VAR_5 = FUNC_1 (*VAR_1, VAR_8);

    if (VAR_4 == ((void*)0) && VAR_5 != ((void*)0)) {
     return -1;
    }
    else if (VAR_5 == ((void*)0) && VAR_4 != ((void*)0)) {
     return 1;
    }
    else if (VAR_4 != ((void*)0) && VAR_5 != ((void*)0)) {
     VAR_7 = FUNC_9 (VAR_4, VAR_5);
     if (VAR_7 != 0) {
      break;
     }
    }
   }
  }
  else {
   VAR_7 = VAR_2->len - VAR_3->len;
  }
  break;
 case 130:
  if (VAR_2->len == VAR_3->len && VAR_2->len > 0) {
   while ((VAR_4 = FUNC_3 (VAR_2, &VAR_6, 1)) != ((void*)0)) {
    VAR_5 = FUNC_5 (VAR_3, FUNC_4 (VAR_4));
    if (VAR_5 == ((void*)0)) {
     VAR_7 = 1;
     break;
    }
    VAR_7 = FUNC_9 (VAR_4, VAR_5);
    if (VAR_7 != 0) {
     break;
    }
   }
  }
  else {
   VAR_7 = VAR_2->len - VAR_3->len;
  }
  break;
 default:
  VAR_7 = 0;
  break;
 }

 return VAR_7;
}
