
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smack_known {char* smk_known; } ;


 struct smack_known* FUNC_0 (char const*,int) ;

char *FUNC_1(const char *VAR_0, int VAR_1)
{
 struct smack_known *VAR_2;


 if (VAR_0[0] == '-')
  return ((void*)0);
 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2 == ((void*)0))
  return ((void*)0);
 return VAR_2->smk_known;
}
