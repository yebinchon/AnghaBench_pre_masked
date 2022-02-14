
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char FUNC_0 (char) ;
 char FUNC_1 (char) ;
 char FUNC_2 (char) ;
 int FUNC_3 (char*,char,int) ;
 int FUNC_4 (char*,char*,...) ;
 int FUNC_5 (char*) ;

const char *
FUNC_6(char *VAR_0, int VAR_1, int VAR_2, char *VAR_3)
{
 static char VAR_4[8192];
 int VAR_5, VAR_6, VAR_7;
 static char VAR_8[] ="0123456789abcdef";
 char *VAR_9;




 if (!VAR_3)
  VAR_3 = VAR_4;
 if (VAR_2 <= 0 || VAR_2 > VAR_1)
  VAR_2 = VAR_1;
 VAR_9 = VAR_3;
 FUNC_4(VAR_9, "buf 0x%p len %d lim %d\n", VAR_0, VAR_1, VAR_2);
 VAR_9 += FUNC_5(VAR_9);

 for (VAR_5 = 0; VAR_5 < VAR_2; ) {
  FUNC_4(VAR_9, "%5d: ", VAR_5);
  VAR_9 += FUNC_5(VAR_9);
  FUNC_3(VAR_9, ' ', 48);
  VAR_7 = VAR_5;
  for (VAR_6=0; VAR_6 < 16 && VAR_5 < VAR_2; VAR_5++, VAR_6++) {
   VAR_9[VAR_6*3] = VAR_8[((VAR_0[VAR_5]) & 0xf0)>>4];
   VAR_9[VAR_6*3+1] = VAR_8[((VAR_0[VAR_5]) & 0xf)];
  }
  VAR_5 = VAR_7;
  for (VAR_6=0; VAR_6 < 16 && VAR_5 < VAR_2; VAR_5++, VAR_6++)
   VAR_9[VAR_6 + 48] = ((VAR_0[VAR_5]) >= 0x20 && (VAR_0[VAR_5]) <= 0x7e ? (VAR_0[VAR_5]) : '.');
  VAR_9[VAR_6+48] = '\n';
  VAR_9 += VAR_6+49;
 }
 *VAR_9 = '\0';



 return VAR_3;
}
