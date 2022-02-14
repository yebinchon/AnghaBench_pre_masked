
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct ucred {int gid; int uid; } ;
typedef int socklen_t ;
typedef int gid_t ;
typedef int cred ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,int ,int ,struct ucred*,int*) ;

int
FUNC_1(int VAR_2, uid_t *VAR_3, gid_t *VAR_4)
{
 struct ucred VAR_5;
 socklen_t VAR_6 = sizeof(VAR_5);

 if (FUNC_0(VAR_2, VAR_0, VAR_1, &VAR_5, &VAR_6) < 0)
  return (-1);
 *VAR_3 = VAR_5.uid;
 *VAR_4 = VAR_5.gid;

 return (0);
}
