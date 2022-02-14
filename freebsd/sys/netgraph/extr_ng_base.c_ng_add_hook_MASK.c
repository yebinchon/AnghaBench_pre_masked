
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef TYPE_2__* node_p ;
typedef TYPE_3__* hook_p ;
struct TYPE_17__ {int hk_refs; TYPE_2__* hk_node; int * hk_peer; int hk_flags; } ;
struct TYPE_16__ {int nd_numhooks; int nd_hooks; TYPE_1__* nd_type; } ;
struct TYPE_15__ {int (* newhook ) (TYPE_2__*,TYPE_3__*,char const*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,TYPE_3__*,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_4 ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 () ;
 int VAR_5 ;
 int VAR_6 ;
 int * FUNC_7 (TYPE_2__*,char const*) ;
 int FUNC_8 (int ,char const*,int ) ;
 int FUNC_9 (TYPE_2__*,TYPE_3__*,char const*) ;

__attribute__((used)) static int
FUNC_10(node_p VAR_7, const char *VAR_8, hook_p *VAR_9)
{
 hook_p VAR_10;
 int VAR_11 = 0;


 if (VAR_8 == ((void*)0)) {
  FUNC_6();
  return (VAR_1);
 }
 if (FUNC_7(VAR_7, VAR_8) != ((void*)0)) {
  FUNC_6();
  return (VAR_0);
 }


 FUNC_1(VAR_10);
 if (VAR_10 == ((void*)0)) {
  FUNC_6();
  return (VAR_2);
 }
 VAR_10->hk_refs = 1;
 VAR_10->hk_flags = VAR_3;
 VAR_10->hk_peer = &VAR_6;
 VAR_10->hk_node = VAR_7;
 FUNC_5(VAR_7);


 FUNC_8(FUNC_2(VAR_10), VAR_8, VAR_4);





 if (VAR_7->nd_type->newhook != ((void*)0)) {
  if ((VAR_11 = (*VAR_7->nd_type->newhook)(VAR_7, VAR_10, VAR_8))) {
   FUNC_4(VAR_10);
   return (VAR_11);
  }
 }




 FUNC_0(&VAR_7->nd_hooks, VAR_10, VAR_5);
 VAR_7->nd_numhooks++;
 FUNC_3(VAR_10);

 if (VAR_9)
  *VAR_9 = VAR_10;
 return (0);
}
