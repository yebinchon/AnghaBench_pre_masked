
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rar5 {int dummy; } ;
struct archive_read {int dummy; } ;
struct archive_entry {int dummy; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;







 int FUNC_0 (struct archive_read*,scalar_t__) ;
 int FUNC_1 (struct archive_read*,struct rar5*,scalar_t__*) ;
 int FUNC_2 (struct archive_read*,struct archive_entry*,struct rar5*,scalar_t__*) ;
 int FUNC_3 (struct archive_read*,struct archive_entry*,scalar_t__*) ;
 int FUNC_4 (struct archive_read*,struct archive_entry*,struct rar5*,scalar_t__*) ;
 int FUNC_5 (struct archive_read*,struct archive_entry*,scalar_t__*) ;
 int FUNC_6 (struct archive_read*,size_t*,size_t*) ;

__attribute__((used)) static int FUNC_7(struct archive_read* VAR_3,
    struct archive_entry* VAR_4, struct rar5* VAR_5, ssize_t VAR_6)
{
 size_t VAR_7;
 size_t VAR_8 = 0;
 int VAR_9 = VAR_1;
 size_t VAR_10;

 while(VAR_6 > 0) {
  if(!FUNC_6(VAR_3, &VAR_7, &VAR_10))
   return VAR_0;

  VAR_6 -= VAR_10;
  if(VAR_2 != FUNC_0(VAR_3, VAR_10)) {
   return VAR_0;
  }

  if(!FUNC_6(VAR_3, &VAR_8, &VAR_10))
   return VAR_0;

  VAR_6 -= VAR_10;
  if(VAR_2 != FUNC_0(VAR_3, VAR_10)) {
   return VAR_0;
  }

  switch(VAR_8) {
   case 133:
    VAR_9 = FUNC_1(VAR_3, VAR_5,
        &VAR_6);
    break;
   case 132:
    VAR_9 = FUNC_2(VAR_3, VAR_4, VAR_5,
        &VAR_6);
    break;
   case 131:
    VAR_9 = FUNC_4(VAR_3, VAR_4, VAR_5,
        &VAR_6);
    break;
   case 129:
    VAR_9 = FUNC_3(VAR_3, VAR_4,
        &VAR_6);
    break;
   case 128:
    VAR_9 = FUNC_5(VAR_3, VAR_4,
        &VAR_6);
    break;
   case 134:

   case 130:

   default:

    return FUNC_0(VAR_3, VAR_6);
  }
 }

 if(VAR_9 != VAR_2) {

  return VAR_9;
 }

 return VAR_2;
}
