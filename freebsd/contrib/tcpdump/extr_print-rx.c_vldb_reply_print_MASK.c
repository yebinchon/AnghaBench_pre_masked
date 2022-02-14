
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct rx_header {scalar_t__ type; } ;
struct in_addr {int s_addr; } ;
typedef int netdissect_options ;
typedef int int32_t ;


 int FUNC_0 () ;
 unsigned long FUNC_1 (int const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const,int) ;
 scalar_t__ VAR_0 ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int) ;
 int FUNC_9 (int ,char*,int) ;
 int FUNC_10 (int *,int const*,int,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_11(netdissect_options *VAR_3,
                 register const u_char *VAR_4, int VAR_5, int32_t VAR_6)
{
 const struct rx_header *VAR_7;
 unsigned long VAR_8;

 if (VAR_5 < (int)sizeof(struct rx_header))
  return;

 VAR_7 = (const struct rx_header *) VAR_4;







 FUNC_3((VAR_3, " vldb"));

 if (FUNC_8(VAR_6)) {
  FUNC_10(VAR_3, VAR_4, VAR_5, VAR_6);
  return;
 }

 FUNC_3((VAR_3, " reply %s", FUNC_9(VAR_2, "op#%d", VAR_6)));

 VAR_4 += sizeof(struct rx_header);





 if (VAR_7->type == VAR_0)
  switch (VAR_6) {
  case 510:
   FUNC_3((VAR_3, " count"));
   FUNC_2();
   FUNC_3((VAR_3, " nextindex"));
   FUNC_2();
  case 503:
  case 504:
  { unsigned long VAR_9, VAR_10;
   FUNC_6(VAR_1);
   FUNC_4(VAR_4[0], sizeof(int32_t));
   VAR_4 += sizeof(int32_t);
   FUNC_3((VAR_3, " numservers"));
   FUNC_4(VAR_4[0], sizeof(int32_t));
   VAR_9 = FUNC_1(VAR_4);
   VAR_4 += sizeof(int32_t);
   FUNC_3((VAR_3, " %lu", VAR_9));
   FUNC_3((VAR_3, " servers"));
   for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
    FUNC_4(VAR_4[0], sizeof(int32_t));
    if (VAR_8 < VAR_9)
     FUNC_3((VAR_3, " %s",
        FUNC_7(((const struct in_addr *) VAR_4)->s_addr)));
    VAR_4 += sizeof(int32_t);
   }
   FUNC_3((VAR_3, " partitions"));
   for (VAR_8 = 0; VAR_8 < 8; VAR_8++) {
    FUNC_4(VAR_4[0], sizeof(int32_t));
    VAR_10 = FUNC_1(VAR_4);
    if (VAR_8 < VAR_9 && VAR_10 <= 26)
     FUNC_3((VAR_3, " %c", 'a' + (int)VAR_10));
    else if (VAR_8 < VAR_9)
     FUNC_3((VAR_3, " %lu", VAR_10));
    VAR_4 += sizeof(int32_t);
   }
   FUNC_4(VAR_4[0], 8 * sizeof(int32_t));
   VAR_4 += 8 * sizeof(int32_t);
   FUNC_3((VAR_3, " rwvol"));
   FUNC_5();
   FUNC_3((VAR_3, " rovol"));
   FUNC_5();
   FUNC_3((VAR_3, " backup"));
   FUNC_5();
  }
   break;
  case 505:
   FUNC_3((VAR_3, " newvol"));
   FUNC_5();
   break;
  case 521:
  case 529:
   FUNC_3((VAR_3, " count"));
   FUNC_2();
   FUNC_3((VAR_3, " nextindex"));
   FUNC_2();
  case 518:
  case 519:
  { unsigned long VAR_11, VAR_12;
   FUNC_6(VAR_1);
   FUNC_3((VAR_3, " numservers"));
   FUNC_4(VAR_4[0], sizeof(int32_t));
   VAR_11 = FUNC_1(VAR_4);
   VAR_4 += sizeof(int32_t);
   FUNC_3((VAR_3, " %lu", VAR_11));
   FUNC_3((VAR_3, " servers"));
   for (VAR_8 = 0; VAR_8 < 13; VAR_8++) {
    FUNC_4(VAR_4[0], sizeof(int32_t));
    if (VAR_8 < VAR_11)
     FUNC_3((VAR_3, " %s",
        FUNC_7(((const struct in_addr *) VAR_4)->s_addr)));
    VAR_4 += sizeof(int32_t);
   }
   FUNC_3((VAR_3, " partitions"));
   for (VAR_8 = 0; VAR_8 < 13; VAR_8++) {
    FUNC_4(VAR_4[0], sizeof(int32_t));
    VAR_12 = FUNC_1(VAR_4);
    if (VAR_8 < VAR_11 && VAR_12 <= 26)
     FUNC_3((VAR_3, " %c", 'a' + (int)VAR_12));
    else if (VAR_8 < VAR_11)
     FUNC_3((VAR_3, " %lu", VAR_12));
    VAR_4 += sizeof(int32_t);
   }
   FUNC_4(VAR_4[0], 13 * sizeof(int32_t));
   VAR_4 += 13 * sizeof(int32_t);
   FUNC_3((VAR_3, " rwvol"));
   FUNC_5();
   FUNC_3((VAR_3, " rovol"));
   FUNC_5();
   FUNC_3((VAR_3, " backup"));
   FUNC_5();
  }
   break;
  case 526:
  case 527:
  { unsigned long VAR_13, VAR_14;
   FUNC_6(VAR_1);
   FUNC_3((VAR_3, " numservers"));
   FUNC_4(VAR_4[0], sizeof(int32_t));
   VAR_13 = FUNC_1(VAR_4);
   VAR_4 += sizeof(int32_t);
   FUNC_3((VAR_3, " %lu", VAR_13));
   FUNC_3((VAR_3, " servers"));
   for (VAR_8 = 0; VAR_8 < 13; VAR_8++) {
    if (VAR_8 < VAR_13) {
     FUNC_3((VAR_3, " afsuuid"));
     FUNC_0();
    } else {
     FUNC_4(VAR_4[0], 44);
     VAR_4 += 44;
    }
   }
   FUNC_4(VAR_4[0], 4 * 13);
   VAR_4 += 4 * 13;
   FUNC_3((VAR_3, " partitions"));
   for (VAR_8 = 0; VAR_8 < 13; VAR_8++) {
    FUNC_4(VAR_4[0], sizeof(int32_t));
    VAR_14 = FUNC_1(VAR_4);
    if (VAR_8 < VAR_13 && VAR_14 <= 26)
     FUNC_3((VAR_3, " %c", 'a' + (int)VAR_14));
    else if (VAR_8 < VAR_13)
     FUNC_3((VAR_3, " %lu", VAR_14));
    VAR_4 += sizeof(int32_t);
   }
   FUNC_4(VAR_4[0], 13 * sizeof(int32_t));
   VAR_4 += 13 * sizeof(int32_t);
   FUNC_3((VAR_3, " rwvol"));
   FUNC_5();
   FUNC_3((VAR_3, " rovol"));
   FUNC_5();
   FUNC_3((VAR_3, " backup"));
   FUNC_5();
  }
  default:
   ;
  }

 else {



  FUNC_3((VAR_3, " errcode"));
  FUNC_2();
 }

 return;

trunc:
 FUNC_3((VAR_3, " [|vldb]"));
}
