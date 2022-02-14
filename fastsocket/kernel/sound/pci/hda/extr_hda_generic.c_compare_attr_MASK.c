
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct automic_entry {scalar_t__ attr; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct automic_entry *VAR_2 = VAR_0;
 const struct automic_entry *VAR_3 = VAR_1;
 return (int)(VAR_2->attr - VAR_3->attr);
}
