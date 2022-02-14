
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct protoidmem {int p_oui; int p_proto; struct protoidmem* p_nxt; } ;
struct TYPE_4__ {int (* ndo_error ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 struct protoidmem* VAR_1 ;
 int FUNC_1 (TYPE_1__*,char*) ;

__attribute__((used)) static inline struct protoidmem *
FUNC_2(netdissect_options *VAR_2, const u_char *VAR_3)
{
 register u_int VAR_4, VAR_5;
 struct protoidmem *VAR_6;


 VAR_4 = (((VAR_3[0] << 8) + VAR_3[1]) << 8) + VAR_3[2];
 VAR_5 = (VAR_3[3] << 8) + VAR_3[4];


 VAR_6 = &VAR_1[(VAR_4 ^ VAR_5) & (VAR_0-1)];
 while (VAR_6->p_nxt)
  if (VAR_6->p_oui == VAR_4 && VAR_6->p_proto == VAR_5)
   return VAR_6;
  else
   VAR_6 = VAR_6->p_nxt;
 VAR_6->p_oui = VAR_4;
 VAR_6->p_proto = VAR_5;
 VAR_6->p_nxt = (struct protoidmem *)FUNC_0(1, sizeof(*VAR_6));
 if (VAR_6->p_nxt == ((void*)0))
  (*VAR_2->ndo_error)(VAR_2, "lookup_protoid: calloc");

 return VAR_6;
}
