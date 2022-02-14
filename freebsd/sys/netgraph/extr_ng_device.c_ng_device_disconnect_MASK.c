
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* priv_p ;
typedef int hook_p ;
struct TYPE_6__ {int ifq_mtx; } ;
struct TYPE_5__ {int unit; TYPE_4__ readq; int ngd_mtx; int ngddev; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_1__* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_8(hook_p VAR_3)
{
 priv_p VAR_4 = FUNC_2(FUNC_1(VAR_3));

 VAR_0;

 FUNC_3(VAR_4->ngddev);
 FUNC_6(&VAR_4->ngd_mtx);

 FUNC_0(&VAR_4->readq);
 FUNC_6(&(VAR_4)->readq.ifq_mtx);

 FUNC_5(VAR_2, VAR_4->unit);

 FUNC_4(VAR_4, VAR_1);

 FUNC_7(FUNC_1(VAR_3));

 return(0);
}
