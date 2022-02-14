
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
typedef int mode_t ;
typedef int gid_t ;


 scalar_t__ FUNC_0 (char const*,int ) ;
 scalar_t__ FUNC_1 (char const*,int ,int ) ;
 int VAR_0 ;
 int FUNC_2 (char*,char const*,char*) ;
 char* FUNC_3 (int ) ;

void
FUNC_4(const char *VAR_1)
{

 if (FUNC_1(VAR_1, (uid_t) 0, (gid_t) 0) < 0)
  FUNC_2("chown %.100s 0 0 failed: %.100s", VAR_1, FUNC_3(VAR_0));
 if (FUNC_0(VAR_1, (mode_t) 0666) < 0)
  FUNC_2("chmod %.100s 0666 failed: %.100s", VAR_1, FUNC_3(VAR_0));

}
