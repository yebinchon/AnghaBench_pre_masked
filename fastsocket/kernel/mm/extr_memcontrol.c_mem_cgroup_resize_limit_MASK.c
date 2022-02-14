
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct mem_cgroup {int memsw_is_minimum; int res; int memsw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct mem_cgroup*) ;
 int FUNC_1 (struct mem_cgroup*,int ,int ) ;
 int FUNC_2 (struct mem_cgroup*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long long FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,unsigned long long) ;
 int VAR_8 ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct mem_cgroup *VAR_9,
    unsigned long long VAR_10)
{
 int VAR_11;
 int VAR_12;
 u64 VAR_13, VAR_14;
 int VAR_15 = 0;
 int VAR_16 = FUNC_0(VAR_9);
 u64 VAR_17, VAR_18;
 int VAR_19;






 VAR_11 = VAR_3 * VAR_16;

 VAR_18 = FUNC_5(&VAR_9->res, VAR_6);

 VAR_19 = 0;
 while (VAR_11) {
  if (FUNC_7(VAR_7)) {
   VAR_15 = -VAR_0;
   break;
  }





  FUNC_3(&VAR_8);
  VAR_13 = FUNC_5(&VAR_9->memsw, VAR_5);
  if (VAR_13 < VAR_10) {
   VAR_15 = -VAR_1;
   FUNC_4(&VAR_8);
   break;
  }

  VAR_14 = FUNC_5(&VAR_9->res, VAR_5);
  if (VAR_14 < VAR_10)
   VAR_19 = 1;

  VAR_15 = FUNC_6(&VAR_9->res, VAR_10);
  if (!VAR_15) {
   if (VAR_13 == VAR_10)
    VAR_9->memsw_is_minimum = 1;
   else
    VAR_9->memsw_is_minimum = 0;
  }
  FUNC_4(&VAR_8);

  if (!VAR_15)
   break;

  VAR_12 = FUNC_1(VAR_9, VAR_2,
           VAR_4);
  VAR_17 = FUNC_5(&VAR_9->res, VAR_6);

    if (VAR_17 >= VAR_18)
   VAR_11--;
  else
   VAR_18 = VAR_17;
 }
 if (!VAR_15 && VAR_19)
  FUNC_2(VAR_9);

 return VAR_15;
}
