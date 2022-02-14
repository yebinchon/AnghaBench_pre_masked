
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct siba_erom {int io; } ;
struct siba_core_id {int dummy; } ;
struct siba_admatch {int am_base; int am_size; } ;
struct bhnd_core_match {int dummy; } ;
struct bhnd_core_info {int core_idx; int unit; } ;
typedef int bhnd_size_t ;
typedef int bhnd_port_type ;
typedef int bhnd_erom_t ;
typedef int bhnd_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (scalar_t__) ;
 int VAR_5 ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct siba_core_id*,int ,scalar_t__,scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct siba_core_id*,int ,scalar_t__,scalar_t__,scalar_t__*) ;
 int FUNC_6 (int *,int ,scalar_t__) ;
 int FUNC_7 (int *,int ,int ,struct siba_core_id*) ;
 int FUNC_8 (int *,struct bhnd_core_match const*,struct bhnd_core_info*) ;
 int FUNC_9 (struct siba_core_id*,int ,scalar_t__) ;
 int FUNC_10 (int,struct siba_admatch*) ;
 scalar_t__ FUNC_11 (struct siba_core_id*,int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_12(bhnd_erom_t *VAR_6, const struct bhnd_core_match *VAR_7,
    bhnd_port_type VAR_8, u_int VAR_9, u_int VAR_10, struct bhnd_core_info *VAR_11,
    bhnd_addr_t *VAR_12, bhnd_size_t *VAR_13)
{
 struct siba_erom *VAR_14;
 struct bhnd_core_info VAR_15;
 struct siba_core_id VAR_16;
 struct siba_admatch VAR_17;
 uint32_t VAR_18;
 u_int VAR_19;
 u_int VAR_20, VAR_21;

 int VAR_22;

 VAR_14 = (struct siba_erom *)VAR_6;


 if ((VAR_22 = FUNC_8(VAR_6, VAR_7, &VAR_15)))
  return (VAR_22);


 VAR_22 = FUNC_7(&VAR_14->io, VAR_15.core_idx, VAR_15.unit, &VAR_16);
 if (VAR_22)
  return (VAR_22);


 if (!FUNC_9(&VAR_16, VAR_8, VAR_9))
  return (VAR_3);


 if (VAR_10 >= FUNC_11(&VAR_16, VAR_8, VAR_9))
  return (VAR_3);



 VAR_22 = FUNC_5(&VAR_16, VAR_8, VAR_9, VAR_10, &VAR_21);
 if (!VAR_22) {
  bhnd_addr_t VAR_23;
  bhnd_addr_t VAR_24;
  bhnd_size_t VAR_25, VAR_26;

  VAR_25 = FUNC_0(VAR_21);
  VAR_26 = VAR_5;


  VAR_22 = FUNC_12(VAR_6, VAR_7, VAR_1,
      0, 0, ((void*)0), &VAR_23, &VAR_24);
  if (VAR_22)
   return (VAR_22);


  if (VAR_24 < VAR_26) {
   FUNC_2("%s%u.%u offset %ju exceeds %s0.0 size %ju\n",
       FUNC_1(VAR_8), VAR_9, VAR_10, VAR_25,
       FUNC_1(VAR_1), VAR_24);

   return (VAR_4);
  }

  if (VAR_0 - VAR_23 < VAR_25) {
   FUNC_2("%s%u.%u offset %ju would overflow %s0.0 addr "
       "%ju\n", FUNC_1(VAR_8), VAR_9, VAR_10,
       VAR_25, FUNC_1(VAR_1),
       VAR_23);

   return (VAR_4);
  }

  if (VAR_11 != ((void*)0))
   *VAR_11 = VAR_15;

  *VAR_12 = VAR_23 + VAR_25;
  *VAR_13 = VAR_26;
  return (0);
 }
 VAR_22 = FUNC_3(&VAR_16, VAR_8, VAR_9, VAR_10, &VAR_20);
 if (VAR_22)
  return (VAR_22);


 VAR_19 = FUNC_4(VAR_20);
 if (VAR_19 == 0) {
  FUNC_2("addrspace %u is unsupported", VAR_20);
  return (VAR_2);
 }


 VAR_18 = FUNC_6(&VAR_14->io, VAR_15.core_idx, VAR_19);

 if ((VAR_22 = FUNC_10(VAR_18, &VAR_17))) {
  FUNC_2("failed to decode address match register value 0x%x\n",
      VAR_18);
  return (VAR_22);
 }

 if (VAR_11 != ((void*)0))
  *VAR_11 = VAR_15;

 *VAR_12 = VAR_17.am_base;
 *VAR_13 = VAR_17.am_size;

 return (0);
}
