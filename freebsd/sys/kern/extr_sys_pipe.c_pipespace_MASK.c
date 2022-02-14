
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pipe {int pipe_state; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct pipe*,int) ;

__attribute__((used)) static int
FUNC_2(struct pipe *VAR_1, int VAR_2)
{

 FUNC_0(VAR_1->pipe_state & VAR_0,
  ("Unlocked pipe passed to pipespace"));
 return (FUNC_1(VAR_1, VAR_2));
}
