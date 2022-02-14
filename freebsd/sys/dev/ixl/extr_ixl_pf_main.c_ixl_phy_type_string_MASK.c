
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;



__attribute__((used)) static char *
FUNC_0(u32 VAR_0, bool VAR_1)
{
 static char * VAR_2[32] = {
  "SGMII",
  "1000BASE-KX",
  "10GBASE-KX4",
  "10GBASE-KR",
  "40GBASE-KR4",
  "XAUI",
  "XFI",
  "SFI",
  "XLAUI",
  "XLPPI",
  "40GBASE-CR4",
  "10GBASE-CR1",
  "SFP+ Active DA",
  "QSFP+ Active DA",
  "Reserved (14)",
  "Reserved (15)",
  "Reserved (16)",
  "100BASE-TX",
  "1000BASE-T",
  "10GBASE-T",
  "10GBASE-SR",
  "10GBASE-LR",
  "10GBASE-SFP+Cu",
  "10GBASE-CR1",
  "40GBASE-CR4",
  "40GBASE-SR4",
  "40GBASE-LR4",
  "1000BASE-SX",
  "1000BASE-LX",
  "1000BASE-T Optical",
  "20GBASE-KR2",
  "Reserved (31)"
 };
 static char * VAR_3[8] = {
  "25GBASE-KR",
  "25GBASE-CR",
  "25GBASE-SR",
  "25GBASE-LR",
  "25GBASE-AOC",
  "25GBASE-ACC",
  "Reserved (6)",
  "Reserved (7)"
 };

 if (VAR_1 && VAR_0 > 7) return "Invalid_Ext";
 if (VAR_0 > 31) return "Invalid";

 return (VAR_1) ? VAR_3[VAR_0] : VAR_2[VAR_0];
}
