
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef void irda_queue_t ;
struct TYPE_4__ {int hb_spinlock; } ;
typedef TYPE_1__ hashbin_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,long,char const*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

void* FUNC_3( hashbin_t* VAR_0, long VAR_1, const char* VAR_2 )
{
 unsigned long VAR_3 = 0;
 irda_queue_t* VAR_4;


 FUNC_1(&VAR_0->hb_spinlock, VAR_3);




 VAR_4 = (irda_queue_t* ) FUNC_0( VAR_0, VAR_1, VAR_2 );


 FUNC_2(&VAR_0->hb_spinlock, VAR_3);

 return VAR_4;
}
