
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void* uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct twl_vreg_softc {int sc_vreg_list; int sc_dev; } ;
struct twl_regulator_entry {char* name; int oid; int num_supp_voltages; int const* supp_voltages; int fixed_voltage; void* reg_off; void* sub_dev; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct twl_regulator_entry*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char const*,int,struct twl_vreg_softc*,int ,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int VAR_6 ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;
 int VAR_7 ;
 struct twl_regulator_entry* FUNC_5 (int,int ,int) ;
 int FUNC_6 (char*,char const*,int) ;
 int VAR_8 ;

__attribute__((used)) static struct twl_regulator_entry*
FUNC_7(struct twl_vreg_softc *VAR_9, const char *VAR_10,
 uint8_t VAR_11, uint8_t VAR_12, uint16_t VAR_13,
 const uint16_t *VAR_14, uint32_t VAR_15)
{
 struct sysctl_ctx_list *VAR_16 = FUNC_3(VAR_9->sc_dev);
 struct sysctl_oid *VAR_17 = FUNC_4(VAR_9->sc_dev);
 struct twl_regulator_entry *VAR_18;

 VAR_18 = FUNC_5(sizeof(struct twl_regulator_entry), VAR_2, VAR_3 | VAR_4);
 if (VAR_18 == ((void*)0))
  return (((void*)0));


 FUNC_6(VAR_18->name, VAR_10, VAR_6);
 VAR_18->name[VAR_6 - 1] = '\0';

 VAR_18->sub_dev = VAR_11;
 VAR_18->reg_off = VAR_12;

 VAR_18->fixed_voltage = VAR_13;

 VAR_18->supp_voltages = VAR_14;
 VAR_18->num_supp_voltages = VAR_15;



 VAR_18->oid = FUNC_1(VAR_16, FUNC_2(VAR_17), VAR_5, VAR_10,
     VAR_1 | VAR_0, VAR_9, 0,
     VAR_8, "I", "voltage regulator");


 FUNC_0(&VAR_9->sc_vreg_list, VAR_18, VAR_7);

 return (VAR_18);
}
