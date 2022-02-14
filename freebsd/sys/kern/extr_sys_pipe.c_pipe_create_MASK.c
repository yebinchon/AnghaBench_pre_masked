
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe {int pipe_ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct pipe*,int ) ;

__attribute__((used)) static void
FUNC_2(struct pipe *VAR_5, int VAR_6)
{

 if (VAR_6) {







  if (VAR_2 > VAR_3 / 2)
   (void)FUNC_1(VAR_5, VAR_1);
  else
   (void)FUNC_1(VAR_5, VAR_0);
 }

 VAR_5->pipe_ino = FUNC_0(&VAR_4);
}
