
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cred {char* security; } ;


 int VAR_0 ;
 char* FUNC_0 (int ) ;

__attribute__((used)) static int FUNC_1(struct cred *VAR_1, u32 VAR_2)
{
 char *VAR_3 = FUNC_0(VAR_2);

 if (VAR_3 == ((void*)0))
  return -VAR_0;

 VAR_1->security = VAR_3;
 return 0;
}
