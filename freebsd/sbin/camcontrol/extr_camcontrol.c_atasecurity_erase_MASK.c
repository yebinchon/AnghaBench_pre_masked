
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct cam_device*,union ccb*,int,int ,int ,int,int ,int ,int ,int ,int,int *,int,int ,int ) ;
 int FUNC_1 (int ,struct ata_security_password*) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static int
FUNC_3(struct cam_device *VAR_9, union ccb *VAR_10,
    int VAR_11, u_int32_t VAR_12,
    u_int32_t VAR_13,
    struct ata_security_password *VAR_14, int VAR_15)
{
 int VAR_16;

 if (VAR_15 == 0)
  FUNC_1(VAR_4, ((void*)0));

 VAR_16 = FUNC_0(VAR_9,
      VAR_10,
      VAR_11,
               VAR_6,
                  VAR_2,
                   0,
                    VAR_8,
                 VAR_4,
                  0,
             0,
                      0,
                  ((void*)0),
                   0,
                 VAR_12,
                    0);

 if (VAR_16 != 0)
  return VAR_16;

 if (VAR_15 == 0)
  FUNC_1(VAR_5, VAR_14);

 VAR_16 = FUNC_0(VAR_9,
      VAR_10,
      VAR_11,
               VAR_7,
                  VAR_3,
                   VAR_0 |
       VAR_1,
                    VAR_8,
                 VAR_5,
                  0,
             0,
                      sizeof(*VAR_14) / 512,
                  (u_int8_t *)VAR_14,
                   sizeof(*VAR_14),
                 VAR_13,
                    0);

 if (VAR_16 == 0 && VAR_15 == 0)
  FUNC_2("\nErase Complete\n");

 return VAR_16;
}
