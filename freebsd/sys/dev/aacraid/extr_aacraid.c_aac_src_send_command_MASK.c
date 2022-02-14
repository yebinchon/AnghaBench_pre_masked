
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int64_t ;
typedef long u_int32_t ;
typedef int u_int16_t ;
struct aac_softc {int aac_max_msix; int aac_fibs_pushed_no; scalar_t__* aac_rrq_outstanding; scalar_t__ aac_vector_cap; int flags; scalar_t__ msi_enabled; } ;
struct aac_fib_xporthdr {int Handle; int HostAddress; int Size; } ;
struct aac_command {int cm_fibphys; TYPE_3__* cm_fib; } ;
struct TYPE_4__ {long TimeStamp; long SenderFibAddressHigh; } ;
struct TYPE_5__ {scalar_t__ Command; int Handle; int Size; long SenderFibAddress; TYPE_1__ u; int StructType; } ;
struct TYPE_6__ {TYPE_2__ Header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct aac_softc*,int ,long) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 char* VAR_7 ;
 int FUNC_1 (struct aac_command*) ;
 int FUNC_2 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct aac_softc *VAR_8, struct aac_command *VAR_9)
{
 struct aac_fib_xporthdr *VAR_10;
 u_int32_t VAR_11, VAR_12;
 u_int64_t VAR_13;

 FUNC_2(VAR_8, VAR_7, "send command (new comm. type1)");

 if (VAR_8->msi_enabled && VAR_9->cm_fib->Header.Command != VAR_6 &&
  VAR_8->aac_max_msix > 1) {
  u_int16_t VAR_14, VAR_15 = 0xffff;

  VAR_14 = VAR_8->aac_fibs_pushed_no % VAR_8->aac_max_msix;
  do {
   VAR_14 += 1;
   if (VAR_14 == VAR_8->aac_max_msix)
    VAR_14 = 1;
   if (VAR_8->aac_rrq_outstanding[VAR_14] <
    VAR_8->aac_vector_cap)
    break;
   if (0xffff == VAR_15)
    VAR_15 = VAR_14;
   else if (VAR_14 == VAR_15)
    break;
  } while (1);
  if (VAR_14 == VAR_15)
   VAR_14 = 0;
  VAR_8->aac_rrq_outstanding[VAR_14]++;
  if (VAR_8->aac_fibs_pushed_no == 0xffffffff)
   VAR_8->aac_fibs_pushed_no = 0;
  else
   VAR_8->aac_fibs_pushed_no++;

  VAR_9->cm_fib->Header.Handle += (VAR_14 << 16);
 }

 if (VAR_8->flags & VAR_2) {

  VAR_11 = (VAR_9->cm_fib->Header.Size + 127) / 128 - 1;

  VAR_13 = VAR_9->cm_fibphys;
  VAR_12 = (u_int32_t)(VAR_13 >> 32);
  if (VAR_12 == 0L) {
   VAR_9->cm_fib->Header.StructType = VAR_0;
   VAR_9->cm_fib->Header.u.TimeStamp = 0L;
  } else {
   VAR_9->cm_fib->Header.StructType = VAR_1;
   VAR_9->cm_fib->Header.u.SenderFibAddressHigh = VAR_12;
  }
  VAR_9->cm_fib->Header.SenderFibAddress = (u_int32_t)VAR_13;
 } else {

  VAR_11 = (sizeof(struct aac_fib_xporthdr) +
     VAR_9->cm_fib->Header.Size + 127) / 128 - 1;

  VAR_10 = (struct aac_fib_xporthdr *)
   ((unsigned char *)VAR_9->cm_fib - sizeof(struct aac_fib_xporthdr));
  VAR_10->Handle = VAR_9->cm_fib->Header.Handle;
  VAR_10->HostAddress = VAR_9->cm_fibphys;
  VAR_10->Size = VAR_9->cm_fib->Header.Size;
  VAR_13 = VAR_9->cm_fibphys - sizeof(struct aac_fib_xporthdr);
  VAR_12 = (u_int32_t)(VAR_13 >> 32);
 }

 if (VAR_11 > 31)
  VAR_11 = 31;
 FUNC_1(VAR_9);
 if (VAR_12) {
  FUNC_0(VAR_8, VAR_4, VAR_12);
  FUNC_0(VAR_8, VAR_5, (u_int32_t)VAR_13 + VAR_11);
 } else {
  FUNC_0(VAR_8, VAR_3, (u_int32_t)VAR_13 + VAR_11);
 }
 return 0;
}
