
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct mmc_data {int len; int flags; int data; } ;
struct mmc_command {int opcode; int flags; int error; int arg; struct mmc_data* data; } ;
struct TYPE_2__ {int error; scalar_t__ time; } ;
struct aml8726_sdxc_softc {int auto_fill_flush; int ch; TYPE_1__ busy; struct mmc_command* cmd; int dmamap; int dmatag; } ;
typedef scalar_t__ bus_addr_t ;


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
 int FUNC_0 (struct aml8726_sdxc_softc*) ;
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
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_1 (struct aml8726_sdxc_softc*,int ) ;
 int FUNC_2 (struct aml8726_sdxc_softc*,int ) ;
 int FUNC_3 (struct aml8726_sdxc_softc*,int ,int) ;
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
 int VAR_35 ;
 int FUNC_4 (struct aml8726_sdxc_softc*) ;
 int VAR_36 ;
 int FUNC_5 (struct aml8726_sdxc_softc*) ;
 int VAR_37 ;
 int FUNC_6 (int ,int ,int ,int,int ,scalar_t__*,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int *,int ,int ,struct aml8726_sdxc_softc*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static int
FUNC_10(struct aml8726_sdxc_softc *VAR_38,
    struct mmc_command *VAR_39)
{
 bus_addr_t VAR_40;
 uint32_t VAR_41;
 uint32_t VAR_42;
 uint32_t VAR_43;
 uint32_t VAR_44;
 uint32_t VAR_45;
 int VAR_46;
 struct mmc_data *VAR_47;

 FUNC_0(VAR_38);

 if (VAR_39->opcode > 0x3f)
  return (VAR_28);




 FUNC_5(VAR_38);

 VAR_44 = VAR_39->opcode;

 if ((VAR_39->flags & VAR_31) != 0) {
  VAR_44 |= VAR_14;
  VAR_44 |= VAR_19;







  VAR_44 |= VAR_20;
 } else if ((VAR_39->flags & VAR_33) != 0)
  VAR_44 |= VAR_14;

 if ((VAR_39->flags & VAR_32) == 0)
  VAR_44 |= VAR_20;

 if (VAR_39->opcode == VAR_35)
  VAR_44 |= VAR_15;

 VAR_47 = VAR_39->data;

 VAR_40 = 0;
 VAR_42 = FUNC_2(VAR_38, VAR_4);
 VAR_43 = VAR_9;
 VAR_45 = VAR_1;

 VAR_42 &= ~VAR_2;

 if (VAR_47 && VAR_47->len &&
     (VAR_47->flags & (VAR_26 | VAR_27)) != 0) {
  VAR_41 = VAR_47->len;

  if ((VAR_47->flags & VAR_25) != 0) {
   VAR_41 = VAR_34;
   if ((VAR_47->len % VAR_41) != 0)
    return (VAR_28);
  }

  if (VAR_41 > 512)
   return (VAR_28);

  VAR_44 |= VAR_13;
  VAR_44 |= ((VAR_47->flags & VAR_27) != 0) ?
      VAR_16 : 0;
  VAR_44 |= (((VAR_47->len / VAR_41) - 1) <<
      VAR_18);

  VAR_42 |= ((VAR_41 < 512) ? VAR_41 : 0) <<
      VAR_3;

  VAR_43 &= ~VAR_8;
  VAR_43 |= (VAR_38->auto_fill_flush == 1 ||
      (VAR_47->flags & VAR_27) != 0) ?
      VAR_6 :
      VAR_10;

  VAR_46 = FUNC_6(VAR_38->dmatag, VAR_38->dmamap,
      VAR_47->data, VAR_47->len, VAR_36, &VAR_40,
      VAR_24);
  if (VAR_46)
   return (VAR_30);

  if ((VAR_47->flags & VAR_26) != 0) {
   FUNC_7(VAR_38->dmatag, VAR_38->dmamap,
       VAR_22);
   VAR_45 = VAR_12 *
       (VAR_47->len / VAR_41);
  } else {
   FUNC_7(VAR_38->dmatag, VAR_38->dmamap,
       VAR_23);
   VAR_45 = VAR_21 *
       (VAR_47->len / VAR_41);
  }
 }

 VAR_38->cmd = VAR_39;

 VAR_39->error = VAR_29;

 VAR_38->busy.time = 0;
 VAR_38->busy.error = VAR_29;

 if (VAR_45 > VAR_11)
  VAR_45 = VAR_11;

 FUNC_8(&VAR_38->ch, FUNC_9(VAR_45),
     VAR_37, VAR_38);

 FUNC_3(VAR_38, VAR_7, VAR_43);

 FUNC_3(VAR_38, VAR_4, VAR_42);
 FUNC_3(VAR_38, VAR_5, (uint32_t)VAR_40);
 FUNC_3(VAR_38, VAR_0, VAR_39->arg);

 FUNC_4(VAR_38);

 FUNC_3(VAR_38, VAR_17, VAR_44);
 FUNC_1(VAR_38, VAR_17);

 return (VAR_29);
}
