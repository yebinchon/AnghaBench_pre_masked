
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mem_cgroup {int memsw; int res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct mem_cgroup*,int ) ;
 int FUNC_1 (struct mem_cgroup*) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static inline u64 FUNC_3(struct mem_cgroup *VAR_5, bool VAR_6)
{
 u64 VAR_7;

 if (!FUNC_1(VAR_5)) {
  if (!VAR_6)
   return FUNC_2(&VAR_5->res, VAR_4);
  else
   return FUNC_2(&VAR_5->memsw, VAR_4);
 }

 VAR_7 = FUNC_0(VAR_5, VAR_0);
 VAR_7 += FUNC_0(VAR_5, VAR_1);

 if (VAR_6)
  VAR_7 += FUNC_0(VAR_5,
    VAR_2);

 return VAR_7 << VAR_3;
}
