
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ out_port; int lock; } ;
typedef TYPE_1__ osm_log_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_4(osm_log_t * VAR_2)
{
 int VAR_3;

 if (VAR_2->out_port == VAR_1 || VAR_2->out_port == VAR_0)
  return 0;
 FUNC_0(&VAR_2->lock);
 FUNC_2(VAR_2->out_port);
 VAR_3 = FUNC_3(VAR_2);
 FUNC_1(&VAR_2->lock);
 return VAR_3;
}
