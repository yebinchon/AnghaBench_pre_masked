
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vtcon_softc {int vtcon_features; int vtcon_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;

__attribute__((used)) static void
FUNC_1(struct vtcon_softc *VAR_1)
{
 device_t VAR_2;
 uint64_t VAR_3;

 VAR_2 = VAR_1->vtcon_dev;
 VAR_3 = VAR_0;

 VAR_1->vtcon_features = FUNC_0(VAR_2, VAR_3);
}
