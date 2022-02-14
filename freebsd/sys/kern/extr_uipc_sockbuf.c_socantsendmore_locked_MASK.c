
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sb_state; } ;
struct socket {TYPE_1__ so_snd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct socket*) ;

void
FUNC_4(struct socket *VAR_2)
{

 FUNC_0(&VAR_2->so_snd);

 VAR_2->so_snd.sb_state |= VAR_1;
 FUNC_3(VAR_2);
 FUNC_2(FUNC_1(&VAR_2->so_snd), VAR_0);
}
