
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int all_filters_applied; scalar_t__ write_ptr; scalar_t__ last_write_ptr; int filters; } ;
struct rar5 {TYPE_1__ cstate; } ;
struct filter_info {scalar_t__ block_start; scalar_t__ block_length; } ;
struct archive_read {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct filter_info**) ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct filter_info*) ;
 struct rar5* FUNC_4 (struct archive_read*) ;
 int FUNC_5 (struct archive_read*,struct rar5*,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct archive_read*,struct filter_info*) ;

__attribute__((used)) static int FUNC_7(struct archive_read* VAR_3) {
 struct filter_info* VAR_4;
 struct rar5* VAR_5 = FUNC_4(VAR_3);
 int VAR_6;

 VAR_5->cstate.all_filters_applied = 0;



 if(VAR_2 == FUNC_1(&VAR_5->cstate.filters,
     FUNC_0(&VAR_4))) {


  if(VAR_5->cstate.write_ptr > VAR_4->block_start &&
      VAR_5->cstate.write_ptr >= VAR_4->block_start +
      VAR_4->block_length) {


   if(VAR_5->cstate.last_write_ptr == VAR_4->block_start) {


    VAR_6 = FUNC_6(VAR_3, VAR_4);
    if(VAR_6 != VAR_0) {

     return VAR_6;
    }




    (void) FUNC_2(&VAR_5->cstate.filters,
        FUNC_0(&VAR_4));

    FUNC_3(VAR_4);
   } else {


    FUNC_5(VAR_3, VAR_5,
        VAR_5->cstate.last_write_ptr,
        VAR_4->block_start);
   }



   return VAR_1;
  }
 }

 VAR_5->cstate.all_filters_applied = 1;
 return VAR_0;
}
