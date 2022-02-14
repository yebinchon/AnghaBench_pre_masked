
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ U32 ;
struct TYPE_6__ {scalar_t__ value; scalar_t__ key; } ;
struct TYPE_5__ {TYPE_2__* data; } ;
typedef TYPE_1__ COVER_map_t ;
typedef TYPE_2__ COVER_map_pair_t ;


 size_t FUNC_0 (TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static U32 *FUNC_1(COVER_map_t *VAR_1, U32 VAR_2) {
  COVER_map_pair_t *VAR_3 = &VAR_1->data[FUNC_0(VAR_1, VAR_2)];
  if (VAR_3->value == VAR_0) {
    VAR_3->key = VAR_2;
    VAR_3->value = 0;
  }
  return &VAR_3->value;
}
