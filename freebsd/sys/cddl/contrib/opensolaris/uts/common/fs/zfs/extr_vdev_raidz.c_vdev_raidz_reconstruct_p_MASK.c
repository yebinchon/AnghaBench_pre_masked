
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_5__ {int rm_firstdatacol; int rm_cols; TYPE_1__* rm_col; } ;
typedef TYPE_2__ raidz_map_t ;
typedef int abd_t ;
struct TYPE_4__ {scalar_t__ rc_size; int * rc_abd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 size_t VAR_0 ;
 int FUNC_2 (int *,int *,scalar_t__) ;
 int FUNC_3 (int *,int *,int ,int ,int ,int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_4(raidz_map_t *VAR_2, int *VAR_3, int VAR_4)
{
 int VAR_5 = VAR_3[0];
 int VAR_6;
 abd_t *VAR_7, *VAR_8;

 FUNC_0(VAR_4 == 1);
 FUNC_0(VAR_5 >= VAR_2->rm_firstdatacol);
 FUNC_0(VAR_5 < VAR_2->rm_cols);

 FUNC_0(VAR_2->rm_col[VAR_5].rc_size <= VAR_2->rm_col[VAR_0].rc_size);
 FUNC_0(VAR_2->rm_col[VAR_5].rc_size > 0);

 VAR_8 = VAR_2->rm_col[VAR_0].rc_abd;
 VAR_7 = VAR_2->rm_col[VAR_5].rc_abd;

 FUNC_2(VAR_7, VAR_8, VAR_2->rm_col[VAR_5].rc_size);

 for (VAR_6 = VAR_2->rm_firstdatacol; VAR_6 < VAR_2->rm_cols; VAR_6++) {
  uint64_t VAR_9 = FUNC_1(VAR_2->rm_col[VAR_5].rc_size,
      VAR_2->rm_col[VAR_6].rc_size);

  VAR_8 = VAR_2->rm_col[VAR_6].rc_abd;
  VAR_7 = VAR_2->rm_col[VAR_5].rc_abd;

  if (VAR_6 == VAR_5)
   continue;

  (void) FUNC_3(VAR_7, VAR_8, 0, 0, VAR_9,
      VAR_1, ((void*)0));
 }

 return (1 << VAR_0);
}
