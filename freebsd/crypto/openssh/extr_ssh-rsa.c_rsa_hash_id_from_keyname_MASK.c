
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_3)
{
 int VAR_4;

 if ((VAR_4 = FUNC_0(VAR_3)) != -1)
  return VAR_4;
 if (FUNC_1(VAR_3, "ssh-rsa-cert-v01@openssh.com") == 0)
  return VAR_0;
 if (FUNC_1(VAR_3, "rsa-sha2-256-cert-v01@openssh.com") == 0)
  return VAR_1;
 if (FUNC_1(VAR_3, "rsa-sha2-512-cert-v01@openssh.com") == 0)
  return VAR_2;
 return -1;
}
