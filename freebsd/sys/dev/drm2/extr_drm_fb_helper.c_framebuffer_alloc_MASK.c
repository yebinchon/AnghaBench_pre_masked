
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vt_kms_softc {int fb_mode_task; } ;
struct fb_info {int * enter; struct vt_kms_softc* fb_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,int ,struct vt_kms_softc*) ;
 void* FUNC_1 (int,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;

struct fb_info *
FUNC_2()
{
 struct fb_info *VAR_5;
 struct vt_kms_softc *VAR_6;

 VAR_5 = FUNC_1(sizeof(*VAR_5), VAR_0, VAR_1 | VAR_2);

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_0, VAR_1 | VAR_2);
 FUNC_0(&VAR_6->fb_mode_task, 0, VAR_4, VAR_6);

 VAR_5->fb_priv = VAR_6;
 VAR_5->enter = &VAR_3;

 return (VAR_5);
}
