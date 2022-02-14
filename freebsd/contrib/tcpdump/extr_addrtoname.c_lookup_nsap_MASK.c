
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
typedef int u_char ;
struct enamemem {int* e_nsap; int e_addr0; int e_addr1; int e_addr2; struct enamemem* e_nxt; } ;
struct TYPE_5__ {int (* ndo_error ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;
 int FUNC_3 (char*,char const*,int) ;
 struct enamemem* VAR_1 ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*) ;

__attribute__((used)) static inline struct enamemem *
FUNC_6(netdissect_options *VAR_2, register const u_char *VAR_3,
     register u_int VAR_4)
{
 register u_int VAR_5, VAR_6, VAR_7;
 struct enamemem *VAR_8;
 const u_char *VAR_9;

 if (VAR_4 > 6) {
  VAR_9 = VAR_3 + VAR_4 - 6;
  VAR_7 = (VAR_9[0] << 8) | VAR_9[1];
  VAR_6 = (VAR_9[2] << 8) | VAR_9[3];
  VAR_5 = (VAR_9[4] << 8) | VAR_9[5];
 }
 else
  VAR_5 = VAR_6 = VAR_7 = 0;

 VAR_8 = &VAR_1[(VAR_5 ^ VAR_6) & (VAR_0-1)];
 while (VAR_8->e_nxt)
  if (VAR_4 == VAR_8->e_nsap[0] &&
      VAR_8->e_addr0 == VAR_5 &&
      VAR_8->e_addr1 == VAR_6 &&
      VAR_8->e_addr2 == VAR_7 &&
      FUNC_2((const char *)VAR_3,
   (char *)&(VAR_8->e_nsap[1]), VAR_4) == 0)
   return VAR_8;
  else
   VAR_8 = VAR_8->e_nxt;
 VAR_8->e_addr0 = VAR_5;
 VAR_8->e_addr1 = VAR_6;
 VAR_8->e_addr2 = VAR_7;
 VAR_8->e_nsap = (u_char *)FUNC_1(VAR_4 + 1);
 if (VAR_8->e_nsap == ((void*)0))
  (*VAR_2->ndo_error)(VAR_2, "lookup_nsap: malloc");
 VAR_8->e_nsap[0] = (u_char)VAR_4;
 FUNC_3((char *)&VAR_8->e_nsap[1], (const char *)VAR_3, VAR_4);
 VAR_8->e_nxt = (struct enamemem *)FUNC_0(1, sizeof(*VAR_8));
 if (VAR_8->e_nxt == ((void*)0))
  (*VAR_2->ndo_error)(VAR_2, "lookup_nsap: calloc");

 return VAR_8;
}
