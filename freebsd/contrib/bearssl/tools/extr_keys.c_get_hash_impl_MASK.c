
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int desc; } ;
typedef TYPE_1__ br_hash_class ;
struct TYPE_6__ {TYPE_1__* hclass; scalar_t__ name; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__ const VAR_2 ;
 TYPE_2__* VAR_3 ;

const br_hash_class *
FUNC_0(int VAR_4)
{
 size_t VAR_5;

 if (VAR_4 == 0) {
  return &VAR_2;
 }
 for (VAR_5 = 0; VAR_3[VAR_5].name; VAR_5 ++) {
  const br_hash_class *VAR_6;
  int VAR_7;

  VAR_6 = VAR_3[VAR_5].hclass;
  VAR_7 = (VAR_6->desc >> VAR_1) & VAR_0;
  if (VAR_7 == VAR_4) {
   return VAR_6;
  }
 }
 return ((void*)0);
}
