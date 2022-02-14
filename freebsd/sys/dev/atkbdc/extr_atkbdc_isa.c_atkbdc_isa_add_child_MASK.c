
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u_int ;
struct atkbdc_device {int dummy; } ;
typedef int * device_t ;
struct TYPE_6__ {int * irq; } ;
typedef TYPE_1__ atkbdc_softc_t ;
struct TYPE_7__ {scalar_t__ rid; int resources; } ;
typedef TYPE_2__ atkbdc_device_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_0 (int *,scalar_t__,char const*,int) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 TYPE_2__* FUNC_5 (int,int ,int) ;
 scalar_t__ FUNC_6 (char const*,int) ;
 scalar_t__ FUNC_7 (char const*,int,char*,int*) ;
 int FUNC_8 (int *,int ,scalar_t__,int,int,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static device_t
FUNC_11(device_t VAR_5, u_int VAR_6, const char *VAR_7, int VAR_8)
{
 atkbdc_device_t *VAR_9;
 atkbdc_softc_t *VAR_10;
 device_t VAR_11;
 int VAR_12;

 VAR_10 = *(atkbdc_softc_t **)FUNC_2(VAR_5);
 VAR_9 = FUNC_5(sizeof(struct atkbdc_device), VAR_1,
  VAR_2 | VAR_3);
 if (!VAR_9)
  return ((void*)0);

 VAR_11 = FUNC_0(VAR_5, VAR_6, VAR_7, VAR_8);
 if (VAR_11 == ((void*)0)) {
  FUNC_4(VAR_9, VAR_1);
  return VAR_11;
 }

 FUNC_9(&VAR_9->resources);
 VAR_9->rid = VAR_6;







 if (VAR_6 == VAR_0) {
  if (VAR_10->irq == ((void*)0)) {
   if (FUNC_7(VAR_7, VAR_8, "irq", &VAR_12) != 0)
    VAR_12 = -1;
  } else
   VAR_12 = FUNC_10(VAR_10->irq);
  if (VAR_12 > 0)
   FUNC_8(&VAR_9->resources, VAR_4,
       VAR_9->rid, VAR_12, VAR_12, 1);
 }

 if (FUNC_6(VAR_7, VAR_8))
  FUNC_1(VAR_11);

 FUNC_3(VAR_11, VAR_9);

 return VAR_11;
}
