
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _irqfd {int shutdown; int list; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct _irqfd*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct _irqfd *VAR_1)
{
 FUNC_0(!FUNC_1(VAR_1));

 FUNC_2(&VAR_1->list);

 FUNC_3(VAR_0, &VAR_1->shutdown);
}
