
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct rx_header {int dummy; } ;
struct TYPE_4__ {int const* ndo_snapend; } ;
typedef TYPE_1__ netdissect_options ;
typedef int int32_t ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 void* FUNC_2 (int const*) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (int const,int) ;
 int FUNC_7 (int const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (int ,char*,unsigned long) ;

__attribute__((used)) static void
FUNC_9(netdissect_options *VAR_2,
         register const u_char *VAR_3, int VAR_4)
{
 int VAR_5;
 unsigned long VAR_6;

 if (VAR_4 <= (int)sizeof(struct rx_header))
  return;

 if (VAR_2->ndo_snapend - VAR_3 + 1 <= (int)(sizeof(struct rx_header) + sizeof(int32_t))) {
  goto trunc;
 }






 VAR_5 = FUNC_2(VAR_3 + sizeof(struct rx_header));

 FUNC_5((VAR_2, " cb call %s", FUNC_8(VAR_0, "op#%d", VAR_5)));

 VAR_3 += sizeof(struct rx_header) + 4;






 switch (VAR_5) {
  case 204:
  {
   unsigned long VAR_7, VAR_8;
   FUNC_6(VAR_3[0], 4);
   VAR_7 = FUNC_2(VAR_3);
   VAR_3 += sizeof(int32_t);

   for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
    FUNC_3();
    if (VAR_6 != VAR_7 - 1)
     FUNC_5((VAR_2, ","));
   }

   if (VAR_7 == 0)
    FUNC_5((VAR_2, " <none!>"));

   FUNC_7(VAR_3);
   VAR_7 = FUNC_2(VAR_3);
   VAR_3 += sizeof(int32_t);

   if (VAR_7 != 0)
    FUNC_5((VAR_2, ";"));

   for (VAR_6 = 0; VAR_6 < VAR_7; VAR_6++) {
    FUNC_5((VAR_2, " ver"));
    FUNC_4();
    FUNC_5((VAR_2, " expires"));
    FUNC_1();
    FUNC_6(VAR_3[0], 4);
    VAR_8 = FUNC_2(VAR_3);
    VAR_3 += sizeof(int32_t);
    FUNC_8(VAR_1, "type %d", VAR_8);
   }
  }
  case 214: {
   FUNC_5((VAR_2, " afsuuid"));
   FUNC_0();
   break;
  }
  default:
   ;
 }

 return;

trunc:
 FUNC_5((VAR_2, " [|cb]"));
}
