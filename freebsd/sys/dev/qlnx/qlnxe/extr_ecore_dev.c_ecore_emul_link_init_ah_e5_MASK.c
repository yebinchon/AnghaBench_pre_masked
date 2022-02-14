
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int port_id; int p_dev; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_18,
           struct ecore_ptt *VAR_19)
{
 u8 VAR_20 = VAR_18->port_id;
 u32 VAR_21 = VAR_16 + (VAR_20 << 2) * VAR_17;

 FUNC_0(VAR_18->p_dev, "Configurating Emulation Link %02x\n", VAR_20);

 FUNC_1(VAR_18, VAR_19, VAR_0 + (VAR_20 << 2),
   (1 << VAR_1) |
   (VAR_20 <<
    VAR_2) |
   (0 << VAR_3));

 FUNC_1(VAR_18, VAR_19, VAR_21 + VAR_14,
   1 << VAR_15);

 FUNC_1(VAR_18, VAR_19, VAR_21 + VAR_6,
   9018 << VAR_5);

 FUNC_1(VAR_18, VAR_19, VAR_21 + VAR_12,
   0xc << VAR_13);

 FUNC_1(VAR_18, VAR_19, VAR_21 + VAR_7,
   8 << VAR_8);

 FUNC_1(VAR_18, VAR_19, VAR_21 + VAR_9,
   (0xA <<
    VAR_10) |
   (8 <<
    VAR_11));

 FUNC_1(VAR_18, VAR_19, VAR_21 + VAR_4,
   0xa853);
}
