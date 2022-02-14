
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vge_softc {scalar_t__ vge_camidx; } ;


 int FUNC_0 (struct vge_softc*,int ,int ) ;
 int FUNC_1 (struct vge_softc*,int ,int ) ;
 int FUNC_2 (struct vge_softc*,scalar_t__,int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_3(struct vge_softc *VAR_8)
{
 int VAR_9;







 FUNC_0(VAR_8, VAR_4, VAR_5);
 FUNC_1(VAR_8, VAR_4, VAR_6);
 FUNC_2(VAR_8, VAR_1, VAR_3);
 for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
  FUNC_2(VAR_8, VAR_0 + VAR_9, 0);



 FUNC_2(VAR_8, VAR_1, VAR_3|VAR_2|0);
 for (VAR_9 = 0; VAR_9 < 8; VAR_9++)
  FUNC_2(VAR_8, VAR_0 + VAR_9, 0);

 FUNC_2(VAR_8, VAR_1, 0);
 FUNC_0(VAR_8, VAR_4, VAR_5);
 FUNC_1(VAR_8, VAR_4, VAR_7);

 VAR_8->vge_camidx = 0;
}
