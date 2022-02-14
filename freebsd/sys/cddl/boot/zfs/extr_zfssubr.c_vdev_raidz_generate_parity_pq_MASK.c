
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
 int FUNC_1 (int,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;

__attribute__((used)) static void
FUNC_2(raidz_map_t *VAR_2)
{
 uint64_t *VAR_3, *VAR_4, *VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 int VAR_10;

 VAR_6 = VAR_2->rm_col[VAR_0].rc_size / sizeof (VAR_5[0]);
 FUNC_0(VAR_2->rm_col[VAR_0].rc_size ==
     VAR_2->rm_col[VAR_1].rc_size);

 for (VAR_10 = VAR_2->rm_firstdatacol; VAR_10 < VAR_2->rm_cols; VAR_10++) {
  VAR_5 = VAR_2->rm_col[VAR_10].rc_data;
  VAR_3 = VAR_2->rm_col[VAR_0].rc_data;
  VAR_4 = VAR_2->rm_col[VAR_1].rc_data;

  VAR_7 = VAR_2->rm_col[VAR_10].rc_size / sizeof (VAR_5[0]);

  if (VAR_10 == VAR_2->rm_firstdatacol) {
   FUNC_0(VAR_7 == VAR_6 || VAR_7 == 0);
   for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++, VAR_5++, VAR_3++, VAR_4++) {
    *VAR_3 = *VAR_5;
    *VAR_4 = *VAR_5;
   }
   for (; VAR_9 < VAR_6; VAR_9++, VAR_5++, VAR_3++, VAR_4++) {
    *VAR_3 = 0;
    *VAR_4 = 0;
   }
  } else {
   FUNC_0(VAR_7 <= VAR_6);





   for (VAR_9 = 0; VAR_9 < VAR_7; VAR_9++, VAR_5++, VAR_3++, VAR_4++) {
    *VAR_3 ^= *VAR_5;

    FUNC_1(*VAR_4, VAR_8);
    *VAR_4 ^= *VAR_5;
   }





   for (; VAR_9 < VAR_6; VAR_9++, VAR_4++) {
    FUNC_1(*VAR_4, VAR_8);
   }
  }
 }
}
