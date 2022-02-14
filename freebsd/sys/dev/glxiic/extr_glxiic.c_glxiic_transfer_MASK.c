
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint32_t ;
struct iic_msg {int dummy; } ;
struct glxiic_softc {scalar_t__ state; int error; int smb_res; int nmsgs; struct iic_msg* msg; } ;
typedef int device_t ;


 int FUNC_0 (struct glxiic_softc*) ;
 int FUNC_1 (struct glxiic_softc*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (struct glxiic_softc*) ;
 int VAR_4 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 struct glxiic_softc* FUNC_5 (int ) ;
 int FUNC_6 (struct glxiic_softc*,int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5, struct iic_msg *VAR_6, uint32_t VAR_7)
{
 struct glxiic_softc *VAR_8;
 int VAR_9;
 uint8_t VAR_10;

 VAR_8 = FUNC_5(VAR_5);

 FUNC_0(VAR_8);

 if (VAR_8->state != VAR_2) {
  VAR_9 = VAR_4;
  goto out;
 }

 VAR_8->msg = VAR_6;
 VAR_8->nmsgs = VAR_7;
 FUNC_6(VAR_8, VAR_3);


 VAR_10 = FUNC_3(VAR_8->smb_res, VAR_0);
 FUNC_4(VAR_8->smb_res, VAR_0,
     VAR_10 | VAR_1);

 FUNC_1(VAR_8);
 VAR_9 = VAR_8->error;
out:
 FUNC_2(VAR_8);

 return (VAR_9);
}
