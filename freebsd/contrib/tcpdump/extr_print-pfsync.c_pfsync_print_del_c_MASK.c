
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct pfsync_del_c {int creatorid; int id; } ;
typedef int netdissect_options ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(netdissect_options *VAR_0, const void *VAR_1)
{
 const struct pfsync_del_c *VAR_2 = VAR_1;

 FUNC_0((VAR_0, "\n\tid: %016jx creatorid: %08x",
     (uintmax_t)FUNC_1(VAR_2->id), FUNC_2(VAR_2->creatorid)));
}
