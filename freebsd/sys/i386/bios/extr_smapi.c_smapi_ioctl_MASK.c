
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct thread {int dummy; } ;
struct smapi_softc {int smapi32_entry; int header; } ;
struct smapi_bios_parameter {int dummy; } ;
struct smapi_bios_header {int dummy; } ;
struct cdev {int dummy; } ;
typedef scalar_t__ caddr_t ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (scalar_t__,scalar_t__,int) ;
 int FUNC_1 (struct cdev*) ;
 struct smapi_softc* FUNC_2 (int ,int ) ;
 int FUNC_3 (struct smapi_bios_parameter*,struct smapi_bios_parameter*) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int
FUNC_4 (struct cdev *VAR_4, u_long VAR_5, caddr_t VAR_6, int VAR_7, struct thread *VAR_8)
{
 struct smapi_softc *VAR_9;
 int VAR_10;

 VAR_10 = 0;
 VAR_9 = FUNC_2(VAR_3, FUNC_1(VAR_4));
        if (VAR_9 == ((void*)0)) {
                VAR_10 = VAR_1;
                goto fail;
        }

 switch (VAR_5) {
 case 128:
  FUNC_0((caddr_t)VAR_9->header, VAR_6,
    sizeof(struct smapi_bios_header));
  VAR_10 = 0;
  break;
 case 129:
  VAR_2 = VAR_9->smapi32_entry;
  VAR_10 = FUNC_3((struct smapi_bios_parameter *)VAR_6,
    (struct smapi_bios_parameter *)VAR_6);
  break;
 default:
  VAR_10 = VAR_0;
 }

fail:
 return (VAR_10);
}
