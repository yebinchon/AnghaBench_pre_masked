
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int initialized; int all_filters_applied; scalar_t__ last_write_ptr; scalar_t__ write_ptr; int filters; int window_buf; } ;
struct TYPE_3__ {int solid; } ;
struct rar5 {TYPE_2__ cstate; TYPE_1__ main; } ;
struct filter_info {int block_start; } ;
struct archive_read {int archive; } ;
typedef scalar_t__ int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct archive_read*) ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (struct filter_info**) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 scalar_t__ FUNC_4 (int *) ;
 struct rar5* FUNC_5 (struct archive_read*) ;
 int FUNC_6 (struct rar5*) ;
 int FUNC_7 (struct archive_read*) ;
 int FUNC_8 (struct archive_read*,struct rar5*,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_9 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_10(struct archive_read* VAR_6) {
 struct rar5* VAR_7 = FUNC_5(VAR_6);
 int VAR_8;
 int64_t VAR_9;

 if(!VAR_7->cstate.initialized) {


  if(!VAR_7->main.solid || !VAR_7->cstate.window_buf) {
   FUNC_6(VAR_7);
  }

  VAR_7->cstate.initialized = 1;
 }

 if(VAR_7->cstate.all_filters_applied == 1) {





  while(1) {
   VAR_8 = FUNC_7(VAR_6);
   if(VAR_8 == VAR_0 || VAR_8 == VAR_2)
    return VAR_8;

   if(VAR_7->cstate.last_write_ptr ==
       VAR_7->cstate.write_ptr) {


    continue;
   }



   break;
  }
 }



 VAR_8 = FUNC_0(VAR_6);
 if(VAR_8 == VAR_4) {
  return VAR_3;
 } else if(VAR_8 == VAR_2) {
  return VAR_2;
 }



 if(FUNC_4(&VAR_7->cstate.filters) > 0) {


  struct filter_info* VAR_10;


  if(VAR_5 != FUNC_3(&VAR_7->cstate.filters,
      FUNC_2(&VAR_10)))
  {
   FUNC_1(&VAR_6->archive,
       VAR_1,
       "Can't read first filter");
   return VAR_2;
  }

  VAR_9 = FUNC_9(VAR_10->block_start,
      VAR_7->cstate.write_ptr);
 } else {



  VAR_9 = VAR_7->cstate.write_ptr;
 }

 if(VAR_9 == VAR_7->cstate.last_write_ptr) {
  return VAR_4;
 } else {




  FUNC_8(VAR_6, VAR_7, VAR_7->cstate.last_write_ptr,
      VAR_9);
  VAR_7->cstate.last_write_ptr = VAR_9;
 }

 return VAR_3;
}
