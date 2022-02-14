
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tty {int dummy; } ;
struct nmdmpart {TYPE_1__* np_other; } ;
struct TYPE_2__ {int np_task; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 struct nmdmpart* FUNC_1 (struct tty*) ;

__attribute__((used)) static void
FUNC_2(struct tty *VAR_1)
{
 struct nmdmpart *VAR_2 = FUNC_1(VAR_1);


 FUNC_0(VAR_0, &VAR_2->np_other->np_task);
}
