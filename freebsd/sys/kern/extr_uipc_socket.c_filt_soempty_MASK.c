
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct socket {int so_snd; } ;
struct knote {int kn_data; TYPE_1__* kn_fp; } ;
struct TYPE_2__ {struct socket* f_data; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (struct socket*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3(struct knote *VAR_0, long VAR_1)
{
 struct socket *VAR_2;

 VAR_2 = VAR_0->kn_fp->f_data;

 if (FUNC_1(VAR_2))
  return (1);

 FUNC_0(&VAR_2->so_snd);
 VAR_0->kn_data = FUNC_2(&VAR_2->so_snd);

 if (VAR_0->kn_data == 0)
  return (1);
 else
  return (0);
}
