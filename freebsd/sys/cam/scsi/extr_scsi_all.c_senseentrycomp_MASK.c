
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sense_key_table_entry {int sense_key; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 int VAR_2;
 const struct sense_key_table_entry *VAR_3;

 VAR_2 = *((const int *)VAR_0);
 VAR_3 = (const struct sense_key_table_entry *)VAR_1;

 if (VAR_2 >= VAR_3->sense_key) {
  if (VAR_2 == VAR_3->sense_key)
   return (0);
  return (1);
 }
 return (-1);
}
