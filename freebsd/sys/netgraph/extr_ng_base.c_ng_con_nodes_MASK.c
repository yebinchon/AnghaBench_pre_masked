
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int node_p ;
typedef int item_p ;
typedef TYPE_1__* hook_p ;
struct TYPE_9__ {int hk_refs; int * hk_node; struct TYPE_9__* hk_peer; int hk_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char const*,TYPE_1__**) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (TYPE_1__*) ;
 int * FUNC_7 (int ,char const*) ;
 int FUNC_8 (int ,TYPE_1__*,int ,int *,int *,int ,int ) ;
 int FUNC_9 (char*,int) ;
 int FUNC_10 (int ,char const*,int ) ;

__attribute__((used)) static int
FUNC_11(item_p VAR_7, node_p VAR_8, const char *VAR_9,
    node_p VAR_10, const char *VAR_11)
{
 int VAR_12;
 hook_p VAR_13;
 hook_p VAR_14;

 if (FUNC_7(VAR_10, VAR_11) != ((void*)0)) {
  return(VAR_0);
 }
 if ((VAR_12 = FUNC_5(VAR_8, VAR_9, &VAR_13)))
  return (VAR_12);

 FUNC_0(VAR_14);
 if (VAR_14 == ((void*)0)) {
  FUNC_4();
  FUNC_6(VAR_13);
  FUNC_3(VAR_13);
  return (VAR_1);
 }
 VAR_14->hk_refs = 1;
 VAR_14->hk_flags = VAR_2;
 VAR_14->hk_peer = VAR_13;
 VAR_13->hk_peer = VAR_14;
 FUNC_2(VAR_13);
 FUNC_2(VAR_14);
 VAR_14->hk_node = &VAR_6;
 FUNC_10(FUNC_1(VAR_14), VAR_11, VAR_3);






 if ((VAR_12 = FUNC_8(VAR_10, VAR_14, VAR_7, &VAR_5, ((void*)0), 0,
     VAR_4))) {
  FUNC_9("failed in ng_con_nodes(): %d\n", VAR_12);
  FUNC_6(VAR_13);
 }

 FUNC_3(VAR_13);
 FUNC_3(VAR_14);
 return (VAR_12);
}
