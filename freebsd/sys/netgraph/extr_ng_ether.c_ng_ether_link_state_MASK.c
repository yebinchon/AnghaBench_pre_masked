
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ng_mesg {int dummy; } ;
struct ifnet {int dummy; } ;
typedef TYPE_1__* priv_p ;
typedef int node_p ;
struct TYPE_3__ {int * orphan; int * lower; } ;


 int FUNC_0 (struct ifnet*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ng_mesg*,int ,int,int ,int ) ;
 TYPE_1__* FUNC_2 (int const) ;
 int FUNC_3 (int,int const,struct ng_mesg*,int *,int ) ;

__attribute__((used)) static void
FUNC_4(struct ifnet *VAR_6, int VAR_7)
{
 const node_p VAR_8 = FUNC_0(VAR_6);
 const priv_p VAR_9 = FUNC_2(VAR_8);
 struct ng_mesg *VAR_10;
 int VAR_11, VAR_12 = 0;

 if (VAR_7 == VAR_1)
  VAR_11 = VAR_5;
 else if (VAR_7 == VAR_0)
  VAR_11 = VAR_4;
 else
  return;

 if (VAR_9->lower != ((void*)0)) {
  FUNC_1(VAR_10, VAR_3, VAR_11, 0, VAR_2);
  if (VAR_10 != ((void*)0))
   FUNC_3(VAR_12, VAR_8, VAR_10, VAR_9->lower, 0);
 }
 if (VAR_9->orphan != ((void*)0)) {
  FUNC_1(VAR_10, VAR_3, VAR_11, 0, VAR_2);
  if (VAR_10 != ((void*)0))
   FUNC_3(VAR_12, VAR_8, VAR_10, VAR_9->orphan, 0);
 }
}
