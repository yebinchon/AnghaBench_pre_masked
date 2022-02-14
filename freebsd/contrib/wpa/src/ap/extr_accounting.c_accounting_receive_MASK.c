
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct radius_msg {int dummy; } ;
struct TYPE_2__ {scalar_t__ code; } ;
typedef int RadiusRxResult ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_1__* FUNC_0 (struct radius_msg*) ;
 scalar_t__ FUNC_1 (struct radius_msg*,int const*,size_t,struct radius_msg*,int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static RadiusRxResult
FUNC_3(struct radius_msg *VAR_5, struct radius_msg *VAR_6,
     const u8 *VAR_7, size_t VAR_8,
     void *VAR_9)
{
 if (FUNC_0(VAR_5)->code != VAR_1) {
  FUNC_2(VAR_0, "Unknown RADIUS message code");
  return VAR_4;
 }

 if (FUNC_1(VAR_5, VAR_7, VAR_8, VAR_6, 0)) {
  FUNC_2(VAR_0, "Incoming RADIUS packet did not have correct Authenticator - dropped");
  return VAR_2;
 }

 return VAR_3;
}
