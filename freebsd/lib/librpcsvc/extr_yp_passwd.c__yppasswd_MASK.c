
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xdrproc_t ;
struct x_passwd {int dummy; } ;
struct yppasswd {char* oldpass; struct x_passwd newpw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int ,int ,int ,char*,int ,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,int ,int ,int ) ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_3 (char**) ;
 scalar_t__ FUNC_4 (char*,char*,char**) ;

int
FUNC_5(char *VAR_7, struct x_passwd *VAR_8)
{
 char *VAR_9;
 char *VAR_10;
 int VAR_11, VAR_12;
 struct yppasswd VAR_13;

 VAR_13.newpw = *VAR_8;
 VAR_13.oldpass = VAR_7;

 if (FUNC_3(&VAR_10))
  return (-1);

 if (FUNC_4(VAR_10, "passwd.byname", &VAR_9))
  return(-1);

 VAR_11 = FUNC_2(VAR_9, VAR_3,
    VAR_2, VAR_1);

 if (VAR_11 == 0 || VAR_11 >= VAR_0) {
  FUNC_1(VAR_9);
  return(-1);
 }

 VAR_11 = FUNC_0(VAR_9, VAR_3, VAR_4, VAR_2,
         (xdrproc_t)VAR_6, (char *)&VAR_13,
         (xdrproc_t)VAR_5, (char *)&VAR_12);

 FUNC_1(VAR_9);
 if (VAR_11 || VAR_12)
  return(-1);
 else
  return(0);
}
