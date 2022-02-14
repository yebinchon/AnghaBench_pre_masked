
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnp_device_id {scalar_t__ id; } ;
struct module {int dev_table_buf; int name; } ;
typedef int acpi_id ;


 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long const,void*) ;
 char FUNC_2 (char const) ;

__attribute__((used)) static void FUNC_3(void *VAR_0, unsigned long VAR_1,
    struct module *VAR_2)
{
 const unsigned long VAR_3 = sizeof(struct pnp_device_id);
 const unsigned int VAR_4 = (VAR_1 / VAR_3)-1;
 const struct pnp_device_id *VAR_5 = VAR_0;
 unsigned int VAR_6;

 FUNC_1(VAR_2->name, "pnp", VAR_1, VAR_3, VAR_0);

 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  const char *VAR_7 = (char *)VAR_5[VAR_6].id;
  char VAR_8[sizeof(VAR_5[0].id)];
  int VAR_9;

  FUNC_0(&VAR_2->dev_table_buf,
      "MODULE_ALIAS(\"pnp:d%s*\");\n", VAR_7);


  for (VAR_9 = 0; VAR_9 < sizeof(VAR_8); VAR_9++)
   VAR_8[VAR_9] = FUNC_2(VAR_7[VAR_9]);
  FUNC_0(&VAR_2->dev_table_buf,
      "MODULE_ALIAS(\"acpi*:%s:*\");\n", VAR_8);
 }
}
