
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int len; TYPE_2__* val; } ;
struct TYPE_11__ {TYPE_3__ rdnSequence; } ;
struct TYPE_12__ {TYPE_4__ u; } ;
struct TYPE_9__ {int len; TYPE_1__* val; } ;
struct TYPE_8__ {int value; int type; } ;
typedef TYPE_5__ Name ;


 int FUNC_0 (int *,int *,int*) ;
 int FUNC_1 (int *,int *) ;

int
FUNC_2(const Name *VAR_0, const Name *VAR_1, int *VAR_2)
{
    int VAR_3;
    size_t VAR_4, VAR_5;

    *VAR_2 = VAR_0->u.rdnSequence.len - VAR_1->u.rdnSequence.len;
    if (*VAR_2)
 return 0;

    for (VAR_4 = 0 ; VAR_4 < VAR_0->u.rdnSequence.len; VAR_4++) {
 *VAR_2 = VAR_0->u.rdnSequence.val[VAR_4].len - VAR_1->u.rdnSequence.val[VAR_4].len;
 if (*VAR_2)
     return 0;

 for (VAR_5 = 0; VAR_5 < VAR_0->u.rdnSequence.val[VAR_4].len; VAR_5++) {
     *VAR_2 = FUNC_1(&VAR_0->u.rdnSequence.val[VAR_4].val[VAR_5].type,
      &VAR_0->u.rdnSequence.val[VAR_4].val[VAR_5].type);
     if (*VAR_2)
  return 0;

     VAR_3 = FUNC_0(&VAR_0->u.rdnSequence.val[VAR_4].val[VAR_5].value,
         &VAR_1->u.rdnSequence.val[VAR_4].val[VAR_5].value,
         VAR_2);
     if (VAR_3)
  return VAR_3;
     if (*VAR_2)
  return 0;
 }
    }
    *VAR_2 = 0;
    return 0;
}
