
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct stat {int st_mode; scalar_t__ st_size; } ;
struct sshbuf {int dummy; } ;
typedef scalar_t__ off_t ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 size_t FUNC_0 (int ,int,int *,int) ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 int VAR_9 ;
 scalar_t__ FUNC_3 (struct sshbuf*) ;
 int FUNC_4 (struct sshbuf*,int *,size_t) ;
 int FUNC_5 (struct sshbuf*) ;

int
FUNC_6(int VAR_10, struct sshbuf *VAR_11)
{
 u_char VAR_12[1024];
 size_t VAR_13;
 struct stat VAR_14;
 int VAR_15;

 if (FUNC_2(VAR_10, &VAR_14) < 0)
  return VAR_4;
 if ((VAR_14.st_mode & (VAR_7|VAR_5|VAR_6)) == 0 &&
     VAR_14.st_size > VAR_1)
  return VAR_3;
 for (;;) {
  if ((VAR_13 = FUNC_0(VAR_9, VAR_10, VAR_12, sizeof(VAR_12))) == 0) {
   if (VAR_8 == VAR_0)
    break;
   VAR_15 = VAR_4;
   goto out;
  }
  if ((VAR_15 = FUNC_4(VAR_11, VAR_12, VAR_13)) != 0)
   goto out;
  if (FUNC_3(VAR_11) > VAR_1) {
   VAR_15 = VAR_3;
   goto out;
  }
 }
 if ((VAR_14.st_mode & (VAR_7|VAR_5|VAR_6)) == 0 &&
     VAR_14.st_size != (off_t)FUNC_3(VAR_11)) {
  VAR_15 = VAR_2;
  goto out;
 }
 VAR_15 = 0;

 out:
 FUNC_1(VAR_12, sizeof(VAR_12));
 if (VAR_15 != 0)
  FUNC_5(VAR_11);
 return VAR_15;
}
