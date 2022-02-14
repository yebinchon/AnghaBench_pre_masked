
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_read {int archive; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (struct archive_read*,int,int*) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 int FUNC_2 (int *,int ,char*) ;
 size_t FUNC_3 (char const*) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_4)
{
 const void *VAR_5;
 const char *VAR_6, *VAR_7;
 size_t VAR_8, VAR_9;
 ssize_t VAR_10, VAR_11;

 VAR_11 = 4096;
 for (;;) {
  VAR_5 = FUNC_0(VAR_4, VAR_11, &VAR_10);
  if (VAR_5 == ((void*)0)) {

   VAR_11 >>= 1;
   if (VAR_11 < (VAR_3 + 3))
    goto fatal;
   continue;
  }
  if (VAR_10 < VAR_3)
   goto fatal;
  VAR_6 = VAR_5;
  VAR_7 = VAR_6 + VAR_10;





  while (VAR_6 + VAR_3 < VAR_7) {
   if ((VAR_8 = FUNC_3(VAR_6)) == 0) {
    VAR_9 = VAR_6 - (const char *)VAR_5;
    FUNC_1(VAR_4, VAR_9);
    return (VAR_2);
   }
   VAR_6 += VAR_8;
  }
  VAR_9 = VAR_6 - (const char *)VAR_5;
  FUNC_1(VAR_4, VAR_9);
 }
fatal:
 FUNC_2(&VAR_4->archive, VAR_0,
     "Couldn't find out LHa header");
 return (VAR_1);
}
