
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;


 int FUNC_0 (int const*) ;


 int FUNC_1 (int *) ;
 int FUNC_2 (int const,int) ;
 int FUNC_3 (int *,int const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_1,
                   register const u_char *VAR_2, u_int VAR_3, u_short VAR_4)
{
   if (VAR_3 != 4)
   {
       FUNC_1((VAR_1, "ERROR: length %u != 4", VAR_3));
       return;
   }

   FUNC_2(VAR_2[0],4);

   switch(VAR_4)
   {
      case 129:
      case 128:
           if (FUNC_0(VAR_2) == 0xFFFFFFFF )
              FUNC_1((VAR_1, "User Selected"));
           else
              if (FUNC_0(VAR_2) == 0xFFFFFFFE )
                 FUNC_1((VAR_1, "NAS Select"));
              else
                 FUNC_1((VAR_1, "%s",FUNC_3(VAR_1, VAR_2)));
      break;

      default:
          FUNC_1((VAR_1, "%s", FUNC_3(VAR_1, VAR_2)));
      break;
   }

   return;

   trunc:
     FUNC_1((VAR_1, "%s", VAR_0));
}
