
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,char*,int*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(FILE *VAR_2, unsigned char *VAR_3)
{
 int VAR_4=0, VAR_5, VAR_6;

 while ((VAR_5=FUNC_2(VAR_2))!=VAR_0)
 {
  if (VAR_5 == ':')
  {
   int VAR_7, VAR_8;
   unsigned char VAR_9;
   int VAR_10;
   int VAR_11;

   if (FUNC_1(VAR_2, "%02x", &VAR_7) != 1)
      FUNC_0("File format error");
   VAR_9 = VAR_7;

   if (FUNC_1(VAR_2, "%04x", &VAR_10) != 1)
      FUNC_0("File format error");
   VAR_9 += VAR_10/256;
   VAR_9 += VAR_10%256;

   if (FUNC_1(VAR_2, "%02x", &VAR_11) != 1)
      FUNC_0("File format error");
   VAR_9 += VAR_11;

   if (VAR_11 != 0)
      continue;

   for (VAR_6=0;VAR_6<VAR_7;VAR_6++)
   {
    if (FUNC_1(VAR_2, "%02x", &VAR_5) != 1)
          FUNC_0("File format error");
    if (VAR_10 >= VAR_1)
       FUNC_0("File too large");
    VAR_3[VAR_10++] = VAR_5;
    if (VAR_10 > VAR_4)
       VAR_4 = VAR_10;
    VAR_9 += VAR_5;
   }

   if (FUNC_1(VAR_2, "%02x", &VAR_8) != 1)
      FUNC_0("File format error");

   VAR_9 = ~VAR_9 + 1;
   if (VAR_8 != VAR_9)
      FUNC_0("Line checksum error");
  }
 }

 return VAR_4;
}
