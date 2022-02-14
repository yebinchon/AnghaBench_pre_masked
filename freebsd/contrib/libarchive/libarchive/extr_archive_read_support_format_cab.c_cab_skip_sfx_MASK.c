
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int archive; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct archive_read*,int,int*) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_3)
{
 const char *VAR_4, *VAR_5;
 size_t VAR_6;
 ssize_t VAR_7, VAR_8;

 VAR_8 = 4096;
 for (;;) {
  const char *VAR_9 = FUNC_0(VAR_3, VAR_8, &VAR_7);
  if (VAR_9 == ((void*)0)) {

   VAR_8 >>= 1;
   if (VAR_8 < 128) {
    FUNC_2(&VAR_3->archive,
        VAR_0,
        "Couldn't find out CAB header");
    return (VAR_1);
   }
   continue;
  }
  VAR_4 = VAR_9;
  VAR_5 = VAR_4 + VAR_7;





  while (VAR_4 + 8 < VAR_5) {
   int VAR_10;
   if ((VAR_10 = FUNC_3(VAR_4)) == 0) {
    VAR_6 = VAR_4 - VAR_9;
    FUNC_1(VAR_3, VAR_6);
    return (VAR_2);
   }
   VAR_4 += VAR_10;
  }
  VAR_6 = VAR_4 - VAR_9;
  FUNC_1(VAR_3, VAR_6);
 }
}
