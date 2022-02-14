
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int filters; struct rar5* filtered_buf; struct rar5* window_buf; } ;
struct TYPE_4__ {struct rar5* push_buf; } ;
struct rar5 {TYPE_2__ cstate; TYPE_1__ vol; } ;
struct archive_read {TYPE_3__* format; } ;
struct TYPE_6__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct rar5*) ;
 int FUNC_2 (struct rar5*) ;
 struct rar5* FUNC_3 (struct archive_read*) ;

__attribute__((used)) static int FUNC_4(struct archive_read *VAR_1) {
 struct rar5* VAR_2 = FUNC_3(VAR_1);

 FUNC_1(VAR_2->cstate.window_buf);
 FUNC_1(VAR_2->cstate.filtered_buf);

 FUNC_1(VAR_2->vol.push_buf);

 FUNC_2(VAR_2);
 FUNC_0(&VAR_2->cstate.filters);

 FUNC_1(VAR_2);
 VAR_1->format->data = ((void*)0);

 return VAR_0;
}
