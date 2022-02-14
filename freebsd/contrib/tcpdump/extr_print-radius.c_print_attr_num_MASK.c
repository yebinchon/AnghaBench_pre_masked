
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef size_t u_short ;
typedef int u_int ;
typedef scalar_t__ u_char ;
typedef int netdissect_options ;
struct TYPE_2__ {int siz_subtypes; char** subtypes; int first_subtype; } ;






 size_t FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (scalar_t__ const*) ;




 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__ const,int) ;

 size_t VAR_0 ;

 size_t VAR_1 ;
 TYPE_1__* VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ,char*,scalar_t__ const) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_5,
               register const u_char *VAR_6, u_int VAR_7, u_short VAR_8)
{
   uint32_t VAR_9;

   if (VAR_7 != 4)
   {
       FUNC_2((VAR_5, "ERROR: length %u != 4", VAR_7));
       return;
   }

   FUNC_3(VAR_6[0],4);

   if (VAR_2[VAR_8].siz_subtypes)
   {
      static const char **VAR_10;
      uint32_t VAR_11;
      VAR_10 = VAR_2[VAR_8].subtypes;

      if ( (VAR_8 == VAR_1) || (VAR_8 == VAR_0) )
      {
         if (!*VAR_6)
            FUNC_2((VAR_5, "Tag[Unused] "));
         else
            FUNC_2((VAR_5, "Tag[%d] ", *VAR_6));
         VAR_6++;
         VAR_11 = FUNC_0(VAR_6);
      }
      else
      {
         VAR_11 = FUNC_1(VAR_6);
      }
      if ( VAR_11 <= (uint32_t)(VAR_2[VAR_8].siz_subtypes - 1 +
            VAR_2[VAR_8].first_subtype) &&
    VAR_11 >= VAR_2[VAR_8].first_subtype )
         FUNC_2((VAR_5, "%s", VAR_10[VAR_11]));
      else
         FUNC_2((VAR_5, "#%u", VAR_11));
   }
   else
   {
      switch(VAR_8)
      {
        case 131:
             if (FUNC_1( VAR_6) == 0xFFFFFFFE )
                FUNC_2((VAR_5, "NAS Select"));
             else
                FUNC_2((VAR_5, "%d", FUNC_1(VAR_6)));
          break;

        case 129:
        case 130:
        case 137:
        case 135:
        case 136:
             VAR_9 = FUNC_1( VAR_6);
             if ( VAR_9 < 60 )
                FUNC_2((VAR_5, "%02d secs", VAR_9));
             else
             {
                if ( VAR_9 < 3600 )
                   FUNC_2((VAR_5, "%02d:%02d min",
                          VAR_9 / 60, VAR_9 % 60));
                else
                   FUNC_2((VAR_5, "%02d:%02d:%02d hours",
                          VAR_9 / 3600, (VAR_9 % 3600) / 60,
                          VAR_9 % 60));
             }
          break;

        case 133:
             if (FUNC_1(VAR_6) )
                FUNC_2((VAR_5, "%d", FUNC_1(VAR_6)));
             else
                FUNC_2((VAR_5, "Unnumbered"));
          break;

        case 132:
             if (FUNC_1(VAR_6) )
                FUNC_2((VAR_5, "%d", FUNC_1(VAR_6)));
             else
                FUNC_2((VAR_5, "NAS assigned"));
          break;

        case 128:
            if (*VAR_6)
               FUNC_2((VAR_5, "Tag[%d] ", *VAR_6));
            else
               FUNC_2((VAR_5, "Tag[Unused] "));
            VAR_6++;
            FUNC_2((VAR_5, "%d", FUNC_0(VAR_6)));
          break;

        case 134:
            FUNC_2((VAR_5, "%s (0x%02x) ",
                   FUNC_4(VAR_3,"Unknown tag",*VAR_6),
                   *VAR_6));
            VAR_6++;
            FUNC_2((VAR_5, "%d", FUNC_0(VAR_6)));
          break;

        default:
             FUNC_2((VAR_5, "%d", FUNC_1(VAR_6)));
          break;

      }

   }

   return;

   trunc:
     FUNC_2((VAR_5, "%s", VAR_4));
}
