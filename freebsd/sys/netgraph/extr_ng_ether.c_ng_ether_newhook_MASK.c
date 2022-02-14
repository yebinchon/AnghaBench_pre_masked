
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* priv_p ;
typedef int node_p ;
typedef int * hook_p ;
struct TYPE_5__ {TYPE_1__* ifp; int * upper; int * orphan; int * lower; } ;
struct TYPE_4__ {scalar_t__ if_hwassist; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *) ;
 TYPE_2__* FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int
FUNC_5(node_p VAR_8, hook_p VAR_9, const char *VAR_10)
{
 const priv_p VAR_11 = FUNC_3(VAR_8);
 hook_p *VAR_12;


 if (FUNC_4(VAR_10, VAR_2) == 0)
  VAR_10 = VAR_3;


 if (FUNC_4(VAR_10, VAR_5) == 0) {
  VAR_12 = &VAR_11->upper;
  FUNC_1(VAR_9, VAR_7);
  FUNC_2(VAR_9);
 } else if (FUNC_4(VAR_10, VAR_3) == 0) {
  VAR_12 = &VAR_11->lower;
  FUNC_1(VAR_9, VAR_6);
 } else if (FUNC_4(VAR_10, VAR_4) == 0) {
  VAR_12 = &VAR_11->orphan;
  FUNC_1(VAR_9, VAR_6);
 } else
  return (VAR_0);


 if (*VAR_12 != ((void*)0))
  return (VAR_1);


 if (VAR_12 == &VAR_11->upper)
  VAR_11->ifp->if_hwassist = 0;
 FUNC_0(VAR_9);

 *VAR_12 = VAR_9;
 return (0);
}
