
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int rm_firstdatacol; TYPE_2__* rm_col; } ;
typedef TYPE_1__ raidz_map_t ;
struct TYPE_6__ {scalar_t__ rc_error; int rc_size; int rc_data; int rc_tried; } ;
typedef TYPE_2__ raidz_col_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*,int ,int ) ;
 int FUNC_1 (int ,void*,int ) ;
 int FUNC_2 (TYPE_1__*) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (void*,int ) ;

__attribute__((used)) static int
FUNC_5(raidz_map_t *VAR_2)
{
 void *VAR_3[VAR_1];
 int VAR_4, VAR_5 = 0;
 raidz_col_t *VAR_6;

 for (VAR_4 = 0; VAR_4 < VAR_2->rm_firstdatacol; VAR_4++) {
  VAR_6 = &VAR_2->rm_col[VAR_4];
  if (!VAR_6->rc_tried || VAR_6->rc_error != 0)
   continue;
  VAR_3[VAR_4] = FUNC_3(VAR_6->rc_size);
  FUNC_1(VAR_6->rc_data, VAR_3[VAR_4], VAR_6->rc_size);
 }

 FUNC_2(VAR_2);

 for (VAR_4 = VAR_2->rm_firstdatacol - 1; VAR_4 >= 0; VAR_4--) {
  VAR_6 = &VAR_2->rm_col[VAR_4];
  if (!VAR_6->rc_tried || VAR_6->rc_error != 0)
   continue;
  if (FUNC_0(VAR_3[VAR_4], VAR_6->rc_data, VAR_6->rc_size) != 0) {
   VAR_6->rc_error = VAR_0;
   VAR_5++;
  }
  FUNC_4(VAR_3[VAR_4], VAR_6->rc_size);
 }

 return (VAR_5);
}
