
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
typedef int u_int ;
typedef int u_char ;
typedef int netdissect_options ;





 int FUNC_0 (int *) ;
 int FUNC_1 (int const,int) ;
 int FUNC_2 (int,int const*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_1,
                   register const u_char *VAR_2, u_int VAR_3, u_short VAR_4)
{
   u_short VAR_5;

   switch(VAR_4)
   {
      case 128:
           if (VAR_3 != 16)
           {
               FUNC_0((VAR_1, "ERROR: length %u != 16", VAR_3));
               return;
           }
           FUNC_0((VAR_1, "User_challenge ("));
           FUNC_1(VAR_2[0],8);
           VAR_5 = 8;
           FUNC_2(VAR_5, VAR_2);
           FUNC_0((VAR_1, ") User_resp("));
           FUNC_1(VAR_2[0],8);
           VAR_5 = 8;
           FUNC_2(VAR_5, VAR_2);
           FUNC_0((VAR_1, ")"));
        break;

      case 129:
           if (VAR_3 != 14)
           {
               FUNC_0((VAR_1, "ERROR: length %u != 14", VAR_3));
               return;
           }
           FUNC_1(VAR_2[0],1);
           if (*VAR_2)
              FUNC_0((VAR_1, "User can change password"));
           else
              FUNC_0((VAR_1, "User cannot change password"));
           VAR_2++;
           FUNC_1(VAR_2[0],1);
           FUNC_0((VAR_1, ", Min password length: %d", *VAR_2));
           VAR_2++;
           FUNC_0((VAR_1, ", created at: "));
           FUNC_1(VAR_2[0],4);
           VAR_5 = 4;
           FUNC_2(VAR_5, VAR_2);
           FUNC_0((VAR_1, ", expires in: "));
           FUNC_1(VAR_2[0],4);
           VAR_5 = 4;
           FUNC_2(VAR_5, VAR_2);
           FUNC_0((VAR_1, ", Current Time: "));
           FUNC_1(VAR_2[0],4);
           VAR_5 = 4;
           FUNC_2(VAR_5, VAR_2);
        break;

      case 130:
           if (VAR_3 < 8)
           {
               FUNC_0((VAR_1, "ERROR: length %u != 8", VAR_3));
               return;
           }
           FUNC_1(VAR_2[0],8);
           VAR_5 = 8;
           FUNC_2(VAR_5, VAR_2);
        break;
   }
   return;

   trunc:
     FUNC_0((VAR_1, "%s", VAR_0));
}
