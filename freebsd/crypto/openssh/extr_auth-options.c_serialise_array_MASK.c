
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshbuf {int dummy; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct sshbuf*) ;
 struct sshbuf* FUNC_1 () ;
 int FUNC_2 (struct sshbuf*,char*) ;
 int FUNC_3 (struct sshbuf*,struct sshbuf*) ;
 int FUNC_4 (struct sshbuf*,size_t) ;

__attribute__((used)) static int
FUNC_5(struct sshbuf *VAR_3, char **VAR_4, size_t VAR_5)
{
 struct sshbuf *VAR_6;
 size_t VAR_7;
 int VAR_8;

 if (VAR_5 > VAR_0)
  return VAR_2;

 if ((VAR_6 = FUNC_1()) == ((void*)0)) {
  return VAR_1;
 }
 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  if ((VAR_8 = FUNC_2(VAR_6, VAR_4[VAR_7])) != 0) {
   FUNC_0(VAR_6);
   return VAR_8;
  }
 }
 if ((VAR_8 = FUNC_4(VAR_3, VAR_5)) != 0 ||
     (VAR_8 = FUNC_3(VAR_3, VAR_6)) != 0) {
  FUNC_0(VAR_6);
  return VAR_8;
 }

 return 0;
}
