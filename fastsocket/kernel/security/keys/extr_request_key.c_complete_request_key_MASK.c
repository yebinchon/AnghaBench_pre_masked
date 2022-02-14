
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct key_construction {TYPE_1__* authkey; TYPE_1__* key; } ;
struct TYPE_5__ {int serial; } ;


 int FUNC_0 (char*,int ,int ,int) ;
 int FUNC_1 (TYPE_1__*,int ,int *,TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (struct key_construction*) ;

void FUNC_5(struct key_construction *VAR_1, int VAR_2)
{
 FUNC_0("{%d,%d},%d", VAR_1->key->serial, VAR_1->authkey->serial, VAR_2);

 if (VAR_2 < 0)
  FUNC_1(VAR_1->key, VAR_0, ((void*)0),
        VAR_1->authkey);
 else
  FUNC_3(VAR_1->authkey);

 FUNC_2(VAR_1->key);
 FUNC_2(VAR_1->authkey);
 FUNC_4(VAR_1);
}
