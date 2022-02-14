
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_15__ {int nvs_op; TYPE_1__* nvs_ops; } ;
typedef TYPE_2__ nvstream_t ;
struct TYPE_16__ {scalar_t__ nvl_priv; } ;
typedef TYPE_3__ nvlist_t ;
struct TYPE_14__ {int (* nvs_nvlist ) (TYPE_2__*,TYPE_3__*,size_t*) ;} ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (TYPE_2__*,TYPE_3__*,size_t*) ;
 int FUNC_3 (TYPE_2__*,TYPE_3__*,size_t*) ;

__attribute__((used)) static int
FUNC_4(nvstream_t *VAR_2, nvlist_t *VAR_3, size_t *VAR_4)
{
 int VAR_5;

 if (VAR_3->nvl_priv == 0)
  return (VAR_0);




 if ((VAR_5 = VAR_2->nvs_ops->nvs_nvlist(VAR_2, VAR_3, VAR_4)) != 0)
  return (VAR_5);

 switch (VAR_2->nvs_op) {
 case 129:
  VAR_5 = FUNC_1(VAR_2, VAR_3);
  break;

 case 130:
  VAR_5 = FUNC_0(VAR_2, VAR_3);
  break;

 case 128:
  VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_4);
  break;

 default:
  VAR_5 = VAR_1;
 }

 return (VAR_5);
}
