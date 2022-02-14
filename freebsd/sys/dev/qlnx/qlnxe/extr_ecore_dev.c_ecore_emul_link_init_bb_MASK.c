
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u64 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int port_id; int p_dev; } ;


 int FUNC_0 (int ,char*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int ,int,int,int) ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_10,
        struct ecore_ptt *VAR_11)
{
 u8 VAR_12 = 0, VAR_13 = VAR_10->port_id * 2;

 FUNC_0(VAR_10->p_dev, "Configurating Emulation Link %02x\n", VAR_13);

 FUNC_1(VAR_10, VAR_11, VAR_9,
    (0x4 << 4) | 0x4, 1, VAR_13);
 FUNC_1(VAR_10, VAR_11, VAR_8, 0, 1, VAR_13);
 FUNC_1(VAR_10, VAR_11, VAR_0,
    0x40, 0, VAR_13);
 FUNC_1(VAR_10, VAR_11, VAR_1,
    0x40, 0, VAR_13);
 FUNC_1(VAR_10, VAR_11, VAR_4,
    0x3fff, 0, VAR_13);
 FUNC_1(VAR_10, VAR_11, VAR_5,
    0x01000000800ULL | (0xa << 12) | ((u64)1 << 38),
    0, VAR_13);
 FUNC_1(VAR_10, VAR_11, VAR_2,
    0x7c000, 0, VAR_13);
 FUNC_1(VAR_10, VAR_11, VAR_3,
    0x30ffffc000ULL, 0, VAR_13);
 FUNC_1(VAR_10, VAR_11, VAR_0, 0x3 | (VAR_12 << 2),
    0, VAR_13);
 FUNC_1(VAR_10, VAR_11, VAR_0, 0x1003 | (VAR_12 << 2),
    0, VAR_13);
 FUNC_1(VAR_10, VAR_11, VAR_7,
    1, 0, VAR_13);
 FUNC_1(VAR_10, VAR_11, VAR_6,
    0xf, 1, VAR_13);
}
