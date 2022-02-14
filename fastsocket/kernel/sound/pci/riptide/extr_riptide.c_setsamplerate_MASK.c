
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union cmdret {int* retwords; } ;
typedef int u32 ;
struct cmdif {int dummy; } ;


 union cmdret VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cmdif*,unsigned char,union cmdret*) ;
 int FUNC_1 (struct cmdif*,unsigned char,int,int,int) ;
 int FUNC_2 (char*,unsigned char,unsigned int,...) ;

__attribute__((used)) static int
FUNC_3(struct cmdif *VAR_3, unsigned char *VAR_4, unsigned int VAR_5)
{
 u32 VAR_6, VAR_7, VAR_8;
 union cmdret VAR_9 = VAR_0;
 int VAR_10;

 FUNC_2("setsamplerate intdec: %d,%d rate: %d\n", VAR_4[0],
      VAR_4[1], VAR_5);
 VAR_6 = 48000;
 VAR_7 = ((VAR_5 == 48000) ? 47999 : VAR_5) * 65536;
 VAR_8 = VAR_7 % VAR_6;
 VAR_7 /= VAR_6;
 for (VAR_10 = 0; VAR_10 < 2; VAR_10++) {
  if (*VAR_4 != 0xff) {
   do {
    FUNC_1(VAR_3, *VAR_4, VAR_6, VAR_7, VAR_8);
    FUNC_0(VAR_3, *VAR_4, &VAR_9);
   } while (VAR_9.retwords[1] != VAR_6 &&
     VAR_9.retwords[2] != VAR_7 &&
     VAR_9.retwords[3] != VAR_8 &&
     VAR_10++ < VAR_2);
   if (VAR_10 == VAR_2) {
    FUNC_2("sent samplerate %d: %d failed\n",
         *VAR_4, VAR_5);
    return -VAR_1;
   }
  }
  VAR_4++;
 }
 return 0;
}
