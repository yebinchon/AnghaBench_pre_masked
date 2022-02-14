
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_kms_softc {int fb_helper; int fb_mode_task; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,int *) ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_2(void *VAR_3)
{
 struct vt_kms_softc *VAR_4;

 VAR_4 = (struct vt_kms_softc *)VAR_3;

 if (!VAR_0 && VAR_1 == ((void*)0))
  FUNC_1(VAR_2, &VAR_4->fb_mode_task);
 else
  FUNC_0(VAR_4->fb_helper);

 return (0);
}
