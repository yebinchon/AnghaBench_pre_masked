
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct enamemem {int e_addr0; int e_addr1; int e_addr2; struct enamemem* e_nxt; } ;
struct TYPE_4__ {int (* ndo_error ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 struct enamemem* VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static inline struct enamemem *
FUNC_2(netdissect_options *VAR_2, const u_char *VAR_3)
{
 register u_int VAR_4, VAR_5, VAR_6;
 struct enamemem *VAR_7;

 VAR_6 = (VAR_3[0] << 8) | VAR_3[1];
 VAR_5 = (VAR_3[2] << 8) | VAR_3[3];
 VAR_4 = (VAR_3[4] << 8) | VAR_3[5];

 VAR_7 = &VAR_1[(VAR_4 ^ VAR_5) & (VAR_0-1)];
 while (VAR_7->e_nxt)
  if (VAR_7->e_addr0 == VAR_4 &&
      VAR_7->e_addr1 == VAR_5 &&
      VAR_7->e_addr2 == VAR_6)
   return VAR_7;
  else
   VAR_7 = VAR_7->e_nxt;
 VAR_7->e_addr0 = VAR_4;
 VAR_7->e_addr1 = VAR_5;
 VAR_7->e_addr2 = VAR_6;
 VAR_7->e_nxt = (struct enamemem *)FUNC_0(1, sizeof(*VAR_7));
 if (VAR_7->e_nxt == ((void*)0))
  (*VAR_2->ndo_error)(VAR_2, "lookup_emem: calloc");

 return VAR_7;
}
