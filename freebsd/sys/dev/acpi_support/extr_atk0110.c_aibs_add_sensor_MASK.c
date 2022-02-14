
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct aibs_softc {int sc_dev; scalar_t__ sc_ggrp_method; } ;
struct aibs_sensor {int t; int i; int l; int h; } ;
struct TYPE_10__ {int Count; TYPE_3__* Elements; } ;
struct TYPE_11__ {scalar_t__ Type; TYPE_4__ Package; } ;
struct TYPE_8__ {int Value; } ;
struct TYPE_7__ {char* Pointer; } ;
struct TYPE_9__ {scalar_t__ Type; TYPE_2__ Integer; TYPE_1__ String; } ;
typedef TYPE_5__ ACPI_OBJECT ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;



 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int
FUNC_2(struct aibs_softc *VAR_4, ACPI_OBJECT *VAR_5,
    struct aibs_sensor* VAR_6, const char ** VAR_7)
{
 int VAR_8;






 if (VAR_4->sc_ggrp_method)
  VAR_8 = 4;
 else
  VAR_8 = 2;

 if (VAR_5->Type != VAR_1) {
  FUNC_1(VAR_4->sc_dev,
      "sensor object is not a package: %i type\n",
       VAR_5->Type);
  return (VAR_3);
 }
 if (VAR_5[0].Package.Count != (VAR_8 + 3) ||
     VAR_5->Package.Elements[0].Type != VAR_0 ||
     VAR_5->Package.Elements[1].Type != VAR_2 ||
     VAR_5->Package.Elements[VAR_8].Type != VAR_0 ||
     VAR_5->Package.Elements[VAR_8 + 1].Type != VAR_0 ||
     VAR_5->Package.Elements[VAR_8 + 2].Type != VAR_0) {
  FUNC_1(VAR_4->sc_dev, "unexpected package content\n");
  return (VAR_3);
 }

 VAR_6->i = VAR_5->Package.Elements[0].Integer.Value;
 *VAR_7 = VAR_5->Package.Elements[1].String.Pointer;
 VAR_6->l = VAR_5->Package.Elements[VAR_8].Integer.Value;
 VAR_6->h = VAR_5->Package.Elements[VAR_8 + 1].Integer.Value;

 if (VAR_4->sc_ggrp_method)
  VAR_6->h += VAR_6->l;
 VAR_6->t = FUNC_0(VAR_6->i);

 switch (VAR_6->t) {
 case 128:
 case 129:
 case 130:
  return (0);
 default:
  FUNC_1(VAR_4->sc_dev, "unknown sensor type 0x%x",
      VAR_6->t);
  return (VAR_3);
 }
}
