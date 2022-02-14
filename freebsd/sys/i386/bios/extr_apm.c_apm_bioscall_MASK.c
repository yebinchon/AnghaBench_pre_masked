
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_3__ {int eax; } ;
struct TYPE_4__ {int entry; TYPE_1__ r; int seg; } ;
struct apm_softc {int bios_busy; scalar_t__ connectmode; TYPE_2__ bios; int minorversion; int majorversion; int intversion; } ;


 int FUNC_0 (char*,int,int ,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ) ;
 int VAR_4 ;
 int FUNC_2 (int ,int) ;
 struct apm_softc VAR_5 ;
 int FUNC_3 (TYPE_2__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (int *,int) ;

__attribute__((used)) static int
FUNC_6(void)
{
 struct apm_softc *VAR_6 = &VAR_5;
 int VAR_7 = 0;
 u_int VAR_8 = VAR_6->bios.r.eax & 0xff;

 if (!FUNC_2(VAR_6->intversion, VAR_8)) {
  FUNC_0("apm_bioscall: function 0x%x is not supported in v%d.%d\n",
      VAR_8, VAR_6->majorversion, VAR_6->minorversion);
  return (-1);
 }

 VAR_6->bios_busy = 1;
 if (VAR_6->connectmode == VAR_0) {
  FUNC_5(&VAR_6->bios.seg,
       VAR_1 | VAR_2);
  VAR_7 = FUNC_4(&VAR_6->bios.r,
          VAR_6->bios.entry, FUNC_1(VAR_3, VAR_4));
 } else {
  VAR_7 = FUNC_3(&VAR_6->bios, ((void*)0));
 }
 VAR_6->bios_busy = 0;
 return (VAR_7);
}
