
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int header ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*,int,char*,long,char const*) ;
 int FUNC_2 (char*) ;
 long FUNC_3 (char*,char**,int) ;
 int FUNC_4 (char*,...) ;

char *
FUNC_5(int *VAR_4, long *VAR_5)
{
 static char VAR_6[20];
 long VAR_7, VAR_8, VAR_9, VAR_10;
 char *VAR_11, *VAR_12;
 const char *VAR_13;





 VAR_13 = "";
 if ((VAR_12 = FUNC_0("BLOCKSIZE")) != ((void*)0) && *VAR_12 != '\0') {
  if ((VAR_7 = FUNC_3(VAR_12, &VAR_11, 10)) < 0)
   goto underflow;
  if (VAR_7 == 0)
   VAR_7 = 1;
  if (*VAR_11 && VAR_11[1])
   goto fmterr;
  switch (*VAR_11) {
  case 'G': case 'g':
   VAR_13 = "G";
   VAR_8 = (1024L * 1024L * 1024L) / (1024L * 1024L * 1024L);
   VAR_9 = (1024L * 1024L * 1024L);
   break;
  case 'K': case 'k':
   VAR_13 = "K";
   VAR_8 = (1024L * 1024L * 1024L) / (1024L);
   VAR_9 = (1024L);
   break;
  case 'M': case 'm':
   VAR_13 = "M";
   VAR_8 = (1024L * 1024L * 1024L) / (1024L * 1024L);
   VAR_9 = (1024L * 1024L);
   break;
  case '\0':
   VAR_8 = (1024L * 1024L * 1024L);
   VAR_9 = 1;
   break;
  default:
fmterr: FUNC_4("%s: unknown blocksize", VAR_12);
   VAR_7 = 512;
   VAR_8 = (1024L * 1024L * 1024L);
   VAR_9 = 1;
   break;
  }
  if (VAR_7 > VAR_8) {
   FUNC_4("maximum blocksize is %ldG", (1024L * 1024L * 1024L) / (1024L * 1024L * 1024L));
   VAR_7 = VAR_8;
  }
  if ((VAR_10 = VAR_7 * VAR_9) < 512) {
underflow: FUNC_4("minimum blocksize is 512");
   VAR_13 = "";
   VAR_10 = VAR_7 = 512;
  }
 } else
  VAR_10 = VAR_7 = 512;

 (void)FUNC_1(VAR_6, sizeof(VAR_6), "%ld%s-blocks", VAR_7, VAR_13);
 *VAR_4 = FUNC_2(VAR_6);
 *VAR_5 = VAR_10;
 return (VAR_6);
}
