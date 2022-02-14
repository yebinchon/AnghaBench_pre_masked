
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ u_int ;
struct TYPE_2__ {scalar_t__ ncores; } ;
struct siba_erom {TYPE_1__ io; } ;
struct siba_admatch {size_t am_base; size_t am_size; } ;
typedef int bhnd_erom_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (char*,size_t) ;
 scalar_t__ FUNC_4 (size_t) ;
 int FUNC_5 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_6 (int,struct siba_admatch*) ;

__attribute__((used)) static int
FUNC_7(bhnd_erom_t *VAR_6)
{
 struct siba_erom *VAR_7;
 int VAR_8;

 VAR_7 = (struct siba_erom *)VAR_6;


 for (u_int VAR_9 = 0; VAR_9 < VAR_7->io.ncores; VAR_9++) {
  uint32_t VAR_10, VAR_11;
  uint32_t VAR_12;

  VAR_10 = FUNC_5(&VAR_7->io, VAR_9,
      FUNC_0(VAR_4));
  VAR_11 = FUNC_5(&VAR_7->io, VAR_9,
      FUNC_0(VAR_5));

  FUNC_3("siba core %u:\n", VAR_9);
  FUNC_3("\tvendor:\t0x%04x\n", FUNC_2(VAR_10, VAR_1));
  FUNC_3("\tdevice:\t0x%04x\n", FUNC_2(VAR_10, VAR_0));
  FUNC_3("\trev:\t0x%04x\n", FUNC_1(VAR_10));
  FUNC_3("\tsbrev:\t0x%02x\n", FUNC_2(VAR_11, VAR_3));


  VAR_12 = FUNC_2(VAR_11, VAR_2);
  FUNC_3("\tnraddr\t0x%04x\n", VAR_12);

  for (size_t VAR_13 = 0; VAR_13 < VAR_12; VAR_13++) {
   struct siba_admatch VAR_14;
   uint32_t VAR_15;
   u_int VAR_16;


   VAR_16 = FUNC_4(VAR_13);
   if (VAR_16 == 0) {
    FUNC_3("addrspace %zu unsupported",
        VAR_13);
    break;
   }


   VAR_15 = FUNC_5(&VAR_7->io, VAR_9, VAR_16);
   if ((VAR_8 = FUNC_6(VAR_15, &VAR_14))) {
    FUNC_3("failed to decode address match "
        "register value 0x%x\n", VAR_15);
    continue;
   }

   FUNC_3("\taddrspace %zu\n", VAR_13);
   FUNC_3("\t\taddr: 0x%08x\n", VAR_14.am_base);
   FUNC_3("\t\tsize: 0x%08x\n", VAR_14.am_size);
  }
 }

 return (0);
}
