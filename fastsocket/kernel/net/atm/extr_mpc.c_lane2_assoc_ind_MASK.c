
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
typedef int u8 ;
typedef int u32 ;
struct net_device {int name; } ;
struct mpoa_client {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int* FUNC_0 (struct mpoa_client*,int const*,int const*,int,int) ;
 int FUNC_1 (char*,...) ;
 struct mpoa_client* FUNC_2 (struct net_device*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int const*,struct mpoa_client*) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_5, const u8 *VAR_6,
       const u8 *VAR_7, u32 VAR_8)
{
 uint32_t VAR_9;
 uint8_t VAR_10, VAR_11, VAR_12;
 const uint8_t *VAR_13;
 struct mpoa_client *VAR_14;

 VAR_11 = VAR_12 = 0;
 FUNC_1("mpoa: (%s) lane2_assoc_ind: received TLV(s), ", VAR_5->name);
 FUNC_1("total length of all TLVs %d\n", VAR_8);
 VAR_14 = FUNC_2(VAR_5);
 if (VAR_14 == ((void*)0)) {
  FUNC_4("mpoa: (%s) lane2_assoc_ind: no mpc\n", VAR_5->name);
  return;
 }
 VAR_13 = VAR_7 + VAR_8;
 while (VAR_13 - VAR_7 >= 5) {
  VAR_9 = (VAR_7[0] << 24) | (VAR_7[1] << 16) | (VAR_7[2] << 8) | VAR_7[3];
  VAR_10 = VAR_7[4];
  VAR_7 += 5;
  FUNC_1("    type 0x%x length %02x\n", VAR_9, VAR_10);
  if (VAR_7 + VAR_10 > VAR_13) {
   FUNC_4("TLV value extends past its buffer, aborting parse\n");
   return;
  }

  if (VAR_9 == 0) {
   FUNC_4("mpoa: (%s) lane2_assoc_ind: TLV type was 0, returning\n", VAR_5->name);
   return;
  }

  if (VAR_9 != VAR_4) {
   VAR_7 += VAR_10;
   continue;
  }
  VAR_11 = *VAR_7++;
  VAR_12 = *VAR_7++;
  FUNC_1("mpoa: (%s) MPOA device type '%s', ", VAR_5->name, FUNC_3(VAR_11));
  if (VAR_11 == VAR_3 &&
      VAR_10 < (42 + VAR_12*VAR_0)) {
   FUNC_4("\nmpoa: (%s) lane2_assoc_ind: short MPOA Device Type TLV\n",
          VAR_5->name);
   continue;
  }
  if ((VAR_11 == VAR_2 || VAR_11 == VAR_1)
      && VAR_10 < 22 + VAR_12*VAR_0) {
   FUNC_4("\nmpoa: (%s) lane2_assoc_ind: short MPOA Device Type TLV\n",
    VAR_5->name);
   continue;
  }
  if (VAR_11 != VAR_2 && VAR_11 != VAR_3) {
   FUNC_1("ignoring non-MPS device\n");
   if (VAR_11 == VAR_1) VAR_7 += 20;
   continue;
  }
  if (VAR_12 == 0 && VAR_11 == VAR_3) {
   FUNC_4("\nmpoa: (%s) lane2_assoc_ind: MPS_AND_MPC has zero MACs\n", VAR_5->name);
   continue;
  }
  FUNC_1("this MPS has %d MAC addresses\n", VAR_12);


  FUNC_5(VAR_7, VAR_14);

  VAR_7 = FUNC_0(VAR_14, VAR_6, VAR_7, VAR_12, VAR_11);
  if (VAR_7 == ((void*)0)) return;
 }
 if (VAR_13 - VAR_7 != 0)
  FUNC_4("mpoa: (%s) lane2_assoc_ind: ignoring %Zd bytes of trailing TLV carbage\n",
         VAR_5->name, VAR_13 - VAR_7);
 return;
}
