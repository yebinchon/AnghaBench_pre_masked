
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ib_portid_t ;
struct TYPE_3__ {int portnum; int physstate; int state; int lid; int lmc; } ;
typedef TYPE_1__ Port ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int ,int,int ,int ,int ) ;
 int FUNC_1 (void*,int ,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (void*,int *,int ,int,int ,int ) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int FUNC_4(Port * VAR_7, int VAR_8, ib_portid_t * VAR_9)
{
 char VAR_10[64] = { 0 };
 void *VAR_11 = VAR_10;

 VAR_7->portnum = VAR_8;

 if (!FUNC_3(VAR_11, VAR_9, VAR_0, VAR_8, VAR_6,
      VAR_5))
  return -1;

 FUNC_1(VAR_11, VAR_1, &VAR_7->lid);
 FUNC_1(VAR_11, VAR_2, &VAR_7->lmc);
 FUNC_1(VAR_11, VAR_4, &VAR_7->state);
 FUNC_1(VAR_11, VAR_3, &VAR_7->physstate);

 FUNC_0("portid %s portnum %d: lid %d state %d physstate %d",
  FUNC_2(VAR_9), VAR_8, VAR_7->lid, VAR_7->state,
  VAR_7->physstate);
 return 1;
}
