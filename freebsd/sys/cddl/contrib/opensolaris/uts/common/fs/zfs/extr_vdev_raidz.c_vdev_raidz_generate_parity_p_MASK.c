
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct pqr_struct {int * member_2; int * member_1; int * member_0; } ;
struct TYPE_5__ {int rm_firstdatacol; int rm_cols; TYPE_1__* rm_col; } ;
typedef TYPE_2__ raidz_map_t ;
typedef int abd_t ;
struct TYPE_4__ {int rc_size; int * rc_abd; } ;


 size_t VAR_0 ;
 int FUNC_0 (int *,int *,int ) ;
 int FUNC_1 (int *,int ,int ,int ,struct pqr_struct*) ;
 int * FUNC_2 (int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_3(raidz_map_t *VAR_2)
{
 uint64_t *VAR_3;
 int VAR_4;
 abd_t *VAR_5;

 for (VAR_4 = VAR_2->rm_firstdatacol; VAR_4 < VAR_2->rm_cols; VAR_4++) {
  VAR_5 = VAR_2->rm_col[VAR_4].rc_abd;
  VAR_3 = FUNC_2(VAR_2->rm_col[VAR_0].rc_abd);

  if (VAR_4 == VAR_2->rm_firstdatacol) {
   FUNC_0(VAR_3, VAR_5, VAR_2->rm_col[VAR_4].rc_size);
  } else {
   struct pqr_struct VAR_6 = { VAR_3, ((void*)0), ((void*)0) };
   (void) FUNC_1(VAR_5, 0, VAR_2->rm_col[VAR_4].rc_size,
       VAR_1, &VAR_6);
  }
 }
}
