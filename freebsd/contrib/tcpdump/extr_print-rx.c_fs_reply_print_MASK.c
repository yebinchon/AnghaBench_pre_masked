
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct rx_header {scalar_t__ type; } ;
typedef int netdissect_options ;
typedef int int32_t ;
typedef int a ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 unsigned long FUNC_1 (int const*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int const,int) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *,int *,int,int *) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_7 (int ,unsigned long) ;
 int FUNC_8 (char*,char const*,unsigned long) ;
 int FUNC_9 (int ,char*,unsigned long) ;

__attribute__((used)) static void
FUNC_10(netdissect_options *VAR_6,
               register const u_char *VAR_7, int VAR_8, int32_t VAR_9)
{
 unsigned long VAR_10;
 const struct rx_header *VAR_11;

 if (VAR_8 <= (int)sizeof(struct rx_header))
  return;

 VAR_11 = (const struct rx_header *) VAR_7;






 FUNC_3((VAR_6, " fs reply %s", FUNC_9(VAR_5, "op#%d", VAR_9)));

 VAR_7 += sizeof(struct rx_header);





 if (VAR_11->type == VAR_3) {
  switch (VAR_9) {
  case 131:
  {
   char VAR_12[VAR_1+1];
   FUNC_4(VAR_7[0], 4);
   VAR_10 = FUNC_1(VAR_7);
   VAR_7 += sizeof(int32_t);
   FUNC_4(VAR_7[0], VAR_10);
   VAR_10 = FUNC_7(VAR_1, VAR_10);
   FUNC_8(VAR_12, (const char *) VAR_7, VAR_10);
   VAR_12[VAR_10] = '\0';
   FUNC_6(VAR_6, (u_char *) VAR_12, sizeof(VAR_12), (u_char *) VAR_12 + VAR_10);
   break;
  }
  case 137:
  case 141:
   FUNC_3((VAR_6, " new"));
   FUNC_2();
   break;
  case 151:
   FUNC_3((VAR_6, " root volume"));
   FUNC_5(VAR_0);
   break;
  case 153:
   FUNC_0();
   break;
  default:
   ;
  }
 } else if (VAR_11->type == VAR_2) {



  FUNC_4(VAR_7[0], sizeof(int32_t));
  VAR_10 = (int) FUNC_1(VAR_7);
  VAR_7 += sizeof(int32_t);

  FUNC_3((VAR_6, " error %s", FUNC_9(VAR_4, "#%d", VAR_10)));
 } else {
  FUNC_3((VAR_6, " strange fs reply of type %d", VAR_11->type));
 }

 return;

trunc:
 FUNC_3((VAR_6, " [|fs]"));
}
