
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct aac_softc {TYPE_4__* aac_queues; TYPE_3__** aac_qentries; } ;
struct aac_command {TYPE_2__* cm_fib; } ;
struct TYPE_10__ {scalar_t__ size; scalar_t__ notify; } ;
struct TYPE_9__ {scalar_t__** qt_qindex; } ;
struct TYPE_8__ {scalar_t__ aq_fib_addr; scalar_t__ aq_fib_size; } ;
struct TYPE_6__ {scalar_t__ Size; scalar_t__ ReceiverFibAddress; } ;
struct TYPE_7__ {TYPE_1__ Header; } ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct aac_softc*,scalar_t__) ;
 int VAR_2 ;
 char* VAR_3 ;
 int FUNC_1 (struct aac_command*) ;
 TYPE_5__* VAR_4 ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct aac_softc *VAR_5, int VAR_6, struct aac_command *VAR_7)
{
 u_int32_t VAR_8, VAR_9;
 int VAR_10;
 u_int32_t VAR_11;
 u_int32_t VAR_12;

 FUNC_2(VAR_5, VAR_3, "");

 VAR_11 = VAR_7->cm_fib->Header.Size;
 VAR_12 = VAR_7->cm_fib->Header.ReceiverFibAddress;


 VAR_8 = VAR_5->aac_queues->qt_qindex[VAR_6][VAR_1];
 VAR_9 = VAR_5->aac_queues->qt_qindex[VAR_6][VAR_0];


 if (VAR_8 >= VAR_4[VAR_6].size)
  VAR_8 = 0;


 if ((VAR_8 + 1) == VAR_9) {
  VAR_10 = VAR_2;
  goto out;
 }





 FUNC_1(VAR_7);


 (VAR_5->aac_qentries[VAR_6] + VAR_8)->aq_fib_size = VAR_11;
 (VAR_5->aac_qentries[VAR_6] + VAR_8)->aq_fib_addr = VAR_12;


 VAR_5->aac_queues->qt_qindex[VAR_6][VAR_1] = VAR_8 + 1;


 if (VAR_4[VAR_6].notify != 0)
  FUNC_0(VAR_5, VAR_4[VAR_6].notify);

 VAR_10 = 0;

out:
 return(VAR_10);
}
