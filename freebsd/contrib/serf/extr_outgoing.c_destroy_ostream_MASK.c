
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * ostream_tail; int * ostream_head; } ;
typedef TYPE_1__ serf_connection_t ;


 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(serf_connection_t *VAR_0)
{
    if (VAR_0->ostream_head != ((void*)0)) {
        FUNC_0(VAR_0->ostream_head);
        VAR_0->ostream_head = ((void*)0);
        VAR_0->ostream_tail = ((void*)0);
    }
}
