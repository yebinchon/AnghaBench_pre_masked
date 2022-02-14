
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ccb {int csio; } ;
struct cam_periph {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 union ccb* FUNC_0 (struct cam_periph*,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (union ccb*,int ,int ,int ) ;
 int FUNC_2 (int *,int ,int *,int ,int ,int,int ,int ,int) ;
 int FUNC_3 (union ccb*) ;

__attribute__((used)) static int
FUNC_4(struct cam_periph *VAR_9, int VAR_10)
{
 union ccb *VAR_11;
 int VAR_12;

 VAR_12 = 0;

 VAR_11 = FUNC_0(VAR_9, VAR_0);

 FUNC_2(&VAR_11->csio,
                 VAR_7,
                ((void*)0),
                    VAR_3,
               VAR_6,
                    VAR_10,
                   VAR_2,
                   VAR_5,
                 50000);

 VAR_12 = FUNC_1(VAR_11, VAR_8, VAR_1,
                   VAR_4);

 FUNC_3(VAR_11);

 return(VAR_12);
}
