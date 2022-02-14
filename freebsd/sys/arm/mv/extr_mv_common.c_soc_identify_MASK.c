
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(uint32_t VAR_9, uint32_t VAR_10)
{
 uint32_t VAR_11, VAR_12, VAR_13;
 const char *VAR_14;
 const char *VAR_15;

 FUNC_2("SOC: ");
 if (VAR_8)
  FUNC_2("(0x%4x:0x%02x) ", VAR_9, VAR_10);

 VAR_15 = "";
 switch (VAR_9) {
 case 144:
  VAR_14 = "Marvell 88F5181";
  if (VAR_10 == 3)
   VAR_15 = "B1";
  break;
 case 143:
  VAR_14 = "Marvell 88F5182";
  if (VAR_10 == 2)
   VAR_15 = "A2";
  break;
 case 142:
  VAR_14 = "Marvell 88F5281";
  if (VAR_10 == 4)
   VAR_15 = "D0";
  else if (VAR_10 == 5)
   VAR_15 = "D1";
  else if (VAR_10 == 6)
   VAR_15 = "D2";
  break;
 case 141:
  VAR_14 = "Marvell 88F6281";
  if (VAR_10 == 0)
   VAR_15 = "Z0";
  else if (VAR_10 == 2)
   VAR_15 = "A0";
  else if (VAR_10 == 3)
   VAR_15 = "A1";
  break;
 case 135:
  VAR_14 = "Marvell 88RC8180";
  break;
 case 134:
  VAR_14 = "Marvell 88RC9480";
  break;
 case 133:
  VAR_14 = "Marvell 88RC9580";
  break;
 case 139:
  VAR_14 = "Marvell 88F6781";
  if (VAR_10 == 2)
   VAR_15 = "Y0";
  break;
 case 140:
  VAR_14 = "Marvell 88F6282";
  if (VAR_10 == 0)
   VAR_15 = "A0";
  else if (VAR_10 == 1)
   VAR_15 = "A1";
  break;
 case 136:
  VAR_14 = "Marvell 88F6828";
  break;
 case 137:
  VAR_14 = "Marvell 88F6820";
  break;
 case 138:
  VAR_14 = "Marvell 88F6810";
  break;
 case 131:
  VAR_14 = "Marvell MV78100 Z0";
  break;
 case 132:
  VAR_14 = "Marvell MV78100";
  break;
 case 130:
  VAR_14 = "Marvell MV78160";
  break;
 case 129:
  VAR_14 = "Marvell MV78260";
  break;
 case 128:
  VAR_14 = "Marvell MV78460";
  break;
 default:
  VAR_14 = "UNKNOWN";
  break;
 }

 FUNC_2("%s", VAR_14);
 if (*VAR_15 != '\0')
  FUNC_2(" rev %s", VAR_15);
 FUNC_2(", TClock %dMHz", FUNC_1() / 1000 / 1000);
 VAR_13 = FUNC_0();
 if (VAR_13 != 0)
  FUNC_2(", Frequency %dMHz", VAR_13 / 1000 / 1000);
 FUNC_2("\n");

 VAR_12 = FUNC_3(VAR_0);
 FUNC_2("  Instruction cache prefetch %s, data cache prefetch %s\n",
     (VAR_12 & VAR_2) ? "enabled" : "disabled",
     (VAR_12 & VAR_1) ? "enabled" : "disabled");

 switch (VAR_9) {
 case 141:
 case 140:
  VAR_12 = FUNC_3(VAR_6) & VAR_7;
  FUNC_2("  256KB 4-way set-associative %s unified L2 cache\n",
      VAR_12 ? "write-through" : "write-back");
  break;
 case 132:
  VAR_12 = FUNC_3(VAR_3);
  VAR_11 = VAR_12 & VAR_5;
  VAR_12 = VAR_12 & VAR_4;
  FUNC_2("  %s set-associative %s unified L2 cache\n",
      VAR_11 ? "256KB 4-way" : "512KB 8-way",
      VAR_12 ? "write-through" : "write-back");
  break;
 default:
  break;
 }
}
