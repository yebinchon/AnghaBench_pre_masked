
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xuc ;
typedef int uid_t ;
struct xucred {scalar_t__ cr_version; int cr_gid; int cr_uid; } ;
typedef int socklen_t ;
typedef int gid_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int,int ,int ,struct xucred*,int*) ;
 int VAR_3 ;

int
FUNC_1(int VAR_4, uid_t *VAR_5, gid_t *VAR_6)
{
 struct xucred VAR_7;
 socklen_t VAR_8;
 int VAR_9;

 VAR_8 = sizeof(VAR_7);
 VAR_9 = FUNC_0(VAR_4, 0, VAR_1, &VAR_7, &VAR_8);
 if (VAR_9 != 0)
  return (VAR_9);
 if (VAR_7.cr_version != VAR_2) {
  VAR_3 = VAR_0;
  return (-1);
 }
 *VAR_5 = VAR_7.cr_uid;
 *VAR_6 = VAR_7.cr_gid;
 return (0);
}
