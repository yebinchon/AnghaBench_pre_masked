
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
struct twl_clks_softc {int sc_clks_list; int sc_dev; } ;
struct twl_clk_entry {char* name; int oid; void* reg_off; void* sub_dev; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct twl_clk_entry*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char const*,int,struct twl_clks_softc*,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (struct twl_clks_softc*) ;
 int VAR_6 ;
 struct sysctl_ctx_list* FUNC_4 (int ) ;
 struct sysctl_oid* FUNC_5 (int ) ;
 int VAR_7 ;
 struct twl_clk_entry* FUNC_6 (int,int ,int) ;
 int FUNC_7 (char*,char const*,int) ;
 int VAR_8 ;

__attribute__((used)) static struct twl_clk_entry*
FUNC_8(struct twl_clks_softc *VAR_9, const char *VAR_10,
 uint8_t VAR_11, uint8_t VAR_12)
{
 struct sysctl_ctx_list *VAR_13 = FUNC_4(VAR_9->sc_dev);
 struct sysctl_oid *VAR_14 = FUNC_5(VAR_9->sc_dev);
 struct twl_clk_entry *VAR_15;

 FUNC_3(VAR_9);

 VAR_15 = FUNC_6(sizeof(struct twl_clk_entry), VAR_2, VAR_3 | VAR_4);
 if (VAR_15 == ((void*)0))
  return (((void*)0));


 FUNC_7(VAR_15->name, VAR_10, VAR_6);
 VAR_15->name[VAR_6 - 1] = '\0';

 VAR_15->sub_dev = VAR_11;
 VAR_15->reg_off = VAR_12;




 VAR_15->oid = FUNC_1(VAR_13, FUNC_2(VAR_14), VAR_5, VAR_10,
     VAR_1 | VAR_0, VAR_9, 0,
     VAR_8, "I", "external clock");


 FUNC_0(&VAR_9->sc_clks_list, VAR_15, VAR_7);

 return (VAR_15);
}
