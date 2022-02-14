
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint16_t ;
typedef TYPE_2__* sessp ;
typedef TYPE_3__* priv_p ;
struct TYPE_9__ {TYPE_1__* sesshash; } ;
struct TYPE_8__ {int Session_ID; int hook; } ;
struct TYPE_7__ {int mtx; } ;


 int FUNC_0 (TYPE_2__*,int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_6(sessp VAR_1)
{
 const priv_p VAR_2 = FUNC_2(FUNC_1(VAR_1->hook));
 uint16_t VAR_3 = FUNC_3(VAR_1->Session_ID);

 FUNC_4(&VAR_2->sesshash[VAR_3].mtx);
 FUNC_0(VAR_1, VAR_0);
 FUNC_5(&VAR_2->sesshash[VAR_3].mtx);
}
