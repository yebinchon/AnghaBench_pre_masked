
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct raid6_recov_calls {scalar_t__ priority; int name; int datap; int data2; scalar_t__ (* valid ) () ;} ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct raid6_recov_calls** VAR_2 ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static inline const struct raid6_recov_calls *FUNC_2(void)
{
 const struct raid6_recov_calls *const *VAR_3;
 const struct raid6_recov_calls *VAR_4;

 for (VAR_4 = ((void*)0), VAR_3 = VAR_2; *VAR_3; VAR_3++)
  if (!VAR_4 || (*VAR_3)->priority > VAR_4->priority)
   if (!(*VAR_3)->valid || (*VAR_3)->valid())
    VAR_4 = *VAR_3;

 if (VAR_4) {
  VAR_0 = VAR_4->data2;
  VAR_1 = VAR_4->datap;

  FUNC_0("raid6: using %s recovery algorithm\n", VAR_4->name);
 } else
  FUNC_0("raid6: Yikes! No recovery algorithm found!\n");

 return VAR_4;
}
