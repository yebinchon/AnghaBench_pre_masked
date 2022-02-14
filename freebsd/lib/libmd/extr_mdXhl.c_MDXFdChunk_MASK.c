
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef scalar_t__ off_t ;
typedef int buffer ;
typedef int MDX_CTX ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (int *,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 (int,scalar_t__,int ) ;
 int FUNC_4 (int,unsigned char*,scalar_t__) ;

char *
FUNC_5(int VAR_3, char *VAR_4, off_t VAR_5, off_t VAR_6)
{
 unsigned char VAR_7[16*1024];
 MDX_CTX VAR_8;
 struct stat VAR_9;
 int VAR_10, VAR_11;
 off_t VAR_12;

 if (VAR_6 < 0) {
  VAR_2 = VAR_0;
  return ((void*)0);
 }

 FUNC_1(&VAR_8);
 if (VAR_5 != 0) {
  VAR_2 = 0;
  if (FUNC_3(VAR_3, VAR_5, VAR_1) != VAR_5 ||
      (VAR_5 == -1 && VAR_2 != 0)) {
   VAR_10 = -1;
   goto error;
  }
 }
 VAR_12 = VAR_6;
 VAR_10 = 0;
 while (VAR_6 == 0 || VAR_12 > 0) {
  if (VAR_6 == 0 || VAR_12 > sizeof(VAR_7))
   VAR_10 = FUNC_4(VAR_3, VAR_7, sizeof(VAR_7));
  else
   VAR_10 = FUNC_4(VAR_3, VAR_7, VAR_12);
  if (VAR_10 <= 0)
   break;
  FUNC_2(&VAR_8, VAR_7, VAR_10);
  VAR_12 -= VAR_10;
 }
error:
 if (VAR_10 < 0)
  return ((void*)0);
 return (FUNC_0(&VAR_8, VAR_4));
}
