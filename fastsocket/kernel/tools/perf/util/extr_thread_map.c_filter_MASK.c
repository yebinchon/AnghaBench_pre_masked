
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {char* d_name; } ;



__attribute__((used)) static int FUNC_0(const struct dirent *VAR_0)
{
 if (VAR_0->d_name[0] == '.')
  return 0;
 else
  return 1;
}
