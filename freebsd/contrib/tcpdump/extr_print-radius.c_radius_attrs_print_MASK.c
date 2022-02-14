
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct radius_attr {size_t type; int len; } ;
struct TYPE_8__ {int ndo_vflag; } ;
typedef TYPE_1__ netdissect_options ;
struct TYPE_9__ {char* name; int (* print_func ) (TYPE_1__*,int const*,int,size_t) ;} ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct radius_attr const) ;
 size_t FUNC_2 (TYPE_5__*) ;
 TYPE_5__* VAR_0 ;
 int FUNC_3 (TYPE_1__*,int const*,char*,int) ;
 int FUNC_4 (TYPE_1__*,int const*,int,size_t) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_5(netdissect_options *VAR_2,
                   register const u_char *VAR_3, u_int VAR_4)
{
   register const struct radius_attr *VAR_5 = (const struct radius_attr *)VAR_3;
   const char *VAR_6;

   while (VAR_4 > 0)
   {
     if (VAR_4 < 2)
        goto trunc;
     FUNC_1(*VAR_5);

     if (VAR_5->type > 0 && VAR_5->type < FUNC_2(VAR_0))
 VAR_6 = VAR_0[VAR_5->type].name;
     else
 VAR_6 = "Unknown";
     if (VAR_5->len < 2)
     {
 FUNC_0((VAR_2, "\n\t  %s Attribute (%u), length: %u (bogus, must be >= 2)",
               VAR_6,
               VAR_5->type,
               VAR_5->len));
 return;
     }
     if (VAR_5->len > VAR_4)
     {
 FUNC_0((VAR_2, "\n\t  %s Attribute (%u), length: %u (bogus, goes past end of packet)",
               VAR_6,
               VAR_5->type,
               VAR_5->len));
        return;
     }
     FUNC_0((VAR_2, "\n\t  %s Attribute (%u), length: %u, Value: ",
            VAR_6,
            VAR_5->type,
            VAR_5->len));

     if (VAR_5->type < FUNC_2(VAR_0))
     {
         if (VAR_5->len > 2)
         {
             if ( VAR_0[VAR_5->type].print_func )
                 (*VAR_0[VAR_5->type].print_func)(
                     VAR_2, ((const u_char *)(VAR_5+1)),
                     VAR_5->len - 2, VAR_5->type);
         }
     }

     if (VAR_2->ndo_vflag> 1)
         FUNC_3(VAR_2, (const u_char *)VAR_5+2, "\n\t    ", (VAR_5->len)-2);

     VAR_4-=(VAR_5->len);
     VAR_5 = (const struct radius_attr *)( ((const char *)(VAR_5))+VAR_5->len);
   }
   return;

trunc:
   FUNC_0((VAR_2, "%s", VAR_1));
}
