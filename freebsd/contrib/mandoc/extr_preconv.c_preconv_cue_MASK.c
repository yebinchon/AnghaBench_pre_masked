
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct buf {char* buf; size_t sz; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char,size_t) ;
 scalar_t__ FUNC_1 (char const*,char*,int) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

int
FUNC_3(const struct buf *VAR_2, size_t VAR_3)
{
 const char *VAR_4, *VAR_5, *VAR_6;
 size_t VAR_7, VAR_8;

 VAR_4 = VAR_2->buf + VAR_3;
 VAR_7 = VAR_2->sz - VAR_3;



 if (((void*)0) == (VAR_5 = FUNC_0(VAR_4, '\n', VAR_7)))
  VAR_5 = VAR_4 + VAR_7;



 if ((VAR_7 = (size_t)(VAR_5 - VAR_4)) < 10 ||
     FUNC_1(VAR_4, ".\\\" -*-", 7) || FUNC_1(VAR_5 - 3, "-*-", 3))
  return VAR_1 | VAR_0;



 VAR_4 += 7;
 VAR_7 -= 10;

 while (VAR_7 > 0) {
  while (VAR_7 > 0 && ' ' == *VAR_4) {
   VAR_4++;
   VAR_7--;
  }
  if (0 == VAR_7)
   break;



  if (((void*)0) == (VAR_6 = FUNC_0(VAR_4, ';', VAR_7)))
   VAR_6 = VAR_5 - 3;
  else
   VAR_6++;



  if ((VAR_8 = VAR_6 - VAR_4) < 7 ||
      FUNC_2(VAR_4, "coding:", 7)) {
   VAR_7 -= VAR_8;
   VAR_4 += VAR_8;
   continue;
  }

  VAR_7 -= 7;
  VAR_4 += 7;

  while (VAR_7 > 0 && ' ' == *VAR_4) {
   VAR_4++;
   VAR_7--;
  }
  if (0 == VAR_7)
   return 0;



  if (VAR_8 > 4 && !FUNC_2(VAR_4, "utf-8", 5))
   return VAR_1;
  if (VAR_8 > 10 && !FUNC_2(VAR_4, "iso-latin-1", 11))
   return VAR_0;
  return 0;
 }
 return VAR_1 | VAR_0;
}
