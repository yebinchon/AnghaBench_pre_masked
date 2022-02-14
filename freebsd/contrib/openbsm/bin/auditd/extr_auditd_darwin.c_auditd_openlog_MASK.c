
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int gid_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,char*,int ) ;
 int FUNC_3 (int ,int ,char*) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (char**,char*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_6 (char*) ;

void
FUNC_7(int VAR_8, gid_t VAR_9)
{
 uint32_t VAR_10 = 0;
 char *VAR_11 = ((void*)0);

 if (VAR_8)
  VAR_10 = VAR_4;

 VAR_6 = FUNC_2("auditd", "com.apple.auditd", VAR_10);
 VAR_7 = FUNC_1(VAR_5);
 if (VAR_8)
  FUNC_4(VAR_6,
      FUNC_0(VAR_2));
 else
  FUNC_4(VAR_6,
      FUNC_0(VAR_3));
}
