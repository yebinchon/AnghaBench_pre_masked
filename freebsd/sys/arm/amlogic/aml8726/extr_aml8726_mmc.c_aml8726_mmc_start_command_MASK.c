
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_ios {scalar_t__ bus_width; } ;
struct mmc_data {int len; int flags; int data; } ;
struct mmc_command {int opcode; int flags; int error; int arg; TYPE_2__* mrq; struct mmc_data* data; } ;
struct TYPE_3__ {struct mmc_ios ios; } ;
struct aml8726_mmc_softc {int port; int stop_timeout; int ch; struct mmc_command* cmd; int dmamap; int dmatag; TYPE_1__ host; } ;
typedef scalar_t__ bus_addr_t ;
struct TYPE_4__ {struct mmc_command* stop; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_0 (struct aml8726_mmc_softc*,int ) ;
 int FUNC_1 (struct aml8726_mmc_softc*,int ,int) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_2 (int) ;
 int VAR_35 ;
 int FUNC_3 (struct aml8726_mmc_softc*,int) ;
 int VAR_36 ;
 int FUNC_4 (int ,int ,int ,int,int ,scalar_t__*,int ) ;
 int FUNC_5 (int ,int ,int ) ;
 scalar_t__ VAR_37 ;
 int FUNC_6 (int *,int ,int ,struct aml8726_mmc_softc*) ;

__attribute__((used)) static int
FUNC_7(struct aml8726_mmc_softc *VAR_38, struct mmc_command *VAR_39)
{
 struct mmc_ios *VAR_40 = &VAR_38->host.ios;
 bus_addr_t VAR_41;
 uint32_t VAR_42;
 uint32_t VAR_43;
 uint32_t VAR_44;
 uint32_t VAR_45;
 uint32_t VAR_46;
 uint32_t VAR_47;
 uint32_t VAR_48;
 int VAR_49;
 struct mmc_data *VAR_50;

 if (VAR_39->opcode > 0x3f)
  return (VAR_27);




 FUNC_3(VAR_38, 1);
 VAR_44 = VAR_9 | VAR_11 | VAR_39->opcode;
 VAR_41 = 0;
 VAR_45 = 0;
 VAR_46 = VAR_38->port;
 VAR_48 = VAR_10;




 if (VAR_39 == VAR_39->mrq->stop && VAR_38->stop_timeout)
  VAR_48 = VAR_38->stop_timeout;
 VAR_38->stop_timeout = 0;

 if ((VAR_39->flags & VAR_30) != 0) {
  VAR_44 |= VAR_5;
  VAR_44 |= (133 << VAR_4);
 } else if ((VAR_39->flags & VAR_33) != 0)
  VAR_44 |= (45 << VAR_4);

 if ((VAR_39->flags & VAR_32) == 0)
  VAR_44 |= VAR_7;

 if ((VAR_39->flags & VAR_31) != 0)
  VAR_44 |= VAR_1;

 VAR_50 = VAR_39->data;

 if (VAR_50 && VAR_50->len &&
     (VAR_50->flags & (VAR_24 | VAR_26)) != 0) {
  VAR_42 = VAR_50->len;

  if ((VAR_50->flags & VAR_23) != 0) {
   VAR_42 = VAR_34;
   if ((VAR_50->len % VAR_42) != 0)
    return (VAR_27);
  }

  VAR_44 |= (((VAR_50->len / VAR_42) - 1) <<
      VAR_3);

  VAR_46 |= (VAR_50->flags & VAR_25) ?
      VAR_17 : 0;
  VAR_43 = (VAR_40->bus_width == VAR_37) ? 4 : 1;
  VAR_47 = VAR_42 * 8 + 16 * VAR_43 - VAR_43;
  if (VAR_47 > 0x3fff)
   return (VAR_27);

  VAR_45 |= (VAR_47 << VAR_13);

  VAR_49 = FUNC_4(VAR_38->dmatag, VAR_38->dmamap,
      VAR_50->data, VAR_50->len, VAR_35, &VAR_41,
      VAR_22);
  if (VAR_49)
   return (VAR_29);

  if ((VAR_50->flags & VAR_24) != 0) {
   VAR_44 |= VAR_6;
   FUNC_5(VAR_38->dmatag, VAR_38->dmamap,
       VAR_20);
   VAR_48 = VAR_18 *
       (VAR_50->len / VAR_42);
  } else {
   VAR_44 |= VAR_2;
   FUNC_5(VAR_38->dmatag, VAR_38->dmamap,
       VAR_21);
   VAR_48 = VAR_19 *
       (VAR_50->len / VAR_42);
  }





  if (VAR_39->mrq->stop != ((void*)0))
   VAR_38->stop_timeout = VAR_48;
 }

 VAR_38->cmd = VAR_39;

 VAR_39->error = VAR_28;

 if (VAR_48 > VAR_15)
  VAR_48 = VAR_15;

 FUNC_6(&VAR_38->ch, FUNC_2(VAR_48),
     VAR_36, VAR_38);

 FUNC_1(VAR_38, VAR_0, VAR_39->arg);
 FUNC_1(VAR_38, VAR_16, VAR_46);
 FUNC_1(VAR_38, VAR_14, VAR_45);
 FUNC_1(VAR_38, VAR_12, (uint32_t)VAR_41);

 FUNC_1(VAR_38, VAR_8, VAR_44);
 FUNC_0(VAR_38, VAR_8);

 return (VAR_28);
}
