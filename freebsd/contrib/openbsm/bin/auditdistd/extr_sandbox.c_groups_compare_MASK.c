
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ gid_t ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 gid_t VAR_2 = *(const gid_t *)VAR_0;
 gid_t VAR_3 = *(const gid_t *)VAR_1;

 return (VAR_2 <= VAR_3 ? (VAR_2 < VAR_3 ? -1 : 0) : 1);

}
