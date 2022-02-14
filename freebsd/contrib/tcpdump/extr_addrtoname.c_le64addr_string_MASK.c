
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct bsnamemem {char const* bs_name; } ;
struct TYPE_5__ {int (* ndo_error ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 void** VAR_1 ;
 struct bsnamemem* FUNC_0 (TYPE_1__*,int const*,unsigned int const) ;
 char const* FUNC_1 (char*) ;
 int FUNC_2 (TYPE_1__*,char*) ;

const char *
FUNC_3(netdissect_options *VAR_2, const u_char *VAR_3)
{
 const unsigned int VAR_4 = 8;
 register u_int VAR_5;
 register char *VAR_6;
 register struct bsnamemem *VAR_7;
 char VAR_8[VAR_0];

 VAR_7 = FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_7->bs_name)
  return (VAR_7->bs_name);

 VAR_6 = VAR_8;
 for (VAR_5 = VAR_4; VAR_5 > 0 ; --VAR_5) {
  *VAR_6++ = VAR_1[*(VAR_3 + VAR_5 - 1) >> 4];
  *VAR_6++ = VAR_1[*(VAR_3 + VAR_5 - 1) & 0xf];
  *VAR_6++ = ':';
 }
 VAR_6 --;

 *VAR_6 = '\0';

 VAR_7->bs_name = FUNC_1(VAR_8);
 if (VAR_7->bs_name == ((void*)0))
  (*VAR_2->ndo_error)(VAR_2, "le64addr_string: strdup(buf)");

 return (VAR_7->bs_name);
}
