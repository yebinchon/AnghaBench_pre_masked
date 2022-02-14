
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nmdmpart {scalar_t__ np_rate; int np_accumulator; int np_quota; int np_callout; int np_task; scalar_t__ np_credits; } ;


 int VAR_0 ;
 int FUNC_0 (int *,scalar_t__,void (*) (void*),struct nmdmpart*) ;
 int FUNC_1 (int ,int *) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_2(void *VAR_2)
{
 struct nmdmpart *VAR_3 = VAR_2;

 if (VAR_3->np_rate == 0)
  return;





 VAR_3->np_accumulator += VAR_3->np_credits;
 VAR_3->np_quota = VAR_3->np_accumulator >> VAR_0;
 VAR_3->np_accumulator &= ((1 << VAR_0) - 1);

 FUNC_1(VAR_1, &VAR_3->np_task);
 FUNC_0(&VAR_3->np_callout, VAR_3->np_rate, FUNC_2, VAR_3);
}
