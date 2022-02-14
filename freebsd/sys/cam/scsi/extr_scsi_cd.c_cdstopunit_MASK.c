
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ccb {int csio; } ;
typedef int u_int32_t ;
struct cam_periph {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 union ccb* FUNC_0 (struct cam_periph*,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (union ccb*,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int *,int ,int ,int ,int ,int ,int) ;
 int FUNC_3 (union ccb*) ;

__attribute__((used)) static int
FUNC_4(struct cam_periph *VAR_8, u_int32_t VAR_9)
{
 union ccb *VAR_10;
 int VAR_11;

 VAR_11 = 0;

 VAR_10 = FUNC_0(VAR_8, VAR_0);

 FUNC_2(&VAR_10->csio,
                 VAR_6,
                ((void*)0),
                    VAR_3,
               VAR_2,
                    VAR_9,
                   VAR_2,
                   VAR_5,
                 50000);

 VAR_11 = FUNC_1(VAR_10, VAR_7, VAR_1,
                   VAR_4);

 FUNC_3(VAR_10);

 return(VAR_11);
}
