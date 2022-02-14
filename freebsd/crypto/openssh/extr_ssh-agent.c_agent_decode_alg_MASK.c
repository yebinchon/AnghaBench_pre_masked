
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sshkey {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static char *
FUNC_0(struct sshkey *VAR_3, u_int VAR_4)
{
 if (VAR_3->type == VAR_0) {
  if (VAR_4 & VAR_1)
   return "rsa-sha2-256";
  else if (VAR_4 & VAR_2)
   return "rsa-sha2-512";
 }
 return ((void*)0);
}
