
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {void* q_ptr; } ;
typedef TYPE_1__ queue_t ;
struct TYPE_10__ {int parse_io; TYPE_1__* parse_dqueue; } ;
typedef TYPE_2__ parsestream_t ;
typedef void* caddr_t ;
struct TYPE_11__ {void* q_ptr; } ;


 int VAR_0 ;
 TYPE_7__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_1__*) ;
 unsigned long FUNC_6 () ;
 int FUNC_7 (unsigned long) ;

__attribute__((used)) static int
FUNC_8(
    queue_t *VAR_1,
    int VAR_2
    )
{
 register parsestream_t *VAR_3 = (parsestream_t *)VAR_1->q_ptr;
 register unsigned long VAR_4;

 FUNC_4(VAR_0, "parse: CLOSE\n");

 FUNC_5(VAR_1);

 VAR_4 = FUNC_6();

 if (VAR_3->parse_dqueue)
     FUNC_1(VAR_3->parse_dqueue, VAR_1);
 VAR_3->parse_dqueue = (queue_t *)0;

 (void) FUNC_7(VAR_4);

 FUNC_3(&VAR_3->parse_io);

 FUNC_2((caddr_t)VAR_3, sizeof(parsestream_t));

 VAR_1->q_ptr = (caddr_t)((void*)0);
 FUNC_0(VAR_1)->q_ptr = (caddr_t)((void*)0);

 return 0;
}
