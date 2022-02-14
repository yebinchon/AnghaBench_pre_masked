
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef union ccb {int dummy; } ccb ;
typedef int u_int8_t ;
typedef int u_int32_t ;
typedef int u_int ;
struct cam_device {int dummy; } ;
struct ata_set_max_pwd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct cam_device*,union ccb*,int,int ,int ,int,int ,int ,int ,int ,int,int *,int,int,int) ;

__attribute__((used)) static int
FUNC_1(struct cam_device *VAR_8, int VAR_9,
       u_int32_t VAR_10, union ccb *VAR_11,
       int VAR_12, struct ata_set_max_pwd *VAR_13)
{
 u_int VAR_14;
 u_int8_t VAR_15;

 VAR_15 = VAR_2;
 VAR_14 = (VAR_12) ? VAR_5 : VAR_4;

 return (FUNC_0(VAR_8,
      VAR_11,
      VAR_9,
               VAR_6,
                  VAR_15,
                   VAR_0 |
       VAR_1,
                    VAR_7,
                 VAR_14,
                  VAR_3,
             0,
                      sizeof(*VAR_13) / 512,
                  (u_int8_t*)VAR_13,
                   sizeof(*VAR_13),
      VAR_10 ? VAR_10 : 1000,
      VAR_12));
}
