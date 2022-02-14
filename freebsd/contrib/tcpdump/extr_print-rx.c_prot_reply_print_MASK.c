
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct rx_header {scalar_t__ type; } ;
typedef int netdissect_options ;
typedef int int32_t ;


 unsigned long FUNC_0 (int const*) ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int const,int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int VAR_2 ;
 int FUNC_6 (int ,char*,int) ;
 int FUNC_7 (int *,int const*,int,int) ;

__attribute__((used)) static void
FUNC_8(netdissect_options *VAR_3,
                 register const u_char *VAR_4, int VAR_5, int32_t VAR_6)
{
 const struct rx_header *VAR_7;
 unsigned long VAR_8;

 if (VAR_5 < (int)sizeof(struct rx_header))
  return;

 VAR_7 = (const struct rx_header *) VAR_4;







 FUNC_2((VAR_3, " pt"));

 if (FUNC_5(VAR_6)) {
  FUNC_7(VAR_3, VAR_4, VAR_5, VAR_6);
  return;
 }

 FUNC_2((VAR_3, " reply %s", FUNC_6(VAR_2, "op#%d", VAR_6)));

 VAR_4 += sizeof(struct rx_header);





 if (VAR_7->type == VAR_1)
  switch (VAR_6) {
  case 504:
  {
   unsigned long VAR_9;
   FUNC_2((VAR_3, " ids:"));
   FUNC_3(VAR_4[0], 4);
   VAR_8 = FUNC_0(VAR_4);
   VAR_4 += sizeof(int32_t);
   for (VAR_9 = 0; VAR_9 < VAR_8; VAR_9++)
    FUNC_1();
   if (VAR_9 == 0)
    FUNC_2((VAR_3, " <none!>"));
  }
   break;
  case 505:
  {
   unsigned long VAR_10;
   FUNC_3(VAR_4[0], 4);
   VAR_10 = FUNC_0(VAR_4);
   VAR_4 += sizeof(int32_t);
   for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
    FUNC_4(VAR_0);
   }
   if (VAR_10 == 0)
    FUNC_2((VAR_3, " <none!>"));
  }
   break;
  case 508:
  case 514:
  case 517:
  case 518:
  case 519:
  {
   unsigned long VAR_11;
   FUNC_3(VAR_4[0], 4);
   VAR_11 = FUNC_0(VAR_4);
   VAR_4 += sizeof(int32_t);
   for (VAR_8 = 0; VAR_8 < VAR_11; VAR_8++) {
    FUNC_1();
   }
   if (VAR_11 == 0)
    FUNC_2((VAR_3, " <none!>"));
  }
   break;
  case 510:
   FUNC_2((VAR_3, " maxuid"));
   FUNC_1();
   FUNC_2((VAR_3, " maxgid"));
   FUNC_1();
   break;
  default:
   ;
  }
 else {



  FUNC_2((VAR_3, " errcode"));
  FUNC_1();
 }

 return;

trunc:
 FUNC_2((VAR_3, " [|pt]"));
}
