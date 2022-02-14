
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int gid_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 () ;
 scalar_t__ FUNC_1 (char*,int ,int ) ;
 scalar_t__ FUNC_2 (int ,int ) ;
 int FUNC_3 (int,scalar_t__,char*,char*) ;
 scalar_t__ VAR_4 ;

int
FUNC_4(char *VAR_5, uid_t VAR_6, gid_t VAR_7)
{
 if (FUNC_1(VAR_5, VAR_6, VAR_7) < 0) {




  if (FUNC_2(VAR_1, VAR_2) == 0 || VAR_3 != VAR_0 || VAR_4 ||
      FUNC_0() == 0)
   FUNC_3(1, VAR_3, "Unable to set file uid/gid of %s",
       VAR_5);
  return(-1);
 }
 return(0);
}
