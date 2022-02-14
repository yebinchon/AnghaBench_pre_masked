
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct zip {int hctx; scalar_t__ hctx_valid; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 void* FUNC_0 (struct archive_read*,int ,int *) ;
 int FUNC_1 (struct archive_read*,int ) ;
 int FUNC_2 (int *,int *,size_t*) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (int *,void const*,int ) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_6, const void *VAR_7)
{
 struct zip *VAR_8 = (struct zip *)(VAR_6->format->data);


 if (VAR_8->hctx_valid) {
  const void *VAR_9;
  uint8_t VAR_10[20];
  size_t VAR_11 = 20;
  int VAR_12;

  FUNC_2(&VAR_8->hctx, VAR_10, &VAR_11);
  if (VAR_7 == ((void*)0)) {

   VAR_9 = FUNC_0(VAR_6, VAR_5, ((void*)0));
   if (VAR_9 == ((void*)0)) {
    FUNC_3(&VAR_6->archive,
        VAR_0,
        "Truncated ZIP file data");
    return (VAR_2);
   }
  } else {
   VAR_9 = VAR_7;
  }
  VAR_12 = FUNC_4(VAR_10, VAR_9, VAR_5);
  FUNC_1(VAR_6, VAR_5);
  if (VAR_12 != 0) {
   FUNC_3(&VAR_6->archive,
       VAR_1,
       "ZIP bad Authentication code");
   return (VAR_4);
  }
 }
 return (VAR_3);
}
