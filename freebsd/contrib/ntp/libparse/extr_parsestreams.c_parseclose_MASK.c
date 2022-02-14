
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {void* q_ptr; } ;
typedef TYPE_1__ queue_t ;
struct TYPE_9__ {int parse_io; TYPE_1__* parse_dqueue; } ;
typedef TYPE_2__ parsestream_t ;
typedef void* caddr_t ;
struct TYPE_10__ {void* q_ptr; } ;


 int VAR_0 ;
 TYPE_6__* FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (void*,int) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int FUNC_4 (int ,char*) ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (unsigned long) ;

__attribute__((used)) static int
FUNC_7(
 queue_t *VAR_2,
 int VAR_3
 )
{
 register parsestream_t *VAR_4 = (parsestream_t *)(void *)VAR_2->q_ptr;
 register unsigned long VAR_5;

 FUNC_4(VAR_0,("parse: CLOSE\n"));

 VAR_5 = FUNC_5();

 if (VAR_4->parse_dqueue)
     FUNC_1(VAR_4->parse_dqueue, VAR_2);
 VAR_4->parse_dqueue = (queue_t *)0;

 (void) FUNC_6(VAR_5);

 FUNC_3(&VAR_4->parse_io);

 FUNC_2((caddr_t)VAR_4, sizeof(parsestream_t));

 VAR_2->q_ptr = (caddr_t)((void*)0);
 FUNC_0(VAR_2)->q_ptr = (caddr_t)((void*)0);




 return 0;
}
