
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {void* archive_format; } ;
struct archive_read {TYPE_1__ archive; } ;
typedef int ssize_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct archive_read*,int,int*) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 int FUNC_2 (TYPE_1__*,int ,char*,int) ;
 scalar_t__ FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (char const*,int) ;
 scalar_t__ FUNC_5 (char*,char const*,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_6(struct archive_read *VAR_5)
{
 const void *VAR_6;
 const char *VAR_7, *VAR_8;
 size_t VAR_9, VAR_10 = 0;
 ssize_t VAR_11;

 for (;;) {
  VAR_6 = FUNC_0(VAR_5, VAR_4, &VAR_11);
  if (VAR_6 == ((void*)0))
   return (VAR_0);
  VAR_7 = VAR_6;
  VAR_8 = VAR_7 + VAR_11;


  if (FUNC_5("070707", VAR_7, 6) == 0 && FUNC_4(VAR_7, VAR_4))
   return (VAR_2);
  if (FUNC_5("070727", VAR_7, 6) == 0 && FUNC_3(VAR_7, VAR_11)) {
   VAR_5->archive.archive_format = VAR_1;
   return (VAR_2);
  }





  while (VAR_7 + VAR_4 <= VAR_8) {
   switch (VAR_7[5]) {
   case '7':
    if ((FUNC_5("070707", VAR_7, 6) == 0
        && FUNC_4(VAR_7, VAR_4))
        || (FUNC_5("070727", VAR_7, 6) == 0
            && FUNC_3(VAR_7, VAR_8 - VAR_7))) {
     VAR_9 = VAR_7 - (const char *)VAR_6;
     FUNC_1(VAR_5, VAR_9);
     VAR_10 += VAR_9;
     if (VAR_7[4] == '2')
      VAR_5->archive.archive_format =
          VAR_1;
     if (VAR_10 > 0) {
      FUNC_2(&VAR_5->archive,
          0,
          "Skipped %d bytes before "
          "finding valid header",
          (int)VAR_10);
      return (VAR_3);
     }
     return (VAR_2);
    }
    VAR_7 += 2;
    break;
   case '0':
    VAR_7++;
    break;
   default:
    VAR_7 += 6;
    break;
   }
  }
  VAR_9 = VAR_7 - (const char *)VAR_6;
  FUNC_1(VAR_5, VAR_9);
  VAR_10 += VAR_9;
 }
}
