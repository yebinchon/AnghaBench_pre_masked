
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int ;
struct sshbuf {int dummy; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct sshbuf*,char*) ;
 int FUNC_1 (struct sshbuf*,int ) ;
 int FUNC_2 (struct sshbuf*,int ) ;
 int FUNC_3 (struct sshbuf*) ;

int
FUNC_4(struct sshbuf *VAR_2, char *VAR_3[VAR_1])
{
 u_int VAR_4;
 int VAR_5;

 FUNC_3(VAR_2);





 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++) {
  if ((VAR_5 = FUNC_2(VAR_2, 0)) != 0)
   return VAR_5;
 }
 for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {
  if ((VAR_5 = FUNC_0(VAR_2, VAR_3[VAR_4])) != 0)
   return VAR_5;
 }
 if ((VAR_5 = FUNC_2(VAR_2, 0)) != 0 ||
     (VAR_5 = FUNC_1(VAR_2, 0)) != 0)
  return VAR_5;
 return 0;
}
