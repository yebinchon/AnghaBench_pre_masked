
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int endarc; } ;
struct rar5 {TYPE_1__ main; } ;
struct archive_read {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;


 struct rar5* FUNC_0 (struct archive_read*) ;
 int FUNC_1 (struct archive_read*) ;

__attribute__((used)) static int FUNC_2(struct archive_read* VAR_2) {
 int VAR_3;
 struct rar5* VAR_4 = FUNC_0(VAR_2);
 while(1) {
  if(VAR_4->main.endarc == 1) {
   int VAR_5 = 1;

   VAR_4->main.endarc = 0;

   while(VAR_5) {
    VAR_3 = FUNC_1(VAR_2);
    switch(VAR_3) {
     case 128:

      break;
     case 129:

      VAR_5 = 0;
      break;
     default:


      return VAR_3;
    }
   }

   break;
  } else {




   VAR_3 = FUNC_1(VAR_2);
   if(VAR_3 == VAR_1 || VAR_3 == VAR_0)
    return VAR_3;






   if(VAR_3 != 128) {



    if(VAR_4->main.endarc == 0) {
     return VAR_3;
    } else {
     continue;
    }
   }
  }
 }

 return 129;
}
