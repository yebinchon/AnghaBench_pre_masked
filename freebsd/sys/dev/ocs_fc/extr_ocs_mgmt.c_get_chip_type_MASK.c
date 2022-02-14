
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int result_buf ;
typedef int ocs_textbuf_t ;
typedef int ocs_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,char*,char*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char*,char*) ;
 int FUNC_4 (char*,char*,int) ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(ocs_t *VAR_4, char *VAR_5, ocs_textbuf_t *VAR_6)
{
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 uint32_t VAR_11;
 char VAR_12[80];
 char VAR_13[80];

 VAR_7 = (FUNC_0(VAR_4, VAR_2) & 0x00000f00) >> 8;
 VAR_8 = FUNC_0(VAR_4, VAR_1);
 VAR_10 = VAR_8 & 0xff;
 VAR_9 = (VAR_8 & 0xff00) >> 8;

 VAR_11 = FUNC_0(VAR_4, VAR_3) & 0xff;

 switch(VAR_7) {
 case 0x00:

  FUNC_4(VAR_12, "BE2 A", sizeof(VAR_12));
  FUNC_2(VAR_13, 2, "%d", VAR_11);
  FUNC_5(VAR_12, VAR_13);
  break;
 case 0x01:

  FUNC_4(VAR_12, "BE3", sizeof(VAR_12));
  if (VAR_11 >= 0x10) {
   FUNC_5(VAR_12, "-R");
  }
  FUNC_2(VAR_13, 3, " %c", ((VAR_11 & 0xf0) >> 4) + 'A');
  FUNC_5(VAR_12, VAR_13);
  FUNC_2(VAR_13, 2, "%d", VAR_11 & 0x0f);
  FUNC_5(VAR_12, VAR_13);
  break;
 case 0x02:

  FUNC_4(VAR_12, "Skyhawk A0", sizeof(VAR_12));
  break;
 case 0x0a:

  FUNC_4(VAR_12, "Lancer A", sizeof(VAR_12));
  FUNC_2(VAR_13, 2, "%d", VAR_11 & 0x0f);
  FUNC_5(VAR_12, VAR_13);
  break;
 case 0x0b:

  FUNC_4(VAR_12, "Lancer", sizeof(VAR_12));
  FUNC_2(VAR_13, 3, " %c", ((VAR_11 & 0xf0) >> 4) + 'A');
  FUNC_5(VAR_12, VAR_13);
  FUNC_2(VAR_13, 2, "%d", VAR_11 & 0x0f);
  FUNC_5(VAR_12, VAR_13);
  break;
 case 0x0c:
  FUNC_4(VAR_12, "Lancer G6", sizeof(VAR_12));
  break;
 case 0x0f:

  switch(VAR_9) {
  case 0x00:
   FUNC_4(VAR_12, "BE2", sizeof(VAR_12));
   break;
  case 0x03:
   FUNC_4(VAR_12, "BE3-R", sizeof(VAR_12));
   break;
  case 0x04:
   FUNC_4(VAR_12, "Skyhawk-R", sizeof(VAR_12));
   break;
  case 0x05:
   FUNC_4(VAR_12, "Corsair", sizeof(VAR_12));
   break;
  case 0x0b:
   FUNC_4(VAR_12, "Lancer", sizeof(VAR_12));
   break;
  case 0x0c:
   FUNC_4(VAR_12, "LancerG6", sizeof(VAR_12));
   break;
  default:
   FUNC_4(VAR_12, "Unknown", sizeof(VAR_12));
  }
  if (FUNC_3(VAR_12, "Unknown") != 0) {
   FUNC_2(VAR_13, 3, " %c", ((VAR_10 & 0xf0) >> 4) + 'A');
   FUNC_5(VAR_12, VAR_13);
   FUNC_2(VAR_13, 2, "%d", VAR_10 & 0x0f);
   FUNC_5(VAR_12, VAR_13);
  }
  break;
 default:
  FUNC_4(VAR_12, "Unknown", sizeof(VAR_12));
 }

 FUNC_1(VAR_6, VAR_0, "chip_type", VAR_12);

}
