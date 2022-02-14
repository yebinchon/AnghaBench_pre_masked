
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshkey {int dummy; } ;



 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*,struct sshkey*) ;
 int FUNC_1 (struct sshkey*,char const*,int ,int) ;

int
FUNC_2(struct sshkey *VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3, VAR_2);

 if (VAR_4 != VAR_1)
  return VAR_4;





 switch ((VAR_4 = FUNC_1(VAR_2, VAR_3, 0, 1))) {
 case 0:

  return VAR_0;
 case 128:

  return 0;
 default:

  return VAR_4;
 }
}
