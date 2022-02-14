
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ bytes_remaining; } ;
struct rar5 {TYPE_1__ file; scalar_t__ merge_mode; } ;
struct archive_read {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct archive_read*,scalar_t__) ;
 struct rar5* FUNC_1 (struct archive_read*) ;
 int FUNC_2 (struct archive_read*) ;

__attribute__((used)) static int FUNC_3(struct archive_read* VAR_1) {
 struct rar5* VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 if(VAR_2->file.bytes_remaining) {





  if(VAR_2->merge_mode) {




   VAR_3 = FUNC_0(VAR_1, VAR_2->file.bytes_remaining);
   if(VAR_3 != VAR_0) {
    return VAR_3;
   }
   VAR_2->file.bytes_remaining = 0;
  } else {



   VAR_3 = FUNC_2(VAR_1);
   if(VAR_3 != VAR_0) {
    return VAR_3;
   }
  }
 }

 return VAR_0;
}
