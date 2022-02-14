
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
 int FUNC_2 (int,int) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;

__attribute__((used)) static void
FUNC_3(raidz_map_t *VAR_3)
{
 uint64_t *VAR_4, *VAR_5, *VAR_6, *VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;

 VAR_8 = VAR_3->rm_col[VAR_0].rc_size / sizeof (VAR_7[0]);
 FUNC_0(VAR_3->rm_col[VAR_0].rc_size ==
     VAR_3->rm_col[VAR_1].rc_size);
 FUNC_0(VAR_3->rm_col[VAR_0].rc_size ==
     VAR_3->rm_col[VAR_2].rc_size);

 for (VAR_12 = VAR_3->rm_firstdatacol; VAR_12 < VAR_3->rm_cols; VAR_12++) {
  VAR_7 = VAR_3->rm_col[VAR_12].rc_data;
  VAR_4 = VAR_3->rm_col[VAR_0].rc_data;
  VAR_5 = VAR_3->rm_col[VAR_1].rc_data;
  VAR_6 = VAR_3->rm_col[VAR_2].rc_data;

  VAR_9 = VAR_3->rm_col[VAR_12].rc_size / sizeof (VAR_7[0]);

  if (VAR_12 == VAR_3->rm_firstdatacol) {
   FUNC_0(VAR_9 == VAR_8 || VAR_9 == 0);
   for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++, VAR_7++, VAR_4++, VAR_5++, VAR_6++) {
    *VAR_4 = *VAR_7;
    *VAR_5 = *VAR_7;
    *VAR_6 = *VAR_7;
   }
   for (; VAR_11 < VAR_8; VAR_11++, VAR_7++, VAR_4++, VAR_5++, VAR_6++) {
    *VAR_4 = 0;
    *VAR_5 = 0;
    *VAR_6 = 0;
   }
  } else {
   FUNC_0(VAR_9 <= VAR_8);





   for (VAR_11 = 0; VAR_11 < VAR_9; VAR_11++, VAR_7++, VAR_4++, VAR_5++, VAR_6++) {
    *VAR_4 ^= *VAR_7;

    FUNC_1(*VAR_5, VAR_10);
    *VAR_5 ^= *VAR_7;

    FUNC_2(*VAR_6, VAR_10);
    *VAR_6 ^= *VAR_7;
   }





   for (; VAR_11 < VAR_8; VAR_11++, VAR_5++, VAR_6++) {
    FUNC_1(*VAR_5, VAR_10);
    FUNC_2(*VAR_6, VAR_10);
   }
  }
 }
}
