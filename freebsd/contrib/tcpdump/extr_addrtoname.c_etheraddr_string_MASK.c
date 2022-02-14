
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int u_char ;
struct ether_addr {int dummy; } ;
struct enamemem {char const* e_name; } ;
struct TYPE_6__ {int (* ndo_error ) (TYPE_1__*,char*) ;int ndo_nflag; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (char*,struct ether_addr const*) ;
 void** VAR_1 ;
 struct enamemem* FUNC_2 (TYPE_1__*,int const*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,char*,char*) ;
 void* FUNC_4 (char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 char* FUNC_7 (int ,char*,int) ;

const char *
FUNC_8(netdissect_options *VAR_3, register const u_char *VAR_4)
{
 register int VAR_5;
 register char *VAR_6;
 register struct enamemem *VAR_7;
 int VAR_8;
 char VAR_9[VAR_0];

 VAR_7 = FUNC_2(VAR_3, VAR_4);
 if (VAR_7->e_name)
  return (VAR_7->e_name);
 VAR_6 = VAR_9;
 VAR_8 = FUNC_0(VAR_4);
 *VAR_6++ = VAR_1[*VAR_4 >> 4 ];
 *VAR_6++ = VAR_1[*VAR_4++ & 0xf];
 for (VAR_5 = 5; --VAR_5 >= 0;) {
  *VAR_6++ = ':';
  *VAR_6++ = VAR_1[*VAR_4 >> 4 ];
  *VAR_6++ = VAR_1[*VAR_4++ & 0xf];
 }

 if (!VAR_3->ndo_nflag) {
  FUNC_3(VAR_6, VAR_0 - (2 + 5*3), " (oui %s)",
      FUNC_7(VAR_2, "Unknown", VAR_8));
 } else
  *VAR_6 = '\0';
 VAR_7->e_name = FUNC_4(VAR_9);
 if (VAR_7->e_name == ((void*)0))
  (*VAR_3->ndo_error)(VAR_3, "etheraddr_string: strdup(buf)");
 return (VAR_7->e_name);
}
