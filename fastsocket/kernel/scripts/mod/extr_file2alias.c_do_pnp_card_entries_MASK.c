
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pnp_card_device_id {TYPE_1__* devs; } ;
struct module {int dev_table_buf; int name; } ;
typedef int acpi_id ;
struct TYPE_2__ {scalar_t__ id; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int *,char*,char const*) ;
 int FUNC_1 (int ,char*,unsigned long,unsigned long const,void*) ;
 int FUNC_2 (char const*,char const*) ;
 char FUNC_3 (char const) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, unsigned long VAR_2,
    struct module *VAR_3)
{
 const unsigned long VAR_4 = sizeof(struct pnp_card_device_id);
 const unsigned int VAR_5 = (VAR_2 / VAR_4)-1;
 const struct pnp_card_device_id *VAR_6 = VAR_1;
 unsigned int VAR_7;

 FUNC_1(VAR_3->name, "pnp", VAR_2, VAR_4, VAR_1);

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {
  unsigned int VAR_8;
  const struct pnp_card_device_id *VAR_9 = &VAR_6[VAR_7];

  for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
   const char *VAR_10 = (char *)VAR_9->devs[VAR_8].id;
   int VAR_11, VAR_12;
   int VAR_13 = 0;

   if (!VAR_10[0])
    break;


   for (VAR_11 = 0; VAR_11 < VAR_7 && !VAR_13; VAR_11++) {
    const struct pnp_card_device_id *VAR_14 = &VAR_6[VAR_11];

    for (VAR_12 = 0; VAR_12 < VAR_0; VAR_12++) {
     const char *VAR_15 = (char *)VAR_14->devs[VAR_12].id;

     if (!VAR_15[0])
      break;

     if (!FUNC_2(VAR_10, VAR_15)) {
      VAR_13 = 1;
      break;
     }
    }
   }


   if (!VAR_13) {
    char VAR_16[sizeof(VAR_9->devs[0].id)];
    int VAR_17;

    FUNC_0(&VAR_3->dev_table_buf,
        "MODULE_ALIAS(\"pnp:d%s*\");\n", VAR_10);


    for (VAR_17 = 0; VAR_17 < sizeof(VAR_16); VAR_17++)
     VAR_16[VAR_17] = FUNC_3(VAR_10[VAR_17]);
    FUNC_0(&VAR_3->dev_table_buf,
        "MODULE_ALIAS(\"acpi*:%s:*\");\n", VAR_16);
   }
  }
 }
}
