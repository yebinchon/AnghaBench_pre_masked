
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {int dummy; } ;


 int FUNC_0 (struct sshkey*) ;
 int FUNC_1 (struct sshkey*) ;
 int FUNC_2 (struct sshkey const*,struct sshkey**) ;
 scalar_t__ FUNC_3 (struct sshkey*) ;
 int FUNC_4 (struct sshkey*,int **,size_t*) ;

__attribute__((used)) static int
FUNC_5(const struct sshkey *VAR_0, u_char **VAR_1, size_t *VAR_2)
{
 struct sshkey *VAR_3;
 int VAR_4;

 if ((VAR_4 = FUNC_2(VAR_0, &VAR_3)) != 0)
  return VAR_4;
 if (FUNC_3(VAR_3)) {
  if ((VAR_4 = FUNC_0(VAR_3)) != 0) {
   FUNC_1(VAR_3);
   return VAR_4;
  }
 }
 VAR_4 = FUNC_4(VAR_3, VAR_1, VAR_2);
 FUNC_1(VAR_3);
 return VAR_4;
}
