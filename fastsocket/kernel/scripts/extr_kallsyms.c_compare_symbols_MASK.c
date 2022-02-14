
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sym_entry {scalar_t__ addr; char* sym; int start_pos; } ;


 int FUNC_0 (struct sym_entry const*) ;
 int FUNC_1 (char const*) ;

__attribute__((used)) static int FUNC_2(const void *VAR_0, const void *VAR_1)
{
 const struct sym_entry *VAR_2;
 const struct sym_entry *VAR_3;
 int VAR_4, VAR_5;

 VAR_2 = VAR_0;
 VAR_3 = VAR_1;


 if (VAR_2->addr > VAR_3->addr)
  return 1;
 if (VAR_2->addr < VAR_3->addr)
  return -1;


 VAR_4 = (VAR_2->sym[0] == 'w') || (VAR_2->sym[0] == 'W');
 VAR_5 = (VAR_3->sym[0] == 'w') || (VAR_3->sym[0] == 'W');
 if (VAR_4 != VAR_5)
  return VAR_4 - VAR_5;


 VAR_4 = FUNC_0(VAR_2);
 VAR_5 = FUNC_0(VAR_3);
 if (VAR_4 != VAR_5)
  return VAR_4 - VAR_5;


 VAR_4 = FUNC_1((const char *)VAR_2->sym + 1);
 VAR_5 = FUNC_1((const char *)VAR_3->sym + 1);
 if (VAR_4 != VAR_5)
  return VAR_4 - VAR_5;


 return VAR_2->start_pos - VAR_3->start_pos;
}
