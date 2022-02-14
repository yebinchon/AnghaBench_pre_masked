
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mly_softc {int * mly_cam_sim; } ;
struct cam_periph {int dummy; } ;
struct cam_path {int dummy; } ;


 int VAR_0 ;
 struct cam_periph* FUNC_0 (struct cam_path*,int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct cam_path**,int *,int ,int,int ) ;
 int FUNC_3 (struct cam_path*) ;

__attribute__((used)) static struct cam_periph *
FUNC_4(struct mly_softc *VAR_1, int VAR_2, int VAR_3)
{
    struct cam_periph *VAR_4;
    struct cam_path *VAR_5;
    int VAR_6;

    VAR_6 = FUNC_2(&VAR_5, ((void*)0), FUNC_1(VAR_1->mly_cam_sim[VAR_2]), VAR_3, 0);
    if (VAR_6 == VAR_0) {
 VAR_4 = FUNC_0(VAR_5, ((void*)0));
 FUNC_3(VAR_5);
    } else {
 VAR_4 = ((void*)0);
    }
    return(VAR_4);
}
