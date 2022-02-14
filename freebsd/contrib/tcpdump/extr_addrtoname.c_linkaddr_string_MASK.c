
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef unsigned int u_int ;
typedef int u_char ;
struct bsnamemem {char const* bs_name; } ;
struct TYPE_7__ {int (* ndo_error ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ netdissect_options ;


 unsigned int const VAR_0 ;
 unsigned int const VAR_1 ;
 unsigned int const VAR_2 ;
 char const* FUNC_0 (TYPE_1__*,int const*) ;
 void** VAR_3 ;
 struct bsnamemem* FUNC_1 (TYPE_1__*,int const*,unsigned int const) ;
 scalar_t__ FUNC_2 (unsigned int const) ;
 char const* FUNC_3 (TYPE_1__*,int const*,unsigned int const) ;
 int FUNC_4 (TYPE_1__*,char*) ;

const char *
FUNC_5(netdissect_options *VAR_4, const u_char *VAR_5,
  const unsigned int VAR_6, const unsigned int VAR_7)
{
 register u_int VAR_8;
 register char *VAR_9;
 register struct bsnamemem *VAR_10;

 if (VAR_7 == 0)
  return ("<empty>");

 if (VAR_6 == VAR_1 && VAR_7 == VAR_0)
  return (FUNC_0(VAR_4, VAR_5));

 if (VAR_6 == VAR_2)
  return (FUNC_3(VAR_4, VAR_5, VAR_7));

 VAR_10 = FUNC_1(VAR_4, VAR_5, VAR_7);
 if (VAR_10->bs_name)
  return (VAR_10->bs_name);

 VAR_10->bs_name = VAR_9 = (char *)FUNC_2(VAR_7*3);
 if (VAR_10->bs_name == ((void*)0))
  (*VAR_4->ndo_error)(VAR_4, "linkaddr_string: malloc");
 *VAR_9++ = VAR_3[*VAR_5 >> 4];
 *VAR_9++ = VAR_3[*VAR_5++ & 0xf];
 for (VAR_8 = VAR_7-1; VAR_8 > 0 ; --VAR_8) {
  *VAR_9++ = ':';
  *VAR_9++ = VAR_3[*VAR_5 >> 4];
  *VAR_9++ = VAR_3[*VAR_5++ & 0xf];
 }
 *VAR_9 = '\0';
 return (VAR_10->bs_name);
}
