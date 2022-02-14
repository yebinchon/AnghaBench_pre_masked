
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int node_p ;
typedef int hook_p ;
typedef TYPE_2__* hinfo_p ;
struct TYPE_7__ {TYPE_1__* prog; int hook; } ;
struct TYPE_6__ {int thisHook; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,TYPE_2__*) ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_3 (int,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ,char const*,int) ;

__attribute__((used)) static int
FUNC_6(node_p VAR_6, hook_p VAR_7, const char *VAR_8)
{
 hinfo_p VAR_9;
 hook_p VAR_10;
 int VAR_11;


 VAR_9 = FUNC_3(sizeof(*VAR_9), VAR_1, VAR_2 | VAR_3);
 if (VAR_9 == ((void*)0))
  return (VAR_0);
 VAR_9->hook = VAR_7;
 FUNC_0(VAR_7, VAR_9);


 FUNC_1(VAR_6, VAR_4, VAR_7, VAR_10);


 if ((VAR_11 = FUNC_4(VAR_7, &VAR_5)) != 0) {
  FUNC_2(VAR_9, VAR_1);
  FUNC_0(VAR_7, ((void*)0));
  return (VAR_11);
 }


 FUNC_5(VAR_9->prog->thisHook, VAR_8, sizeof(VAR_9->prog->thisHook));
 return (0);
}
