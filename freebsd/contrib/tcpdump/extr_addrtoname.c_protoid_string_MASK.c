
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t u_int ;
typedef int u_char ;
struct protoidmem {char const* p_name; } ;
struct TYPE_5__ {int (* ndo_error ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ netdissect_options ;


 void** VAR_0 ;
 struct protoidmem* FUNC_0 (TYPE_1__*,int const*) ;
 char const* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;

const char *
FUNC_3(netdissect_options *VAR_1, register const u_char *VAR_2)
{
 register u_int VAR_3, VAR_4;
 register char *VAR_5;
 register struct protoidmem *VAR_6;
 char VAR_7[sizeof("00:00:00:00:00")];

 VAR_6 = FUNC_0(VAR_1, VAR_2);
 if (VAR_6->p_name)
  return VAR_6->p_name;

 VAR_5 = VAR_7;
 if ((VAR_4 = *VAR_2 >> 4) != 0)
  *VAR_5++ = VAR_0[VAR_4];
 *VAR_5++ = VAR_0[*VAR_2++ & 0xf];
 for (VAR_3 = 4; (int)--VAR_3 >= 0;) {
  *VAR_5++ = ':';
  if ((VAR_4 = *VAR_2 >> 4) != 0)
   *VAR_5++ = VAR_0[VAR_4];
  *VAR_5++ = VAR_0[*VAR_2++ & 0xf];
 }
 *VAR_5 = '\0';
 VAR_6->p_name = FUNC_1(VAR_7);
 if (VAR_6->p_name == ((void*)0))
  (*VAR_1->ndo_error)(VAR_1, "protoid_string: strdup(buf)");
 return (VAR_6->p_name);
}
