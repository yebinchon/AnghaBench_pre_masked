
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_10__ {int addr_err; int parity_err; int uncorr_err; int corr_err; } ;
struct mc7 {scalar_t__ offset; int name; TYPE_2__ stats; TYPE_3__* adapter; } ;
struct TYPE_9__ {scalar_t__ rev; } ;
struct TYPE_11__ {TYPE_1__ params; } ;
typedef TYPE_3__ adapter_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (TYPE_3__*,char*,int ,int,...) ;
 int FUNC_1 (TYPE_3__*,char*,int ,int,int,int,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int VAR_13 ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,scalar_t__) ;
 int FUNC_5 (TYPE_3__*,scalar_t__,int) ;

__attribute__((used)) static void FUNC_6(struct mc7 *VAR_14)
{
 adapter_t *VAR_15 = VAR_14->adapter;
 u32 VAR_16 = FUNC_4(VAR_15, VAR_14->offset + VAR_5);

 if (VAR_16 & VAR_11) {
  VAR_14->stats.corr_err++;
  FUNC_1(VAR_15, "%s MC7 correctable error at addr 0x%x, "
   "data 0x%x 0x%x 0x%x\n", VAR_14->name,
   FUNC_4(VAR_15, VAR_14->offset + VAR_0),
   FUNC_4(VAR_15, VAR_14->offset + VAR_1),
   FUNC_4(VAR_15, VAR_14->offset + VAR_2),
   FUNC_4(VAR_15, VAR_14->offset + VAR_3));
 }

 if (VAR_16 & VAR_12) {
  VAR_14->stats.uncorr_err++;
  FUNC_0(VAR_15, "%s MC7 uncorrectable error at addr 0x%x, "
    "data 0x%x 0x%x 0x%x\n", VAR_14->name,
    FUNC_4(VAR_15, VAR_14->offset + VAR_6),
    FUNC_4(VAR_15, VAR_14->offset + VAR_7),
    FUNC_4(VAR_15, VAR_14->offset + VAR_8),
    FUNC_4(VAR_15, VAR_14->offset + VAR_9));
 }

 if (FUNC_2(VAR_16)) {
  VAR_14->stats.parity_err++;
  FUNC_0(VAR_15, "%s MC7 parity error 0x%x\n",
    VAR_14->name, FUNC_2(VAR_16));
 }

 if (VAR_16 & VAR_10) {
  u32 VAR_17 = 0;

  if (VAR_15->params.rev > 0)
   VAR_17 = FUNC_4(VAR_15,
        VAR_14->offset + VAR_4);
  VAR_14->stats.addr_err++;
  FUNC_0(VAR_15, "%s MC7 address error: 0x%x\n",
    VAR_14->name, VAR_17);
 }

 if (VAR_16 & VAR_13)
  FUNC_3(VAR_15);

 FUNC_5(VAR_15, VAR_14->offset + VAR_5, VAR_16);
}
