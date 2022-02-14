
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
struct aac_softc {scalar_t__ aac_commands; TYPE_4__* aac_queues; TYPE_2__** aac_qentries; TYPE_1__* aac_common; } ;
struct TYPE_8__ {int XferState; } ;
struct aac_fib {scalar_t__ data; TYPE_3__ Header; } ;
struct aac_command {struct aac_fib* cm_fib; } ;
struct TYPE_10__ {scalar_t__ size; scalar_t__ notify; } ;
struct TYPE_9__ {scalar_t__** qt_qindex; } ;
struct TYPE_7__ {scalar_t__ aq_fib_size; int aq_fib_addr; } ;
struct TYPE_6__ {struct aac_fib* ac_fibs; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;




 size_t VAR_3 ;
 int FUNC_0 (struct aac_softc*,scalar_t__) ;
 int VAR_4 ;
 char* VAR_5 ;
 TYPE_5__* VAR_6 ;
 int FUNC_1 (struct aac_softc*,char*,char*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct aac_softc *VAR_7, int VAR_8, u_int32_t *VAR_9,
  struct aac_fib **VAR_10)
{
 u_int32_t VAR_11, VAR_12;
 u_int32_t VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_1(VAR_7, VAR_5, "");


 VAR_11 = VAR_7->aac_queues->qt_qindex[VAR_8][VAR_3];
 VAR_12 = VAR_7->aac_queues->qt_qindex[VAR_8][VAR_0];


 if (VAR_12 == VAR_11) {
  VAR_14 = VAR_4;
  goto out;
 }


 if (VAR_11 >= VAR_6[VAR_8].size)
  VAR_11 = 0;

 VAR_15 = 0;
 if (VAR_12 == VAR_11 + 1)
  VAR_15++;


 if (VAR_12 >= VAR_6[VAR_8].size)
  VAR_12 = 0;


 *VAR_9 = (VAR_7->aac_qentries[VAR_8] + VAR_12)->aq_fib_size;

 switch (VAR_8) {
 case 129:
 case 131:






  VAR_13 = (VAR_7->aac_qentries[VAR_8] + VAR_12)->aq_fib_addr /
   sizeof(struct aac_fib);
  *VAR_10 = &VAR_7->aac_common->ac_fibs[VAR_13];
  break;

 case 128:
 case 130:
 {
  struct aac_command *VAR_16;
  VAR_13 = (VAR_7->aac_qentries[VAR_8] + VAR_12)->aq_fib_addr;
  VAR_16 = VAR_7->aac_commands + (VAR_13 >> 2);
  *VAR_10 = VAR_16->cm_fib;





  if (VAR_13 & 0x01) {
   (*VAR_10)->Header.XferState |= VAR_2;
   *((u_int32_t*)((*VAR_10)->data)) = VAR_1;
  }
  break;
 }
 default:
  FUNC_2("Invalid queue in aac_dequeue_fib()");
  break;
 }


 VAR_7->aac_queues->qt_qindex[VAR_8][VAR_0] = VAR_12 + 1;


 if (VAR_15 && (VAR_6[VAR_8].notify != 0))
  FUNC_0(VAR_7, VAR_6[VAR_8].notify);
 VAR_14 = 0;

out:
 return(VAR_14);
}
