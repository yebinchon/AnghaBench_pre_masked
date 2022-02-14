
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_softc {int bio_queue; int flags; } ;
struct cam_periph {int path; scalar_t__ softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int *,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int ,struct cam_periph*,int ) ;

__attribute__((used)) static void
FUNC_2(struct cam_periph *VAR_3)
{
 struct pt_softc *VAR_4;

 VAR_4 = (struct pt_softc *)VAR_3->softc;




 FUNC_1(0, VAR_2, VAR_3, VAR_3->path);

 VAR_4->flags |= VAR_1;






 FUNC_0(&VAR_4->bio_queue, ((void*)0), VAR_0);
}
