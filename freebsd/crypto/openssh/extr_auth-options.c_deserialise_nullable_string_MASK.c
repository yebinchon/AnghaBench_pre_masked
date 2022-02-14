
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_char ;
struct sshbuf {int dummy; } ;


 int FUNC_0 (struct sshbuf*,char**,int *) ;
 int FUNC_1 (struct sshbuf*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_2(struct sshbuf *VAR_0, char **VAR_1)
{
 int VAR_2;
 u_char VAR_3;

 *VAR_1 = ((void*)0);
 if ((VAR_2 = FUNC_1(VAR_0, &VAR_3)) != 0 ||
     (VAR_2 = FUNC_0(VAR_0, VAR_3 ? ((void*)0) : VAR_1, ((void*)0))) != 0)
  return VAR_2;
 return 0;
}
