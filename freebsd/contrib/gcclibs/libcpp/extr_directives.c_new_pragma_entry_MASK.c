
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pragma_entry {struct pragma_entry* next; } ;
typedef int cpp_reader ;


 scalar_t__ FUNC_0 (int *,int) ;
 int FUNC_1 (struct pragma_entry*,int ,int) ;

__attribute__((used)) static struct pragma_entry *
FUNC_2 (cpp_reader *VAR_0, struct pragma_entry **VAR_1)
{
  struct pragma_entry *VAR_2;

  VAR_2 = (struct pragma_entry *)
    FUNC_0 (VAR_0, sizeof (struct pragma_entry));

  FUNC_1 (VAR_2, 0, sizeof (struct pragma_entry));
  VAR_2->next = *VAR_1;

  *VAR_1 = VAR_2;
  return VAR_2;
}
