
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct sshkey {scalar_t__ type; } ;
struct sshbuf {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,struct sshbuf*,struct sshbuf*) ;
 int FUNC_4 (struct sshbuf*) ;
 int FUNC_5 (struct sshbuf*,int *) ;
 struct sshbuf* FUNC_6 () ;
 int FUNC_7 (struct sshbuf*,int *,size_t) ;
 int FUNC_8 (struct sshbuf*,int ) ;
 int FUNC_9 (struct sshkey*,int **,size_t*) ;

int
FUNC_10(int VAR_4, struct sshkey *VAR_5)
{
 struct sshbuf *VAR_6;
 int VAR_7;
 u_char VAR_8, *VAR_9 = ((void*)0);
 size_t VAR_10;

 if ((VAR_6 = FUNC_6()) == ((void*)0))
  return VAR_2;

 if (VAR_5->type != VAR_0) {
  if ((VAR_7 = FUNC_9(VAR_5, &VAR_9, &VAR_10)) != 0)
   goto out;
  if ((VAR_7 = FUNC_8(VAR_6,
      VAR_1)) != 0 ||
      (VAR_7 = FUNC_7(VAR_6, VAR_9, VAR_10)) != 0)
   goto out;
 } else {
  VAR_7 = VAR_3;
  goto out;
 }
 if ((VAR_7 = FUNC_3(VAR_4, VAR_6, VAR_6)) != 0)
  goto out;
 if ((VAR_7 = FUNC_5(VAR_6, &VAR_8)) != 0)
  goto out;
 VAR_7 = FUNC_0(VAR_8);
 out:
 if (VAR_9 != ((void*)0)) {
  FUNC_1(VAR_9, VAR_10);
  FUNC_2(VAR_9);
 }
 FUNC_4(VAR_6);
 return VAR_7;
}
