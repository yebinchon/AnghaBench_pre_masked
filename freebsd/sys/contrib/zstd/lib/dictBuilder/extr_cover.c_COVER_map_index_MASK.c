
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int U32 ;
struct TYPE_6__ {scalar_t__ value; int key; } ;
struct TYPE_5__ {int sizeMask; TYPE_2__* data; } ;
typedef TYPE_1__ COVER_map_t ;
typedef TYPE_2__ COVER_map_pair_t ;


 int FUNC_0 (TYPE_1__*,int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static U32 FUNC_1(COVER_map_t *VAR_1, U32 VAR_2) {
  const U32 VAR_3 = FUNC_0(VAR_1, VAR_2);
  U32 VAR_4;
  for (VAR_4 = VAR_3;; VAR_4 = (VAR_4 + 1) & VAR_1->sizeMask) {
    COVER_map_pair_t *VAR_5 = &VAR_1->data[VAR_4];
    if (VAR_5->value == VAR_0) {
      return VAR_4;
    }
    if (VAR_5->key == VAR_2) {
      return VAR_4;
    }
  }
}
