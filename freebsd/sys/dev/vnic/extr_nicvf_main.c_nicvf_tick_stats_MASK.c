
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nicvf {int stats_callout; } ;


 int FUNC_0 (int *,int ,void (*) (void*),struct nicvf*) ;
 int VAR_0 ;
 int FUNC_1 (struct nicvf*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct nicvf *VAR_2;

 VAR_2 = (struct nicvf *)VAR_1;


 FUNC_1(VAR_2);

 FUNC_0(&VAR_2->stats_callout, VAR_0, FUNC_2, VAR_2);
}
