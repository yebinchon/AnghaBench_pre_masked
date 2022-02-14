
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe {int pipe_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct pipe*,int ) ;
 int VAR_3 ;
 int FUNC_1 (struct pipe*) ;
 int VAR_4 ;
 int FUNC_2 (struct pipe*,int ,int,char*,int ) ;

__attribute__((used)) static __inline int
FUNC_3(struct pipe *VAR_5, int VAR_6)
{
 int VAR_7;

 FUNC_0(VAR_5, VAR_0);
 while (VAR_5->pipe_state & VAR_2) {
  VAR_5->pipe_state |= VAR_3;
  VAR_7 = FUNC_2(VAR_5, FUNC_1(VAR_5),
      VAR_6 ? (VAR_4 | VAR_1) : VAR_4,
      "pipelk", 0);
  if (VAR_7 != 0)
   return (VAR_7);
 }
 VAR_5->pipe_state |= VAR_2;
 return (0);
}
