
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int plat_buf ;
struct TYPE_4__ {char* name; scalar_t__ set; int clat_plen; int plat_plen; int flags; int plat_prefix; int clat_prefix; } ;
typedef TYPE_1__ ipfw_nat64clat_cfg ;
typedef int clat_buf ;
struct TYPE_5__ {scalar_t__ use_set; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_3__ VAR_5 ;
 int FUNC_0 (int ,int *,char*,int) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(ipfw_nat64clat_cfg *VAR_6, const char *VAR_7, uint8_t VAR_8)
{
 char VAR_9[VAR_2], VAR_10[VAR_2];

 if (VAR_7 != ((void*)0) && FUNC_2(VAR_6->name, VAR_7) != 0)
  return (VAR_1);

 if (VAR_5.use_set != 0 && VAR_6->set != VAR_8)
  return (VAR_1);

 if (VAR_5.use_set != 0 || VAR_6->set != 0)
  FUNC_1("set %u ", VAR_6->set);

 FUNC_0(VAR_0, &VAR_6->clat_prefix, VAR_10, sizeof(VAR_10));
 FUNC_0(VAR_0, &VAR_6->plat_prefix, VAR_9, sizeof(VAR_9));
 FUNC_1("nat64clat %s clat_prefix %s/%u plat_prefix %s/%u",
     VAR_6->name, VAR_10, VAR_6->clat_plen, VAR_9, VAR_6->plat_plen);
 if (VAR_6->flags & VAR_4)
  FUNC_1(" log");
 if (VAR_6->flags & VAR_3)
  FUNC_1(" allow_private");
 FUNC_1("\n");
 return (0);
}
