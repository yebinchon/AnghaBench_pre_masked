
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct enamemem {char const* e_name; } ;
struct TYPE_5__ {int (* ndo_error ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 void** VAR_1 ;
 struct enamemem* FUNC_0 (TYPE_1__*,int const*,int) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*,char*) ;

const char *
FUNC_3(netdissect_options *VAR_2, const u_char *VAR_3,
        register u_int VAR_4)
{
 register u_int VAR_5;
 register char *VAR_6;
 register struct enamemem *VAR_7;

 if (VAR_4 < 1 || VAR_4 > VAR_0)
  return ("isonsap_string: illegal length");

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_7->e_name)
  return VAR_7->e_name;

 VAR_7->e_name = VAR_6 = (char *)FUNC_1(sizeof("xx.xxxx.xxxx.xxxx.xxxx.xxxx.xxxx.xxxx.xxxx.xxxx.xx"));
 if (VAR_6 == ((void*)0))
  (*VAR_2->ndo_error)(VAR_2, "isonsap_string: malloc");

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  *VAR_6++ = VAR_1[*VAR_3 >> 4];
  *VAR_6++ = VAR_1[*VAR_3++ & 0xf];
  if (((VAR_5 & 1) == 0) &&
       (VAR_5 + 1 < VAR_4)) {
        *VAR_6++ = '.';
  }
 }
 *VAR_6 = '\0';
 return (VAR_7->e_name);
}
