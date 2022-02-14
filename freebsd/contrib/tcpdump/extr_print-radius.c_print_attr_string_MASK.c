
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







 int VAR_0 ;
 int FUNC_3 (int ,char*,int const) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_4(netdissect_options *VAR_2,
                  register const u_char *VAR_3, u_int VAR_4, u_short VAR_5)
{
   register u_int VAR_6;

   FUNC_2(VAR_3[0],VAR_4);

   switch(VAR_5)
   {
      case 131:
           if (VAR_4 < 3)
              goto trunc;
           if (*VAR_3 && (*VAR_3 <=0x1F) )
              FUNC_1((VAR_2, "Tag[%u] ", *VAR_3));
           else
              FUNC_1((VAR_2, "Tag[Unused] "));
           VAR_3++;
           VAR_4--;
           FUNC_1((VAR_2, "Salt %u ", FUNC_0(VAR_3)));
           VAR_3+=2;
           VAR_4-=2;
        break;
      case 132:
      case 128:
      case 130:
      case 134:
      case 133:
      case 129:
           if (*VAR_3 <= 0x1F)
           {
              if (VAR_4 < 1)
                 goto trunc;
              if (*VAR_3)
                FUNC_1((VAR_2, "Tag[%u] ", *VAR_3));
              else
                FUNC_1((VAR_2, "Tag[Unused] "));
              VAR_3++;
              VAR_4--;
           }
        break;
      case 135:
           if (VAR_4 < 1)
              goto trunc;
           FUNC_1((VAR_2, "%s (0x%02x) ",
                  FUNC_3(VAR_0,"Unknown tag",*VAR_3),
                  *VAR_3));
           VAR_3++;
           VAR_4--;
        break;
   }

   for (VAR_6=0; VAR_6 < VAR_4 && *VAR_3; VAR_6++, VAR_3++)
       FUNC_1((VAR_2, "%c", (*VAR_3 < 32 || *VAR_3 > 126) ? '.' : *VAR_3));

   return;

   trunc:
      FUNC_1((VAR_2, "%s", VAR_1));
}
