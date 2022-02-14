
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct viawd_softc {int * wd_res; int wd_rid; int sb_dev; int * ev_tag; } ;
typedef int device_t ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int *) ;
 struct viawd_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,int ) ;
 int FUNC_4 (struct viawd_softc*,int ) ;
 int FUNC_5 (struct viawd_softc*,int ) ;
 int FUNC_6 (struct viawd_softc*,int) ;
 int VAR_4 ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 struct viawd_softc *VAR_6;
 uint32_t VAR_7;

 VAR_6 = FUNC_2(VAR_5);


 if (VAR_6->ev_tag != ((void*)0))
  FUNC_0(VAR_4, VAR_6->ev_tag);
 VAR_6->ev_tag = ((void*)0);





 VAR_7 = FUNC_4(VAR_6, VAR_1);
 if (VAR_7 & VAR_2) {
  FUNC_5(VAR_6, VAR_3);
  FUNC_6(VAR_6, 1);
  FUNC_3(VAR_5,
      "Keeping watchog alive during shutdown for %d seconds\n",
      VAR_3);
 }

 if (VAR_6->wd_res != ((void*)0))
  FUNC_1(VAR_6->sb_dev, VAR_0,
      VAR_6->wd_rid, VAR_6->wd_res);

 return (0);
}
