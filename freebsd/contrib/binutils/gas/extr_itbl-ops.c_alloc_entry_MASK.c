
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct itbl_entry {char* name; unsigned long value; struct itbl_entry* next; int type; int processor; } ;
typedef int e_type ;
typedef int e_processor ;


 struct itbl_entry** FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (struct itbl_entry*,int ,int) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static struct itbl_entry *
FUNC_4 (e_processor VAR_0, e_type VAR_1,
      char *VAR_2, unsigned long VAR_3)
{
  struct itbl_entry *VAR_4, **VAR_5;
  if (!VAR_2)
    return 0;
  VAR_4 = (struct itbl_entry *) FUNC_1 (sizeof (struct itbl_entry));
  if (VAR_4)
    {
      FUNC_2 (VAR_4, 0, sizeof (struct itbl_entry));
      VAR_4->name = (char *) FUNC_1 (sizeof (strlen (VAR_2)) + 1);
      if (VAR_4->name)
 FUNC_3 (VAR_4->name, VAR_2);
      VAR_4->processor = VAR_0;
      VAR_4->type = VAR_1;
      VAR_4->value = VAR_3;
      VAR_5 = FUNC_0 (VAR_4->processor, VAR_4->type);
      VAR_4->next = *VAR_5;
      *VAR_5 = VAR_4;
    }
  return VAR_4;
}
