
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int archive; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (struct archive_read*,int,int*) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 int FUNC_2 (int *,int ,char*,int) ;
 scalar_t__ FUNC_3 (char const*,int) ;
 scalar_t__ FUNC_4 (char*,char const*,int) ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_4)
{
 const void *VAR_5;
 const char *VAR_6, *VAR_7;
 size_t VAR_8, VAR_9 = 0;
 ssize_t VAR_10;

 for (;;) {
  VAR_5 = FUNC_0(VAR_4, VAR_3, &VAR_10);
  if (VAR_5 == ((void*)0))
   return (VAR_0);
  VAR_6 = VAR_5;
  VAR_7 = VAR_6 + VAR_10;


  if (FUNC_4("07070", VAR_6, 5) == 0
      && (VAR_6[5] == '1' || VAR_6[5] == '2')
      && FUNC_3(VAR_6, VAR_3))
   return (VAR_1);





  while (VAR_6 + VAR_3 <= VAR_7) {
   switch (VAR_6[5]) {
   case '1':
   case '2':
    if (FUNC_4("07070", VAR_6, 5) == 0
        && FUNC_3(VAR_6, VAR_3)) {
     VAR_8 = VAR_6 - (const char *)VAR_5;
     FUNC_1(VAR_4, VAR_8);
     VAR_9 += VAR_8;
     if (VAR_9 > 0) {
      FUNC_2(&VAR_4->archive,
          0,
          "Skipped %d bytes before "
          "finding valid header",
          (int)VAR_9);
      return (VAR_2);
     }
     return (VAR_1);
    }
    VAR_6 += 2;
    break;
   case '0':
    VAR_6++;
    break;
   default:
    VAR_6 += 6;
    break;
   }
  }
  VAR_8 = VAR_6 - (const char *)VAR_5;
  FUNC_1(VAR_4, VAR_8);
  VAR_9 += VAR_8;
 }
}
