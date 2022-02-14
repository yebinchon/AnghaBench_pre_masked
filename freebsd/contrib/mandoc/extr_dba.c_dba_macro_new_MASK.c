
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct macro_entry {int pages; } ;
struct dba {int pages; int macros; } ;
typedef int int32_t ;


 int FUNC_0 (int const) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 struct macro_entry* FUNC_3 (int ,char const*,int) ;

void
FUNC_4(struct dba *VAR_0, int32_t VAR_1, const char *VAR_2,
    const int32_t *VAR_3)
{
 struct macro_entry *VAR_4;
 const int32_t *VAR_5;
 int32_t VAR_6;

 VAR_6 = 0;
 for (VAR_5 = VAR_3; *VAR_5; VAR_5++)
  VAR_6++;

 VAR_4 = FUNC_3(FUNC_2(VAR_0->macros, VAR_1), VAR_2, VAR_6);
 for (VAR_5 = VAR_3; *VAR_5; VAR_5++)
  FUNC_1(VAR_4->pages, FUNC_2(VAR_0->pages,
      FUNC_0(*VAR_5) / 5 / sizeof(*VAR_5) - 1));
}
