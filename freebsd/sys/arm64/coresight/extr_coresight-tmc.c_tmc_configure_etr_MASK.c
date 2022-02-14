
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct tmc_softc {int res; } ;
struct endpoint {int dummy; } ;
struct TYPE_2__ {int low; int high; int bufsize; } ;
struct coresight_event {TYPE_1__ etr; } ;
typedef int device_t ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct tmc_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_21, struct endpoint *VAR_22,
    struct coresight_event *VAR_23)
{
 struct tmc_softc *VAR_24;
 uint32_t VAR_25;

 VAR_24 = FUNC_2(VAR_21);

 FUNC_4(VAR_21);

 do {
  VAR_25 = FUNC_0(VAR_24->res, VAR_19);
 } while ((VAR_25 & VAR_10) == 0);


 FUNC_1(VAR_24->res, VAR_15, VAR_8);

 VAR_25 = VAR_1;
 VAR_25 |= VAR_2;






 VAR_25 |= VAR_0;
 FUNC_1(VAR_24->res, VAR_11, VAR_25);

 VAR_25 = VAR_3 | VAR_4 | VAR_5 |
     VAR_6 | VAR_7;
 FUNC_1(VAR_24->res, VAR_14, VAR_25);

 FUNC_1(VAR_24->res, VAR_20, 8);

 FUNC_1(VAR_24->res, VAR_13, VAR_23->etr.low);
 FUNC_1(VAR_24->res, VAR_12, VAR_23->etr.high);
 FUNC_1(VAR_24->res, VAR_17, VAR_23->etr.bufsize / 4);

 FUNC_1(VAR_24->res, VAR_16, VAR_23->etr.low);
 FUNC_1(VAR_24->res, VAR_18, VAR_23->etr.low);

 VAR_25 = FUNC_0(VAR_24->res, VAR_19);
 VAR_25 &= ~VAR_9;
 FUNC_1(VAR_24->res, VAR_19, VAR_25);

 FUNC_3(VAR_21);

 return (0);
}
