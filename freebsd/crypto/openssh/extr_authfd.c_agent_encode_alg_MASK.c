
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sshkey {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static u_int
FUNC_1(const struct sshkey *VAR_3, const char *VAR_4)
{
 if (VAR_4 != ((void*)0) && VAR_3->type == VAR_0) {
  if (FUNC_0(VAR_4, "rsa-sha2-256") == 0)
   return VAR_1;
  else if (FUNC_0(VAR_4, "rsa-sha2-512") == 0)
   return VAR_2;
 }
 return 0;
}
