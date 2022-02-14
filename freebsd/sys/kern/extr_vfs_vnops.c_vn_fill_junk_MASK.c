
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct kinfo_file {int * kf_path; } ;


 int FUNC_0 () ;
 int FUNC_1 (int *,char*) ;
 size_t FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct kinfo_file *VAR_0)
{
 size_t VAR_1, VAR_2;





 VAR_1 = (FUNC_0() % (sizeof(VAR_0->kf_path) - 2)) + 1;
 VAR_2 = FUNC_2(VAR_0->kf_path);
 if (VAR_1 < VAR_2)
  FUNC_1(&VAR_0->kf_path[VAR_1 - 1], "$");
 else
  for (; VAR_2 < VAR_1; VAR_2++)
   FUNC_1(&VAR_0->kf_path[VAR_2], "A");
}
