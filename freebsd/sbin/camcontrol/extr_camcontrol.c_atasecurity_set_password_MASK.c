
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
typedef int u_int8_t ;
typedef int u_int32_t ;
struct cam_device {int dummy; } ;
struct ata_security_password {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cam_device*,union ccb*,int,int ,int ,int,int ,int ,int ,int ,int,int *,int,int ,int ) ;
 int FUNC_1 (int ,struct ata_security_password*) ;

__attribute__((used)) static int
FUNC_2(struct cam_device *VAR_6, union ccb *VAR_7,
    int VAR_8, u_int32_t VAR_9,
    struct ata_security_password *VAR_10, int VAR_11)
{

 if (VAR_11 == 0)
  FUNC_1(VAR_3, VAR_10);

 return FUNC_0(VAR_6,
     VAR_7,
     VAR_8,
              VAR_4,
                 VAR_2,
                  VAR_0 |
      VAR_1,
                   VAR_5,
                VAR_3,
                 0,
            0,
                     sizeof(*VAR_10) / 512,
                 (u_int8_t *)VAR_10,
                  sizeof(*VAR_10),
                VAR_9,
                   0);
}
