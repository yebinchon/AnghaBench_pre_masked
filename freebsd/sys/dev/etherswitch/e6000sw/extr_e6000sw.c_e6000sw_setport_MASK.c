
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int uint32_t ;
struct mii_data {int mii_media; int mii_ifp; } ;
struct TYPE_15__ {scalar_t__ es_port; int es_flags; int es_ifr; int es_pvid; } ;
typedef TYPE_1__ etherswitch_port_t ;
struct TYPE_16__ {scalar_t__ num_ports; } ;
typedef TYPE_2__ e6000sw_softc_t ;
typedef int device_t ;


 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (TYPE_2__*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_2__* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (TYPE_2__*,scalar_t__) ;
 int FUNC_6 (TYPE_2__*,scalar_t__) ;
 struct mii_data* FUNC_7 (TYPE_2__*,scalar_t__) ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int FUNC_9 (TYPE_2__*,scalar_t__,int ) ;
 int FUNC_10 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_11 (int ,int *,int *,int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_8, etherswitch_port_t *VAR_9)
{
 e6000sw_softc_t *VAR_10;
 int VAR_11;
 struct mii_data *VAR_12;
 uint32_t VAR_13;

 VAR_10 = FUNC_4(VAR_8);
 FUNC_1(VAR_10, VAR_6);

 if (VAR_9->es_port >= VAR_10->num_ports || VAR_9->es_port < 0)
  return (VAR_0);
 if (!FUNC_6(VAR_10, VAR_9->es_port))
  return (0);


 VAR_13 = FUNC_8(VAR_10, FUNC_3(VAR_10, VAR_9->es_port), VAR_3);
 if (VAR_9->es_flags & VAR_1)
  VAR_13 |= VAR_4;
 else
  VAR_13 &= ~VAR_4;
 if (VAR_9->es_flags & VAR_2)
  VAR_13 |= VAR_5;
 else
  VAR_13 &= ~VAR_5;
 FUNC_10(VAR_10, FUNC_3(VAR_10, VAR_9->es_port), VAR_3, VAR_13);

 VAR_11 = 0;
 FUNC_0(VAR_10);
 if (VAR_9->es_pvid != 0)
  FUNC_9(VAR_10, VAR_9->es_port, VAR_9->es_pvid);
 if (FUNC_5(VAR_10, VAR_9->es_port)) {
  VAR_12 = FUNC_7(VAR_10, VAR_9->es_port);
  VAR_11 = FUNC_11(VAR_12->mii_ifp, &VAR_9->es_ifr, &VAR_12->mii_media,
      VAR_7);
 }
 FUNC_2(VAR_10);

 return (VAR_11);
}
