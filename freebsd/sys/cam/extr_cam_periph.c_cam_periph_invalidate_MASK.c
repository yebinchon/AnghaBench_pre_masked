
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sbuf {int dummy; } ;
struct cam_periph {int flags; int (* periph_oninval ) (struct cam_periph*) ;int path; } ;


 int FUNC_0 (int ,int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct cam_periph*,int ) ;
 int FUNC_2 (struct cam_periph*) ;
 int VAR_6 ;
 int FUNC_3 (struct sbuf*) ;
 int FUNC_4 (struct sbuf*,char*,int,int ) ;
 int FUNC_5 (struct sbuf*) ;
 int FUNC_6 (struct cam_periph*) ;
 int FUNC_7 (struct cam_periph*,struct sbuf*) ;

void
FUNC_8(struct cam_periph *VAR_7)
{

 FUNC_1(VAR_7, VAR_4);




 if ((VAR_7->flags & VAR_2) != 0)
  return;

 FUNC_0(VAR_7->path, VAR_0, ("Periph invalidated\n"));
 if ((VAR_7->flags & VAR_1) && !VAR_6) {
  struct sbuf VAR_8;
  char VAR_9[160];

  FUNC_4(&VAR_8, VAR_9, 160, VAR_5);
  FUNC_7(VAR_7, &VAR_8);
  FUNC_3(&VAR_8);
  FUNC_5(&VAR_8);
 }
 VAR_7->flags |= VAR_2;
 VAR_7->flags &= ~VAR_3;
 if (VAR_7->periph_oninval != ((void*)0))
  VAR_7->periph_oninval(VAR_7);
 FUNC_2(VAR_7);
}
