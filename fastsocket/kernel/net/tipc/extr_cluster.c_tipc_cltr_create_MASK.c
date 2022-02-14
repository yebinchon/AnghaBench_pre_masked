
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cluster {int highest_slave; struct _zone* owner; struct cluster* nodes; scalar_t__ highest_node; int addr; } ;
struct _zone {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 struct cluster* FUNC_1 (int,int,int ) ;
 int FUNC_2 (struct cluster*) ;
 struct cluster* FUNC_3 (int,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 int FUNC_5 (int ) ;
 struct cluster* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct _zone*,struct cluster*) ;
 struct _zone* FUNC_8 (int ) ;
 struct _zone* FUNC_9 (int ) ;
 int FUNC_10 (char*) ;

struct cluster *FUNC_11(u32 VAR_5)
{
 struct _zone *VAR_6;
 struct cluster *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_3(sizeof(*VAR_7), VAR_0);
 if (VAR_7 == ((void*)0)) {
  FUNC_10("Cluster creation failure, no memory\n");
  return ((void*)0);
 }

 VAR_7->addr = FUNC_4(FUNC_6(VAR_5), FUNC_5(VAR_5), 0);
 if (FUNC_0(VAR_5))
  VAR_8 = VAR_1 + VAR_4;
 else
  VAR_8 = VAR_3 + 1;

 VAR_7->nodes = FUNC_1(VAR_8 + 1, sizeof(void*), VAR_0);
 if (VAR_7->nodes == ((void*)0)) {
  FUNC_10("Cluster creation failure, no memory for node area\n");
  FUNC_2(VAR_7);
  return ((void*)0);
 }

 if (FUNC_0(VAR_5))
  VAR_2 = VAR_7->nodes;
 VAR_7->highest_slave = VAR_1 - 1;
 VAR_7->highest_node = 0;

 VAR_6 = FUNC_9(FUNC_6(VAR_5));
 if (!VAR_6) {
  VAR_6 = FUNC_8(VAR_5);
 }
 if (!VAR_6) {
  FUNC_2(VAR_7->nodes);
  FUNC_2(VAR_7);
  return ((void*)0);
 }

 FUNC_7(VAR_6, VAR_7);
 VAR_7->owner = VAR_6;
 return VAR_7;
}
