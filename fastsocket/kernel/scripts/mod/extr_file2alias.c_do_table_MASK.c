
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct module {char const* name; int dev_table_buf; } ;


 int FUNC_0 (int *,char*,char*) ;
 int FUNC_1 (char const*,char const*,unsigned long,unsigned long,void*) ;

__attribute__((used)) static void FUNC_2(void *VAR_0, unsigned long VAR_1,
       unsigned long VAR_2,
       const char *VAR_3,
       void *VAR_4,
       struct module *VAR_5)
{
 unsigned int VAR_6;
 char VAR_7[500];
 int (*VAR_8)(const char *, void *VAR_9, char *VAR_10) = VAR_4;

 FUNC_1(VAR_5->name, VAR_3, VAR_1, VAR_2, VAR_0);

 VAR_1 -= VAR_2;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6 += VAR_2) {
  if (VAR_8(VAR_5->name, VAR_0+VAR_6, VAR_7)) {
   FUNC_0(&VAR_5->dev_table_buf,
       "MODULE_ALIAS(\"%s\");\n", VAR_7);
  }
 }
}
