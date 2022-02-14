
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int uqc_group_deltas; int uqc_user_deltas; } ;
typedef TYPE_1__ userquota_cache_t ;
typedef int uint64_t ;
typedef int int64_t ;
typedef scalar_t__ boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int,int) ;

__attribute__((used)) static void
FUNC_1(userquota_cache_t *VAR_2, uint64_t VAR_3, uint64_t VAR_4,
    uint64_t VAR_5, uint64_t VAR_6, boolean_t VAR_7)
{
 if ((VAR_4 & VAR_0)) {
  int64_t VAR_8 = VAR_1 + VAR_3;
  if (VAR_7)
   VAR_8 = -VAR_8;

  FUNC_0(&VAR_2->uqc_user_deltas, VAR_5, VAR_8);
  FUNC_0(&VAR_2->uqc_group_deltas, VAR_6, VAR_8);
 }
}
