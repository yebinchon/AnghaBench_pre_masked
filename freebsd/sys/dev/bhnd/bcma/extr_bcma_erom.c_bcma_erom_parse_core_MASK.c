
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
struct bcma_erom_core {void* num_swrap; void* num_mwrap; void* num_dport; void* num_mport; void* rev; void* device; void* vendor; } ;
struct bcma_erom {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 void* FUNC_1 (scalar_t__,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (struct bcma_erom*,char*,scalar_t__,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct bcma_erom*,scalar_t__*) ;

__attribute__((used)) static int
FUNC_5(struct bcma_erom *VAR_11, struct bcma_erom_core *VAR_12)
{
 uint32_t VAR_13;
 int VAR_14;


 if ((VAR_14 = FUNC_4(VAR_11, &VAR_13)))
  return (VAR_14);


 if (VAR_13 == VAR_0)
  return (VAR_10);

 if (!FUNC_0(VAR_13, VAR_1)) {
  FUNC_2(VAR_11, "Unexpected EROM entry 0x%x (type=%s)\n",
                   VAR_13, FUNC_3(VAR_13));

  return (VAR_9);
 }

 VAR_12->vendor = FUNC_1(VAR_13, VAR_2);
 VAR_12->device = FUNC_1(VAR_13, VAR_3);


 if ((VAR_14 = FUNC_4(VAR_11, &VAR_13)))
  return (VAR_14);

 if (!FUNC_0(VAR_13, VAR_1)) {
  return (VAR_9);
 }

 VAR_12->rev = FUNC_1(VAR_13, VAR_8);
 VAR_12->num_mport = FUNC_1(VAR_13, VAR_5);
 VAR_12->num_dport = FUNC_1(VAR_13, VAR_4);
 VAR_12->num_mwrap = FUNC_1(VAR_13, VAR_6);
 VAR_12->num_swrap = FUNC_1(VAR_13, VAR_7);

 return (0);
}
