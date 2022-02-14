
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sshbuf*,size_t) ;
 int FUNC_1 (struct sshbuf*) ;
 struct sshbuf* FUNC_2 (int const*,size_t) ;
 int FUNC_3 (struct sshbuf*,int const**,size_t*) ;
 int FUNC_4 (struct sshbuf*,struct sshbuf*) ;

int
FUNC_5(struct sshbuf *VAR_2, struct sshbuf **VAR_3)
{
 const u_char *VAR_4;
 size_t VAR_5;
 struct sshbuf *VAR_6;
 int VAR_7;

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0))
  return VAR_1;
 *VAR_3 = ((void*)0);
 if ((VAR_7 = FUNC_3(VAR_2, &VAR_4, &VAR_5)) != 0)
  return VAR_7;
 if ((VAR_6 = FUNC_2(VAR_4, VAR_5)) == ((void*)0))
  return VAR_0;
 if ((VAR_7 = FUNC_0(VAR_2, VAR_5 + 4)) != 0 ||
     (VAR_7 = FUNC_4(VAR_6, VAR_2)) != 0) {
  FUNC_1(VAR_6);
  return VAR_7;
 }
 *VAR_3 = VAR_6;
 return 0;
}
