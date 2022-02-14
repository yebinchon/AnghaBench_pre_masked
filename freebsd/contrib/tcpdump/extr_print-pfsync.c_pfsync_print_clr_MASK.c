
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfsync_clr {char* ifname; int creatorid; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(netdissect_options *VAR_0, const void *VAR_1)
{
 const struct pfsync_clr *VAR_2 = VAR_1;

 FUNC_0((VAR_0, "\n\tcreatorid: %08x", FUNC_1(VAR_2->creatorid)));
 if (VAR_2->ifname[0] != '\0')
  FUNC_0((VAR_0, " interface: %s", VAR_2->ifname));
}
