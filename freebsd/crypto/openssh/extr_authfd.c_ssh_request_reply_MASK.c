
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int dummy; } ;
typedef int buf ;


 size_t VAR_0 ;
 size_t FUNC_0 (char*) ;
 int FUNC_1 (char*,size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_2 (int ,int,char*,size_t) ;
 int VAR_3 ;
 size_t FUNC_3 (struct sshbuf*) ;
 char* FUNC_4 (struct sshbuf*) ;
 int FUNC_5 (struct sshbuf*,char*,size_t) ;
 int FUNC_6 (struct sshbuf*) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(int VAR_5, struct sshbuf *VAR_6, struct sshbuf *VAR_7)
{
 int VAR_8;
 size_t VAR_9, VAR_10;
 char VAR_11[1024];


 VAR_10 = FUNC_3(VAR_6);
 FUNC_1(VAR_11, VAR_10);


 if (FUNC_2(VAR_4, VAR_5, VAR_11, 4) != 4 ||
     FUNC_2(VAR_4, VAR_5, FUNC_4(VAR_6),
     FUNC_3(VAR_6)) != FUNC_3(VAR_6))
  return VAR_1;




 if (FUNC_2(VAR_3, VAR_5, VAR_11, 4) != 4)
     return VAR_1;


 VAR_10 = FUNC_0(VAR_11);
 if (VAR_10 > VAR_0)
  return VAR_2;


 FUNC_6(VAR_7);
 while (VAR_10 > 0) {
  VAR_9 = VAR_10;
  if (VAR_9 > sizeof(VAR_11))
   VAR_9 = sizeof(VAR_11);
  if (FUNC_2(VAR_3, VAR_5, VAR_11, VAR_9) != VAR_9)
   return VAR_1;
  if ((VAR_8 = FUNC_5(VAR_7, VAR_11, VAR_9)) != 0)
   return VAR_8;
  VAR_10 -= VAR_9;
 }
 return 0;
}
