
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef void irda_queue_t ;
struct TYPE_5__ {int hb_spinlock; void* hb_current; } ;
typedef TYPE_1__ hashbin_t ;


 scalar_t__ FUNC_0 (TYPE_1__*,long,char const*) ;
 void* FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *,unsigned long) ;

void* FUNC_4( hashbin_t* VAR_0, long VAR_1, const char* VAR_2,
    void ** VAR_3)
{
 unsigned long VAR_4 = 0;
 irda_queue_t* VAR_5;


 FUNC_2(&VAR_0->hb_spinlock, VAR_4);






 VAR_5 = (irda_queue_t* ) FUNC_0( VAR_0, VAR_1, VAR_2 );




 if(VAR_5) {
  VAR_0->hb_current = VAR_5;
  *VAR_3 = FUNC_1( VAR_0 );
 } else
  *VAR_3 = ((void*)0);


 FUNC_3(&VAR_0->hb_spinlock, VAR_4);

 return VAR_5;
}
