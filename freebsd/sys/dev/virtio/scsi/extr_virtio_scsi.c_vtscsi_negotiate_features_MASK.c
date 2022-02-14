
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vtscsi_softc {int vtscsi_features; int vtscsi_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct vtscsi_softc *VAR_1)
{
 device_t VAR_2;
 uint64_t VAR_3;

 VAR_2 = VAR_1->vtscsi_dev;
 VAR_3 = FUNC_0(VAR_2, VAR_0);
 VAR_1->vtscsi_features = VAR_3;
}
