
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_16__ {int exists; int name; } ;
struct TYPE_15__ {int exists; int name; } ;
struct TYPE_14__ {int exists; int name; } ;
struct TYPE_13__ {int exists; int name; } ;
struct TYPE_12__ {int exists; int name; } ;
struct TYPE_11__ {int exists; int name; } ;
struct TYPE_10__ {int exists; int name; } ;
struct TYPE_9__ {int value; int exists; int name; } ;
struct acpi_fujitsu_softc {TYPE_8__ rvol; int handle; TYPE_7__ rbll; TYPE_6__ gmou; TYPE_5__ ghks; TYPE_4__ gbll; TYPE_3__ gbls; TYPE_2__ gvol; TYPE_1__ gsif; int dev; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 (int ,char*) ;
 int VAR_1 ;

__attribute__((used)) static uint8_t
FUNC_4(struct acpi_fujitsu_softc *VAR_2)
{
 int VAR_3;

 FUNC_1(VAR_1);

 if (FUNC_0(FUNC_2(VAR_2->handle,
 VAR_2->gsif.name, &(VAR_2->gsif.value)))) {
  VAR_2->gsif.exists = 0;
  FUNC_3(VAR_2->dev, "Couldn't query bitmask value\n");
 } else {
  VAR_2->gsif.exists = 1;
 }


 if (FUNC_0(FUNC_2(VAR_2->handle,
     VAR_2->gvol.name, &VAR_3))) {
  VAR_2->gvol.exists = 0;
 } else {
  VAR_2->gvol.exists = 1;
 }

 if (FUNC_0(FUNC_2(VAR_2->handle,
  VAR_2->gbls.name, &VAR_3))) {
  VAR_2->gbls.exists = 0;
 } else {
  VAR_2->gbls.exists = 1;
 }


 if (VAR_2->gbls.exists || FUNC_0(FUNC_2(VAR_2->handle,
     VAR_2->gbll.name, &VAR_3))) {
  VAR_2->gbll.exists = 0;
 } else {
  VAR_2->gbll.exists = 1;
 }

 if (FUNC_0(FUNC_2(VAR_2->handle,
     VAR_2->ghks.name, &VAR_3))) {
  VAR_2->ghks.exists = 0;
 } else {
  VAR_2->ghks.exists = 1;
 }

 if (FUNC_0(FUNC_2(VAR_2->handle,
     VAR_2->gmou.name, &VAR_3))) {
  VAR_2->gmou.exists = 0;
 } else {
  VAR_2->gmou.exists = 1;
 }

 if (FUNC_0(FUNC_2(VAR_2->handle,
     VAR_2->rbll.name, &VAR_3))) {
  VAR_2->rbll.exists = 0;
 } else {
  VAR_2->rbll.exists = 1;
 }

 if (FUNC_0(FUNC_2(VAR_2->handle,
     VAR_2->rvol.name, &VAR_3))) {
  VAR_2->rvol.exists = 0;
 } else {
  VAR_2->rvol.exists = 1;
 }

 return (VAR_0);
}
