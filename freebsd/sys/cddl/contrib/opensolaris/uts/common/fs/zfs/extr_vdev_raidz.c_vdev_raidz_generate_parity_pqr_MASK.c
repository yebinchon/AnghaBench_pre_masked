
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint64_t ;
struct pqr_struct {size_t* member_0; size_t* member_1; size_t* member_2; } ;
struct TYPE_5__ {int rm_firstdatacol; int rm_cols; TYPE_1__* rm_col; } ;
typedef TYPE_2__ raidz_map_t ;
typedef int p ;
typedef int abd_t ;
struct TYPE_4__ {int rc_size; int * rc_abd; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (size_t,size_t) ;
 int FUNC_2 (size_t,size_t) ;
 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_3 (size_t*,int *,int) ;
 int FUNC_4 (int *,int ,int,int ,struct pqr_struct*) ;
 size_t* FUNC_5 (int *) ;
 int FUNC_6 (size_t*,size_t*,int) ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_7(raidz_map_t *VAR_4)
{
 uint64_t *VAR_5, *VAR_6, *VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12;
 abd_t *VAR_13;

 VAR_8 = VAR_4->rm_col[VAR_0].rc_size / sizeof (VAR_5[0]);
 FUNC_0(VAR_4->rm_col[VAR_0].rc_size ==
     VAR_4->rm_col[VAR_1].rc_size);
 FUNC_0(VAR_4->rm_col[VAR_0].rc_size ==
     VAR_4->rm_col[VAR_2].rc_size);

 for (VAR_12 = VAR_4->rm_firstdatacol; VAR_12 < VAR_4->rm_cols; VAR_12++) {
  VAR_13 = VAR_4->rm_col[VAR_12].rc_abd;
  VAR_5 = FUNC_5(VAR_4->rm_col[VAR_0].rc_abd);
  VAR_6 = FUNC_5(VAR_4->rm_col[VAR_1].rc_abd);
  VAR_7 = FUNC_5(VAR_4->rm_col[VAR_2].rc_abd);

  VAR_9 = VAR_4->rm_col[VAR_12].rc_size / sizeof (VAR_5[0]);

  if (VAR_12 == VAR_4->rm_firstdatacol) {
   FUNC_3(VAR_5, VAR_13, VAR_4->rm_col[VAR_12].rc_size);
   (void) FUNC_6(VAR_6, VAR_5, VAR_4->rm_col[VAR_12].rc_size);
   (void) FUNC_6(VAR_7, VAR_5, VAR_4->rm_col[VAR_12].rc_size);
  } else {
   struct pqr_struct VAR_14 = { VAR_5, VAR_6, VAR_7 };
   (void) FUNC_4(VAR_13, 0, VAR_4->rm_col[VAR_12].rc_size,
       VAR_3, &VAR_14);
  }

  if (VAR_12 == VAR_4->rm_firstdatacol) {
   for (VAR_11 = VAR_9; VAR_11 < VAR_8; VAR_11++) {
    VAR_5[VAR_11] = 0;
    VAR_6[VAR_11] = 0;
    VAR_7[VAR_11] = 0;
   }
  } else {




   for (VAR_11 = VAR_9; VAR_11 < VAR_8; VAR_11++) {
    FUNC_1(VAR_6[VAR_11], VAR_10);
    FUNC_2(VAR_7[VAR_11], VAR_10);
   }
  }
 }
}
