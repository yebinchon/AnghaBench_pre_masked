
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u_int ;
typedef int u_char ;
struct radius_hdr {int * auth; int id; int code; int len; } ;
struct TYPE_5__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int const,scalar_t__) ;
 int FUNC_3 (TYPE_1__*,int const*,scalar_t__) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*,int ) ;
 int VAR_2 ;

void
FUNC_5(netdissect_options *VAR_3,
             const u_char *VAR_4, u_int VAR_5)
{
   register const struct radius_hdr *VAR_6;
   u_int VAR_7, VAR_8;

   FUNC_2(*VAR_4, VAR_0);
   VAR_6 = (const struct radius_hdr *)VAR_4;
   VAR_7 = FUNC_0(&VAR_6->len);

   if (VAR_7 < VAR_0)
   {
   FUNC_1((VAR_3, "%s", VAR_2));
   return;
   }

   if (VAR_7 > VAR_5)
   VAR_7 = VAR_5;

   if (VAR_3->ndo_vflag < 1) {
       FUNC_1((VAR_3, "RADIUS, %s (%u), id: 0x%02x length: %u",
              FUNC_4(VAR_1,"Unknown Command",VAR_6->code),
              VAR_6->code,
              VAR_6->id,
              VAR_7));
       return;
   }
   else {
       FUNC_1((VAR_3, "RADIUS, length: %u\n\t%s (%u), id: 0x%02x, Authenticator: ",
              VAR_7,
              FUNC_4(VAR_1,"Unknown Command",VAR_6->code),
              VAR_6->code,
              VAR_6->id));

       for(VAR_8=0; VAR_8 < 16; VAR_8++)
            FUNC_1((VAR_3, "%02x", VAR_6->auth[VAR_8]));
   }

   if (VAR_7 > VAR_0)
      FUNC_3(VAR_3, VAR_4 + VAR_0, VAR_7 - VAR_0);
   return;

trunc:
   FUNC_1((VAR_3, "%s", VAR_2));
}
