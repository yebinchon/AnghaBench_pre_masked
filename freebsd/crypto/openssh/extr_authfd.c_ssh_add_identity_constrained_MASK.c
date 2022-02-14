
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
typedef int u_char ;
struct sshkey {int type; } ;
struct sshbuf {int dummy; } ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct sshbuf*,int ,int ,int ) ;
 int FUNC_2 (int,struct sshbuf*,struct sshbuf*) ;
 int FUNC_3 (struct sshbuf*) ;
 int FUNC_4 (struct sshbuf*,int *) ;
 struct sshbuf* FUNC_5 () ;
 int FUNC_6 (struct sshbuf*,char const*) ;
 int FUNC_7 (struct sshbuf*,int ) ;
 int FUNC_8 (struct sshkey const*,struct sshbuf*,int ,int *) ;

int
FUNC_9(int VAR_4, const struct sshkey *VAR_5,
    const char *VAR_6, u_int VAR_7, u_int VAR_8, u_int VAR_9)
{
 struct sshbuf *VAR_10;
 int VAR_11, VAR_12 = (VAR_7 || VAR_8 || VAR_9);
 u_char VAR_13;

 if ((VAR_10 = FUNC_5()) == ((void*)0))
  return VAR_2;

 switch (VAR_5->type) {
 case 133:
 case 132:
 case 129:
 case 128:
  VAR_13 = VAR_12 ?
      VAR_1 :
      VAR_0;
  if ((VAR_11 = FUNC_7(VAR_10, VAR_13)) != 0 ||
      (VAR_11 = FUNC_8(VAR_5, VAR_10, VAR_9,
      ((void*)0))) != 0 ||
      (VAR_11 = FUNC_6(VAR_10, VAR_6)) != 0)
   goto out;
  break;
 default:
  VAR_11 = VAR_3;
  goto out;
 }
 if (VAR_12 &&
     (VAR_11 = FUNC_1(VAR_10, VAR_7, VAR_8, VAR_9)) != 0)
  goto out;
 if ((VAR_11 = FUNC_2(VAR_4, VAR_10, VAR_10)) != 0)
  goto out;
 if ((VAR_11 = FUNC_4(VAR_10, &VAR_13)) != 0)
  goto out;
 VAR_11 = FUNC_0(VAR_13);
 out:
 FUNC_3(VAR_10);
 return VAR_11;
}
