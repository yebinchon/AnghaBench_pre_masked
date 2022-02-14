
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct smbfns {int id; scalar_t__ name; } ;



__attribute__((used)) static const struct smbfns *
FUNC_0(int VAR_0, const struct smbfns *VAR_1)
{
    int VAR_2;

    for (VAR_2 = 0; VAR_1[VAR_2].name; VAR_2++)
 if (VAR_1[VAR_2].id == VAR_0)
     return(&VAR_1[VAR_2]);

    return(&VAR_1[0]);
}
