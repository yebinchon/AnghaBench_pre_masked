
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
typedef int final ;
typedef int MD5_CTX ;


 int FUNC_0 (int*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int const*,int) ;
 int VAR_0 ;
 int FUNC_3 (char*,unsigned long,int) ;
 int FUNC_4 (int*,int ,int) ;
 char* FUNC_5 (char*,char const*) ;
 char* FUNC_6 (char*,char const*,int) ;
 int FUNC_7 (char const*) ;
 int FUNC_8 (char const*,char const*,int) ;

int
FUNC_9(const char *VAR_1, const char *VAR_2, char *VAR_3)
{
 MD5_CTX VAR_4,VAR_5;
 unsigned long VAR_6;
 int VAR_7, VAR_8;
 u_int VAR_9;
 u_char VAR_10[VAR_0];
 const char *VAR_11;
 static const char *VAR_12 = "$1$";


 if (!FUNC_8(VAR_2, VAR_12, FUNC_7(VAR_12)))
  VAR_2 += FUNC_7(VAR_12);


 for (VAR_11 = VAR_2; *VAR_11 && *VAR_11 != '$' && VAR_11 < VAR_2 + 8; VAR_11++)
  continue;


 VAR_7 = VAR_11 - VAR_2;

 FUNC_1(&VAR_4);


 FUNC_2(&VAR_4, (const u_char *)VAR_1, FUNC_7(VAR_1));


 FUNC_2(&VAR_4, (const u_char *)VAR_12, FUNC_7(VAR_12));


 FUNC_2(&VAR_4, (const u_char *)VAR_2, (u_int)VAR_7);


 FUNC_1(&VAR_5);
 FUNC_2(&VAR_5, (const u_char *)VAR_1, FUNC_7(VAR_1));
 FUNC_2(&VAR_5, (const u_char *)VAR_2, (u_int)VAR_7);
 FUNC_2(&VAR_5, (const u_char *)VAR_1, FUNC_7(VAR_1));
 FUNC_0(VAR_10, &VAR_5);
 for(VAR_8 = (int)FUNC_7(VAR_1); VAR_8 > 0; VAR_8 -= VAR_0)
  FUNC_2(&VAR_4, (const u_char *)VAR_10,
      (u_int)(VAR_8 > VAR_0 ? VAR_0 : VAR_8));


 FUNC_4(VAR_10, 0, sizeof(VAR_10));


 for (VAR_9 = FUNC_7(VAR_1); VAR_9; VAR_9 >>= 1)
  if(VAR_9 & 1)
      FUNC_2(&VAR_4, (const u_char *)VAR_10, 1);
  else
      FUNC_2(&VAR_4, (const u_char *)VAR_1, 1);


 VAR_3 = FUNC_5(VAR_3, VAR_12);
 VAR_3 = FUNC_6(VAR_3, VAR_2, (u_int)VAR_7);
 *VAR_3++ = '$';

 FUNC_0(VAR_10, &VAR_4);






 for(VAR_9 = 0; VAR_9 < 1000; VAR_9++) {
  FUNC_1(&VAR_5);
  if(VAR_9 & 1)
   FUNC_2(&VAR_5, (const u_char *)VAR_1, FUNC_7(VAR_1));
  else
   FUNC_2(&VAR_5, (const u_char *)VAR_10, VAR_0);

  if(VAR_9 % 3)
   FUNC_2(&VAR_5, (const u_char *)VAR_2, (u_int)VAR_7);

  if(VAR_9 % 7)
   FUNC_2(&VAR_5, (const u_char *)VAR_1, FUNC_7(VAR_1));

  if(VAR_9 & 1)
   FUNC_2(&VAR_5, (const u_char *)VAR_10, VAR_0);
  else
   FUNC_2(&VAR_5, (const u_char *)VAR_1, FUNC_7(VAR_1));
  FUNC_0(VAR_10, &VAR_5);
 }

 VAR_6 = (VAR_10[ 0]<<16) | (VAR_10[ 6]<<8) | VAR_10[12];
 FUNC_3(VAR_3, VAR_6, 4); VAR_3 += 4;
 VAR_6 = (VAR_10[ 1]<<16) | (VAR_10[ 7]<<8) | VAR_10[13];
 FUNC_3(VAR_3, VAR_6, 4); VAR_3 += 4;
 VAR_6 = (VAR_10[ 2]<<16) | (VAR_10[ 8]<<8) | VAR_10[14];
 FUNC_3(VAR_3, VAR_6, 4); VAR_3 += 4;
 VAR_6 = (VAR_10[ 3]<<16) | (VAR_10[ 9]<<8) | VAR_10[15];
 FUNC_3(VAR_3, VAR_6, 4); VAR_3 += 4;
 VAR_6 = (VAR_10[ 4]<<16) | (VAR_10[10]<<8) | VAR_10[ 5];
 FUNC_3(VAR_3, VAR_6, 4); VAR_3 += 4;
 VAR_6 = VAR_10[11];
 FUNC_3(VAR_3, VAR_6, 2); VAR_3 += 2;
 *VAR_3 = '\0';


 FUNC_4(VAR_10, 0, sizeof(VAR_10));

 return (0);
}
