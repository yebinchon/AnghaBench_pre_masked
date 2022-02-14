
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
typedef int src ;
struct TYPE_5__ {int rm_firstdatacol; int rm_cols; TYPE_1__* rm_col; } ;
typedef TYPE_2__ raidz_map_t ;
struct TYPE_4__ {int rc_size; int* rc_data; } ;


 int FUNC_0 (int) ;
 size_t VAR_0 ;

__attribute__((used)) static void
FUNC_1(raidz_map_t *VAR_1)
{
 uint64_t *VAR_2, *VAR_3, VAR_4, VAR_5, VAR_6;
 int VAR_7;

 VAR_4 = VAR_1->rm_col[VAR_0].rc_size / sizeof (VAR_3[0]);

 for (VAR_7 = VAR_1->rm_firstdatacol; VAR_7 < VAR_1->rm_cols; VAR_7++) {
  VAR_3 = VAR_1->rm_col[VAR_7].rc_data;
  VAR_2 = VAR_1->rm_col[VAR_0].rc_data;
  VAR_5 = VAR_1->rm_col[VAR_7].rc_size / sizeof (VAR_3[0]);

  if (VAR_7 == VAR_1->rm_firstdatacol) {
   FUNC_0(VAR_5 == VAR_4);
   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_3++, VAR_2++) {
    *VAR_2 = *VAR_3;
   }
  } else {
   FUNC_0(VAR_5 <= VAR_4);
   for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++, VAR_3++, VAR_2++) {
    *VAR_2 ^= *VAR_3;
   }
  }
 }
}
