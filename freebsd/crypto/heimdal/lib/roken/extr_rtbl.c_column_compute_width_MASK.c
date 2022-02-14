
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct column_data {size_t num_rows; TYPE_1__* rows; scalar_t__ width; int header; } ;
typedef TYPE_2__* rtbl_t ;
struct TYPE_5__ {int flags; } ;
struct TYPE_4__ {int data; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2 (rtbl_t VAR_1, struct column_data *VAR_2)
{
    size_t VAR_3;

    if(VAR_1->flags & VAR_0)
 VAR_2->width = 0;
    else
 VAR_2->width = FUNC_1 (VAR_2->header);
    for (VAR_3 = 0; VAR_3 < VAR_2->num_rows; VAR_3++)
 VAR_2->width = FUNC_0 (VAR_2->width, (int) FUNC_1 (VAR_2->rows[VAR_3].data));
}
