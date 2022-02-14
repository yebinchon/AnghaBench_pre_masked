
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_7__ {char* name; } ;
struct TYPE_6__ {char* name; } ;
struct TYPE_8__ {char* name; scalar_t__ set; int plen6; int flags; int prefix6; TYPE_2__ ntlv6; TYPE_1__ ntlv4; } ;
typedef TYPE_3__ ipfw_nat64stl_cfg ;
typedef int abuf ;
struct TYPE_9__ {scalar_t__ use_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__ VAR_5 ;
 int FUNC_0 (int ,int *,char*,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(ipfw_nat64stl_cfg *VAR_6, const char *VAR_7, uint8_t VAR_8)
{
 char VAR_9[VAR_2];

 if (VAR_7 != ((void*)0) && FUNC_2(VAR_6->name, VAR_7) != 0)
  return (VAR_1);

 if (VAR_5.use_set != 0 && VAR_6->set != VAR_8)
  return (VAR_1);

 if (VAR_5.use_set != 0 || VAR_6->set != 0)
  FUNC_1("set %u ", VAR_6->set);

 FUNC_1("nat64stl %s table4 %s table6 %s",
     VAR_6->name, VAR_6->ntlv4.name, VAR_6->ntlv6.name);
 FUNC_0(VAR_0, &VAR_6->prefix6, VAR_9, sizeof(VAR_9));
 FUNC_1(" prefix6 %s/%u", VAR_9, VAR_6->plen6);
 if (VAR_6->flags & VAR_4)
  FUNC_1(" log");
 if (VAR_6->flags & VAR_3)
  FUNC_1(" allow_private");
 FUNC_1("\n");
 return (0);
}
