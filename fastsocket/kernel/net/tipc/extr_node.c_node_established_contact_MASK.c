
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ supported; int acked; } ;
struct tipc_node {int addr; TYPE_1__ bclink; struct cluster* owner; } ;
struct cluster {int dummy; } ;
typedef int Handler ;


 int VAR_0 ;
 int FUNC_0 (char*,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (struct cluster*,int ,int,int ) ;
 int VAR_1 ;
 struct cluster* FUNC_5 (int ) ;
 struct cluster* FUNC_6 (int ) ;
 int FUNC_7 (struct cluster*,int ) ;
 int FUNC_8 (struct cluster*,int ) ;
 int VAR_2 ;
 int FUNC_9 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int *,int ) ;
 int FUNC_12 (struct tipc_node*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_13(struct tipc_node *VAR_7)
{
 struct cluster *VAR_8;

 FUNC_0("node_established_contact:-> %x\n", VAR_7->addr);
 if (!FUNC_12(VAR_7) && FUNC_1(VAR_7->addr)) {
  FUNC_9((Handler)VAR_4, VAR_7->addr);
 }


 VAR_7->bclink.acked = FUNC_3();

 if (FUNC_2(VAR_5))
  return;
 if (!FUNC_1(VAR_7->addr)) {

  VAR_8 = FUNC_6(VAR_5);
  if (!VAR_8)
   VAR_8 = FUNC_5(VAR_5);
  if (VAR_8)
   FUNC_4(VAR_8, VAR_7->addr, 1,
        VAR_3);
  return;
 }

 VAR_8 = VAR_7->owner;
 if (FUNC_2(VAR_7->addr)) {

  FUNC_4(VAR_8, VAR_7->addr, 1, VAR_3);
  FUNC_7(VAR_8, VAR_7->addr);
  return;
 }

 if (VAR_7->bclink.supported) {
  FUNC_11(&VAR_1, VAR_7->addr);
  if (VAR_7->addr < VAR_5)
   VAR_6++;
 }


 FUNC_10(VAR_7->addr);
 FUNC_8(VAR_8, VAR_7->addr);
 FUNC_4(VAR_8, VAR_7->addr, VAR_0,
      VAR_2);
}
