
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct pcap_etherent {char* name; scalar_t__ addr; } ;
struct etherlist {int * name; scalar_t__ addr; } ;
struct ether_addr {int dummy; } ;
struct enamemem {int * e_name; } ;
struct TYPE_6__ {int (* ndo_error ) (TYPE_1__*,char*) ;} ;
typedef TYPE_1__ netdissect_options ;
typedef int FILE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*,struct ether_addr const*) ;
 struct etherlist* VAR_1 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int ,char*) ;
 struct enamemem* FUNC_3 (TYPE_1__*,scalar_t__) ;
 struct pcap_etherent* FUNC_4 (int *) ;
 void* FUNC_5 (char*) ;
 int FUNC_6 (TYPE_1__*,char*) ;
 int FUNC_7 (TYPE_1__*,char*) ;

__attribute__((used)) static void
FUNC_8(netdissect_options *VAR_2)
{
 register const struct etherlist *VAR_3;
 register struct enamemem *VAR_4;



 register struct pcap_etherent *VAR_5;
 register FILE *VAR_6;


 VAR_6 = FUNC_2(VAR_0, "r");
 if (VAR_6 != ((void*)0)) {
  while ((VAR_5 = FUNC_4(VAR_6)) != ((void*)0)) {
   VAR_4 = FUNC_3(VAR_2, VAR_5->addr);
   VAR_4->e_name = FUNC_5(VAR_5->name);
   if (VAR_4->e_name == ((void*)0))
    (*VAR_2->ndo_error)(VAR_2,
        "init_etherarray: strdup(ep->addr)");
  }
  (void)FUNC_1(VAR_6);
 }



 for (VAR_3 = VAR_1; VAR_3->name != ((void*)0); ++VAR_3) {
  VAR_4 = FUNC_3(VAR_2, VAR_3->addr);

  if (VAR_4->e_name != ((void*)0))
   continue;
  VAR_4->e_name = VAR_3->name;
 }
}
