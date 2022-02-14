
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uid_t ;
struct logininfo {unsigned int tv_sec; } ;


 scalar_t__ FUNC_0 (struct logininfo*,int const) ;

unsigned int
FUNC_1(const uid_t VAR_0)
{
 struct logininfo VAR_1;

 if (FUNC_0(&VAR_1, VAR_0))
  return (VAR_1.tv_sec);
 else
  return (0);
}
