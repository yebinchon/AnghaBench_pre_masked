
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {int dummy; } ;
struct sshbuf {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sshbuf*) ;
 struct sshbuf* FUNC_1 (int const*,size_t) ;
 int FUNC_2 (struct sshbuf*,struct sshkey**,int) ;

int
FUNC_3(const u_char *VAR_1, size_t VAR_2, struct sshkey **VAR_3)
{
 struct sshbuf *VAR_4;
 int VAR_5;

 if ((VAR_4 = FUNC_1(VAR_1, VAR_2)) == ((void*)0))
  return VAR_0;
 VAR_5 = FUNC_2(VAR_4, VAR_3, 1);
 FUNC_0(VAR_4);
 return VAR_5;
}
