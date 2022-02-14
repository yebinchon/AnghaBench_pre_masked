
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int linebuf ;




 int FUNC_0 (int const*,int,int,int,unsigned char*,int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (char*,char const*,char const*,...) ;

void FUNC_3(const char *VAR_0, const char *VAR_1, int VAR_2,
   int VAR_3, int VAR_4,
   const void *VAR_5, size_t VAR_6, bool VAR_7)
{
 const u8 *VAR_8 = VAR_5;
 int VAR_9, VAR_10, VAR_11 = VAR_6;
 unsigned char VAR_12[200];

 if (VAR_3 != 16 && VAR_3 != 32)
  VAR_3 = 16;

 for (VAR_9 = 0; VAR_9 < VAR_6; VAR_9 += VAR_3) {
  VAR_10 = FUNC_1(VAR_11, VAR_3);
  VAR_11 -= VAR_3;
  FUNC_0(VAR_8 + VAR_9, VAR_10, VAR_3, VAR_4,
    VAR_12, sizeof(VAR_12), VAR_7);

  switch (VAR_2) {
  case 129:
   FUNC_2("%s%s%*p: %s\n", VAR_0, VAR_1,
    (int)(2 * sizeof(void *)), VAR_8 + VAR_9, VAR_12);
   break;
  case 128:
   FUNC_2("%s%s%.8x: %s\n", VAR_0, VAR_1, VAR_9, VAR_12);
   break;
  default:
   FUNC_2("%s%s%s\n", VAR_0, VAR_1, VAR_12);
   break;
  }
 }
}
