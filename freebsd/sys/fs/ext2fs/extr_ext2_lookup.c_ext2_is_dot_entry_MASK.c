
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct componentname {int cn_namelen; char* cn_nameptr; } ;



__attribute__((used)) static int
FUNC_0(struct componentname *VAR_0)
{
 if (VAR_0->cn_namelen <= 2 && VAR_0->cn_nameptr[0] == '.' &&
     (VAR_0->cn_nameptr[1] == '.' || VAR_0->cn_nameptr[1] == '\0'))
  return (1);
 return (0);
}
