
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itbl_field {struct itbl_field* next; } ;
struct itbl_entry {struct itbl_field* fields; } ;


 struct itbl_field* FUNC_0 (int ,int,int,unsigned long) ;
 int FUNC_1 (int) ;

struct itbl_field *
FUNC_2 (struct itbl_entry *VAR_0, int VAR_1, int VAR_2,
    int VAR_3, unsigned long VAR_4)
{
  struct itbl_field *VAR_5, **VAR_6;
  if (!VAR_0)
    return 0;

  VAR_5 = FUNC_0 (FUNC_1 (VAR_1), VAR_2, VAR_3, VAR_4);
  if (VAR_5)
    {
      VAR_6 = &VAR_0->fields;
      while (*VAR_6)
 VAR_6 = &(*VAR_6)->next;
      *VAR_6 = VAR_5;
      VAR_5->next = 0;
    }
  return VAR_5;
}
