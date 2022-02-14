
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read {int archive; TYPE_1__* format; } ;
struct _7zip {scalar_t__ seek_base; } ;
typedef scalar_t__ ssize_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 void* FUNC_0 (struct archive_read*,scalar_t__,scalar_t__*) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 scalar_t__ FUNC_2 (struct archive_read*,scalar_t__,int ) ;
 int FUNC_3 (int *,int ,char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_6, ssize_t VAR_7)
{
 const void *VAR_8;
 const char *VAR_9, *VAR_10;
 size_t VAR_11, VAR_12;
 ssize_t VAR_13, VAR_14;






 if (VAR_7 > VAR_5)
  FUNC_1(VAR_6, VAR_5);
 else if (FUNC_2(VAR_6, VAR_5, VAR_3) < 0)
  return (VAR_1);

 VAR_12 = 0;
 VAR_14 = 1;
 while (VAR_12 + VAR_14 <= VAR_4 - VAR_5) {
  VAR_8 = FUNC_0(VAR_6, VAR_14, &VAR_13);
  if (VAR_8 == ((void*)0)) {

   VAR_14 >>= 1;
   if (VAR_14 < 0x40)
    goto fatal;
   continue;
  }
  if (VAR_13 < 6) {

   VAR_14 = 4096;
   continue;
  }
  VAR_9 = (const char *)VAR_8;
  VAR_10 = VAR_9 + VAR_13;





  while (VAR_9 + 32 < VAR_10) {
   int VAR_15 = FUNC_4(VAR_9);
   if (VAR_15 == 0) {
    struct _7zip *VAR_16 =
        (struct _7zip *)VAR_6->format->data;
    VAR_11 = VAR_9 - (const char *)VAR_8;
    FUNC_1(VAR_6, VAR_11);
    VAR_16->seek_base = VAR_5 + VAR_12 + VAR_11;
    return (VAR_2);
   }
   VAR_9 += VAR_15;
  }
  VAR_11 = VAR_9 - (const char *)VAR_8;
  FUNC_1(VAR_6, VAR_11);
  VAR_12 += VAR_11;
  if (VAR_14 == 1)
   VAR_14 = 4096;
 }
fatal:
 FUNC_3(&VAR_6->archive, VAR_0,
     "Couldn't find out 7-Zip header");
 return (VAR_1);
}
