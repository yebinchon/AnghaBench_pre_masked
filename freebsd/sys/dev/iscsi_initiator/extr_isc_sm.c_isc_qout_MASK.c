
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_19__ {scalar_t__ opcode; } ;
struct TYPE_18__ {scalar_t__ I; } ;
struct TYPE_20__ {TYPE_2__ data_out; TYPE_1__ bhs; } ;
struct TYPE_21__ {TYPE_3__ ipdu; } ;
struct TYPE_22__ {scalar_t__ len; TYPE_4__ pdu; } ;
typedef TYPE_5__ pduq_t ;
struct TYPE_23__ {int flags; int io_mtx; } ;
typedef TYPE_6__ isc_session_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_2 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_3 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_4 (TYPE_6__*,TYPE_5__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int,char*,TYPE_5__*) ;
 int FUNC_8 (int*) ;

int
FUNC_9(isc_session_t *VAR_3, pduq_t *VAR_4)
{
     int VAR_5 = 0;

     FUNC_0(8);

     if(VAR_4->len == 0 && (VAR_5 = FUNC_4(VAR_3, VAR_4)))
   return VAR_5;

     if(VAR_4->pdu.ipdu.bhs.I)
   FUNC_2(VAR_3, VAR_4);
     else
     if(VAR_4->pdu.ipdu.data_out.opcode == VAR_0)
   FUNC_3(VAR_3, VAR_4);
     else
   FUNC_1(VAR_3, VAR_4);

     FUNC_7(5, "enqued: pq=%p", VAR_4);

     FUNC_5(&VAR_3->io_mtx);
     VAR_3->flags |= VAR_1;
     if(VAR_3->flags & VAR_2)
   FUNC_8(&VAR_3->flags);
     FUNC_6(&VAR_3->io_mtx);

     return VAR_5;
}
