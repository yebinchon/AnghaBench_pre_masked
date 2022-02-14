
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_entry {int pages; } ;
struct dba_array {int dummy; } ;
typedef int int32_t ;


 int FUNC_0 (int ,struct dba_array*) ;
 int FUNC_1 (struct dba_array*,int ) ;
 struct macro_entry* FUNC_2 (int ,char const*,int) ;

void
FUNC_3(struct dba_array *VAR_0, int32_t VAR_1, const char *VAR_2,
    struct dba_array *VAR_3)
{
 struct macro_entry *VAR_4;

 if (*VAR_2 == '\0')
  return;
 VAR_4 = FUNC_2(FUNC_1(VAR_0, VAR_1), VAR_2, 1);
 FUNC_0(VAR_4->pages, VAR_3);
}
