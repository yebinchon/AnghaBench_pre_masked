
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_6__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 int FUNC_0 (int const*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const) ;
 int FUNC_3 (int const,int) ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int,int) ;
 int VAR_0 ;
 int* FUNC_6 (TYPE_1__*,int const*,char*,int const*,int ) ;
 int FUNC_7 (TYPE_1__*,int const*,int ) ;
 int const* VAR_1 ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_2 ;

void
FUNC_9(netdissect_options *VAR_3,
                 const u_char *VAR_4, int VAR_5)
{
    const u_char *VAR_6 = VAR_4 + VAR_5;
    int VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    int VAR_12, VAR_13, VAR_14, VAR_15;
    const u_char *VAR_16;
    int VAR_17, VAR_18;

    FUNC_3(VAR_4[10], 2);
    VAR_7 = FUNC_0(VAR_4);
    VAR_8 = (VAR_4[2] >> 7);
    VAR_9 = (VAR_4[2] >> 3) & 0xF;
    VAR_10 = ((VAR_4[2] & 0x7) << 4) + (VAR_4[3] >> 4);
    VAR_11 = VAR_4[3] & 0xF;
    VAR_12 = FUNC_0(VAR_4 + 4);
    VAR_13 = FUNC_0(VAR_4 + 6);
    VAR_14 = FUNC_0(VAR_4 + 8);
    VAR_15 = FUNC_0(VAR_4 + 10);
    VAR_1 = VAR_4;

    if (VAR_6 <= VAR_4)
 return;

    if (VAR_3->ndo_vflag > 1)
 FUNC_1((VAR_3, "\n>>> "));

    FUNC_1((VAR_3, "NBT UDP PACKET(137): %s", FUNC_8(VAR_0, "OPUNKNOWN", VAR_9)));
    if (VAR_8) {
        FUNC_1((VAR_3, "; %s", VAR_11 ? "NEGATIVE" : "POSITIVE"));
    }
    FUNC_1((VAR_3, "; %s; %s", VAR_8 ? "RESPONSE" : "REQUEST",
              (VAR_10 & 1) ? "BROADCAST" : "UNICAST"));

    if (VAR_3->ndo_vflag < 2)
 return;

    FUNC_1((VAR_3, "\nTrnID=0x%X\nOpCode=%d\nNmFlags=0x%X\nRcode=%d\nQueryCount=%d\nAnswerCount=%d\nAuthorityCount=%d\nAddressRecCount=%d\n",
 VAR_7, VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14,
 VAR_15));

    VAR_16 = VAR_4 + 12;

    VAR_17 = VAR_13 + VAR_14 + VAR_15;

    if (VAR_12 > 100 || VAR_17 > 100) {
 FUNC_1((VAR_3, "Corrupt packet??\n"));
 return;
    }

    if (VAR_12) {
 FUNC_1((VAR_3, "QuestionRecords:\n"));
 for (VAR_18 = 0; VAR_18 < VAR_12; VAR_18++) {
     VAR_16 = FUNC_6(VAR_3, VAR_16,
  "|Name=[n1]\nQuestionType=[rw]\nQuestionClass=[rw]\n#",
  VAR_6, 0);
     if (VAR_16 == ((void*)0))
  goto out;
 }
    }

    if (VAR_17) {
 FUNC_1((VAR_3, "\nResourceRecords:\n"));
 for (VAR_18 = 0; VAR_18 < VAR_17; VAR_18++) {
     int VAR_19;
     int VAR_20;

     VAR_16 = FUNC_6(VAR_3, VAR_16, "Name=[n1]\n#", VAR_6, 0);
     if (VAR_16 == ((void*)0))
  goto out;
     FUNC_4(VAR_16);
     VAR_20 = FUNC_0(VAR_16);
     VAR_16 = FUNC_6(VAR_3, VAR_16, "ResType=[rw]\nResClass=[rw]\nTTL=[rD]\n", VAR_16 + 8, 0);
     if (VAR_16 == ((void*)0))
  goto out;
     FUNC_4(VAR_16);
     VAR_19 = FUNC_0(VAR_16);
     FUNC_1((VAR_3, "ResourceLength=%d\nResourceData=\n", VAR_19));
     VAR_16 += 2;
     if (VAR_19 == 6) {
  VAR_16 = FUNC_6(VAR_3, VAR_16, "AddrType=[rw]\nAddress=[b.b.b.b]\n", VAR_16 + VAR_19, 0);
  if (VAR_16 == ((void*)0))
      goto out;
     } else {
  if (VAR_20 == 0x21) {
      int VAR_21;

      FUNC_2(*VAR_16);
      VAR_21 = VAR_16[0];
      VAR_16 = FUNC_6(VAR_3, VAR_16, "NumNames=[B]\n", VAR_16 + 1, 0);
      if (VAR_16 == ((void*)0))
   goto out;
      while (VAR_21--) {
   VAR_16 = FUNC_6(VAR_3, VAR_16, "Name=[n2]\t#", VAR_6, 0);
   if (VAR_16 == ((void*)0))
       goto out;
   FUNC_2(*VAR_16);
   if (VAR_16[0] & 0x80)
       FUNC_1((VAR_3, "<GROUP> "));
   switch (VAR_16[0] & 0x60) {
   case 0x00: FUNC_1((VAR_3, "B ")); break;
   case 0x20: FUNC_1((VAR_3, "P ")); break;
   case 0x40: FUNC_1((VAR_3, "M ")); break;
   case 0x60: FUNC_1((VAR_3, "_ ")); break;
   }
   if (VAR_16[0] & 0x10)
       FUNC_1((VAR_3, "<DEREGISTERING> "));
   if (VAR_16[0] & 0x08)
       FUNC_1((VAR_3, "<CONFLICT> "));
   if (VAR_16[0] & 0x04)
       FUNC_1((VAR_3, "<ACTIVE> "));
   if (VAR_16[0] & 0x02)
       FUNC_1((VAR_3, "<PERMANENT> "));
   FUNC_1((VAR_3, "\n"));
   VAR_16 += 2;
      }
  } else {
      FUNC_7(VAR_3, VAR_16, FUNC_5(VAR_19, VAR_5 - (VAR_16 - VAR_4)));
      VAR_16 += VAR_19;
  }
     }
 }
    }

    if (VAR_16 < VAR_6)
 FUNC_6(VAR_3, VAR_16, "AdditionalData:\n", VAR_6, 0);

out:
    FUNC_1((VAR_3, "\n"));
    return;
trunc:
    FUNC_1((VAR_3, "%s", VAR_2));
}
