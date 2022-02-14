
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_int64_t ;
typedef size_t u_int16_t ;
struct tws_trace_rec {int linenum; void* val2; void* val1; int desc; int func; int fname; } ;
struct TYPE_2__ {size_t head; size_t tail; size_t volatile depth; int overflow; scalar_t__ q; } ;
struct tws_softc {scalar_t__ is64bit; TYPE_1__ trace_q; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,char const*,char const*,char*,void*,void*) ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (int ,char const*,int ) ;

void
FUNC_3(const char *VAR_3, const char *VAR_4, int VAR_5,
          struct tws_softc *VAR_6, char *VAR_7, u_int64_t VAR_8, u_int64_t VAR_9)
{


    struct tws_trace_rec *VAR_10 = (struct tws_trace_rec *)VAR_6->trace_q.q;
    volatile u_int16_t VAR_11, VAR_12;
    char VAR_13[256];

    VAR_11 = VAR_6->trace_q.head;
    VAR_12 = VAR_6->trace_q.tail;



    FUNC_2(VAR_10[VAR_12].fname, VAR_3, VAR_1);
    FUNC_2(VAR_10[VAR_12].func, VAR_4, VAR_2);
    VAR_10[VAR_12].linenum = VAR_5;
    FUNC_2(VAR_10[VAR_12].desc, VAR_7, VAR_0);
    VAR_10[VAR_12].val1 = VAR_8;
    VAR_10[VAR_12].val2 = VAR_9;

    VAR_12 = (VAR_12+1) % VAR_6->trace_q.depth;

    if ( VAR_11 == VAR_12 ) {
        VAR_6->trace_q.overflow = 1;
        VAR_6->trace_q.head = (VAR_11+1) % VAR_6->trace_q.depth;
    }
    VAR_6->trace_q.tail = VAR_12;





    if ( VAR_6->is64bit )
        FUNC_1(VAR_13, "%05d:%s::%s :%s: 0x%016lx : 0x%016lx \n");
    else
        FUNC_1(VAR_13, "%05d:%s::%s :%s: 0x%016llx : 0x%016llx \n");





    FUNC_0(VAR_13, VAR_5, VAR_3, VAR_4, VAR_7, VAR_8, VAR_9);
}
