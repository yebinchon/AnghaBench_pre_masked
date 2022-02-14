
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u_char ;


 scalar_t__ FUNC_0 (char) ;
 scalar_t__ FUNC_1 (char) ;

__attribute__((used)) static inline u_char
FUNC_2(u_char VAR_0)
{
 if (FUNC_0(VAR_0))
  return (u_char)(VAR_0 - '0');
 else if (FUNC_1(VAR_0))
  return (u_char)(VAR_0 - 'a' + 10);
 else
  return (u_char)(VAR_0 - 'A' + 10);
}
