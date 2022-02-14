
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
typedef int u_char ;
struct hostent {int h_name; } ;
struct hnamemem {int addr; char const* name; struct hnamemem* nxt; } ;
struct TYPE_6__ {int (* ndo_error ) (TYPE_1__*,char*) ;scalar_t__ ndo_Nflag; int ndo_nflag; } ;
typedef TYPE_1__ netdissect_options ;
typedef int addr ;


 int VAR_0 ;
 int VAR_1 ;
 struct hostent* FUNC_0 (int *,char*,int,int ) ;
 int * VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct hostent* FUNC_1 (char*,int,int ) ;
 struct hnamemem* VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int*,int const*,int) ;
 struct hnamemem* FUNC_4 (TYPE_1__*) ;
 char* FUNC_5 (char const*,char) ;
 void* FUNC_6 (int ) ;
 int FUNC_7 (TYPE_1__*,char*) ;
 int FUNC_8 (TYPE_1__*,char*) ;

const char *
FUNC_9(netdissect_options *VAR_6, const u_char *VAR_7)
{
 register struct hostent *VAR_8;
 uint32_t VAR_9;
 struct hnamemem *VAR_10;

 FUNC_3(&VAR_9, VAR_7, sizeof(VAR_9));
 VAR_10 = &VAR_5[VAR_9 & (VAR_1-1)];
 for (; VAR_10->nxt; VAR_10 = VAR_10->nxt) {
  if (VAR_10->addr == VAR_9)
   return (VAR_10->name);
 }
 VAR_10->addr = VAR_9;
 VAR_10->nxt = FUNC_4(VAR_6);
 if (!VAR_6->ndo_nflag &&
     (VAR_9 & VAR_4) == VAR_3) {






   VAR_8 = FUNC_1((char *)&VAR_9, 4, VAR_0);
  if (VAR_8) {
   char *VAR_11;

   VAR_10->name = FUNC_6(VAR_8->h_name);
   if (VAR_10->name == ((void*)0))
    (*VAR_6->ndo_error)(VAR_6,
        "getname: strdup(hp->h_name)");
   if (VAR_6->ndo_Nflag) {

    VAR_11 = FUNC_5(VAR_10->name, '.');
    if (VAR_11)
     *VAR_11 = '\0';
   }
   return (VAR_10->name);
  }
 }
 VAR_10->name = FUNC_6(FUNC_2(VAR_9));
 if (VAR_10->name == ((void*)0))
  (*VAR_6->ndo_error)(VAR_6, "getname: strdup(intoa(addr))");
 return (VAR_10->name);
}
