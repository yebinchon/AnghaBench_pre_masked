
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty {int dummy; } ;
struct nmdmpart {int np_task; } ;


 int FUNC_0 (int ,int *) ;
 int VAR_0 ;
 struct nmdmpart* FUNC_1 (struct tty*) ;

__attribute__((used)) static void
FUNC_2(struct tty *VAR_1)
{
 struct nmdmpart *VAR_2 = FUNC_1(VAR_1);


 FUNC_0(VAR_0, &VAR_2->np_task);
}
