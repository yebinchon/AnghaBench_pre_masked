
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int method; } ;
struct TYPE_3__ {scalar_t__ service; } ;
struct rar5 {TYPE_2__ cstate; TYPE_1__ file; } ;
struct archive_read {int archive; } ;
typedef int int64_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*,int) ;
 int FUNC_1 (struct archive_read*,struct rar5*,void const**,size_t*,int *) ;
 int FUNC_2 (struct archive_read*) ;

__attribute__((used)) static int FUNC_3(struct archive_read* VAR_3, struct rar5* VAR_4,
    const void** VAR_5, size_t* VAR_6, int64_t* VAR_7)
{
 enum COMPRESSION_METHOD {
  STORE = 0, FASTEST = 1, FAST = 2, NORMAL = 3, GOOD = 4,
  BEST = 5
 };

 if(VAR_4->file.service > 0) {
  return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6, VAR_7);
 } else {
  switch(VAR_4->cstate.method) {
   case STORE:
    return FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6,
        VAR_7);
   case FASTEST:

   case FAST:

   case NORMAL:

   case GOOD:

   case BEST:
    return FUNC_2(VAR_3);
   default:
    FUNC_0(&VAR_3->archive,
        VAR_0,
        "Compression method not supported: 0x%x",
        VAR_4->cstate.method);

    return VAR_1;
  }
 }



 return VAR_2;

}
