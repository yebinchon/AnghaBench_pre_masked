
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct rar5 {int qlist_offset; int rr_offset; } ;
struct archive_read {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_read*,int*,int *) ;

__attribute__((used)) static int FUNC_1(struct archive_read* VAR_2,
    struct rar5* VAR_3)
{
 uint64_t VAR_4;

 if(!FUNC_0(VAR_2, &VAR_4, ((void*)0))) {
  return VAR_0;
 }

 enum LOCATOR_FLAGS {
  QLIST = 0x01, RECOVERY = 0x02,
 };

 if(VAR_4 & QLIST) {
  if(!FUNC_0(VAR_2, &VAR_3->qlist_offset, ((void*)0))) {
   return VAR_0;
  }


 }

 if(VAR_4 & RECOVERY) {
  if(!FUNC_0(VAR_2, &VAR_3->rr_offset, ((void*)0))) {
   return VAR_0;
  }


 }

 return VAR_1;
}
