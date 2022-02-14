
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct rx_header {scalar_t__ type; } ;
typedef int netdissect_options ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (int const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (int ) ;
 int FUNC_6 () ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ,char*,int) ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_9(netdissect_options *VAR_3,
                register const u_char *VAR_4, int VAR_5, int32_t VAR_6)
{
 const struct rx_header *VAR_7;

 if (VAR_5 <= (int)sizeof(struct rx_header))
  return;

 VAR_7 = (const struct rx_header *) VAR_4;






 FUNC_3((VAR_3, " vol reply %s", FUNC_8(VAR_2, "op#%d", VAR_6)));

 VAR_4 += sizeof(struct rx_header);





 if (VAR_7->type == VAR_1) {
  switch (VAR_6) {
   case 100:
    FUNC_3((VAR_3, " volid"));
    FUNC_6();
    FUNC_3((VAR_3, " trans"));
    FUNC_6();
    break;
   case 104:
    FUNC_6();
    break;
   case 105:
    FUNC_3((VAR_3, " newvol"));
    FUNC_6();
    break;
   case 107:
    FUNC_6();
    break;
   case 108:
    FUNC_3((VAR_3, " trans"));
    FUNC_6();
    break;
   case 110:
    FUNC_3((VAR_3, " volume"));
    FUNC_6();
    FUNC_3((VAR_3, " partition"));
    FUNC_6();
    break;
   case 112:
    FUNC_5(VAR_0);
    break;
   case 113:
    FUNC_3((VAR_3, " volid"));
    FUNC_6();
    FUNC_3((VAR_3, " nextuniq"));
    FUNC_6();
    FUNC_3((VAR_3, " type"));
    FUNC_6();
    FUNC_3((VAR_3, " parentid"));
    FUNC_6();
    FUNC_3((VAR_3, " clone"));
    FUNC_6();
    FUNC_3((VAR_3, " backup"));
    FUNC_6();
    FUNC_3((VAR_3, " restore"));
    FUNC_6();
    FUNC_3((VAR_3, " maxquota"));
    FUNC_6();
    FUNC_3((VAR_3, " minquota"));
    FUNC_6();
    FUNC_3((VAR_3, " owner"));
    FUNC_6();
    FUNC_3((VAR_3, " create"));
    FUNC_0();
    FUNC_3((VAR_3, " access"));
    FUNC_0();
    FUNC_3((VAR_3, " update"));
    FUNC_0();
    FUNC_3((VAR_3, " expire"));
    FUNC_0();
    FUNC_3((VAR_3, " backup"));
    FUNC_0();
    FUNC_3((VAR_3, " copy"));
    FUNC_0();
    break;
   case 115:
    break;
   case 116:
   case 121:
    {
     unsigned long VAR_8, VAR_9;
     FUNC_4(VAR_4[0], 4);
     VAR_9 = FUNC_1(VAR_4);
     VAR_4 += sizeof(int32_t);
     for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
      FUNC_3((VAR_3, " name"));
      FUNC_7(32);
      FUNC_3((VAR_3, " volid"));
      FUNC_6();
      FUNC_3((VAR_3, " type"));
      VAR_4 += sizeof(int32_t) * 21;
      if (VAR_8 != VAR_9 - 1)
       FUNC_3((VAR_3, ","));
     }
     if (VAR_9 == 0)
      FUNC_3((VAR_3, " <none!>"));
    }
    break;


   default:
    ;
  }
 } else {



  FUNC_3((VAR_3, " errcode"));
  FUNC_2();
 }

 return;

trunc:
 FUNC_3((VAR_3, " [|vol]"));
}
