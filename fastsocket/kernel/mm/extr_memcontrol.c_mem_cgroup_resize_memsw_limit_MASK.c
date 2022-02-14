
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long long u64 ;
struct mem_cgroup {int memsw_is_minimum; int memsw; int res; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (struct mem_cgroup*) ;
 int FUNC_1 (struct mem_cgroup*,int ,int) ;
 int FUNC_2 (struct mem_cgroup*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 unsigned long long FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,unsigned long long) ;
 int VAR_10 ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct mem_cgroup *VAR_11,
     unsigned long long VAR_12)
{
 int VAR_13;
 u64 VAR_14, VAR_15, VAR_16, VAR_17;
 int VAR_18 = FUNC_0(VAR_11);
 int VAR_19 = -VAR_0;
 int VAR_20 = 0;


  VAR_13 = VAR_18 * VAR_5;
 VAR_16 = FUNC_5(&VAR_11->memsw, VAR_8);
 while (VAR_13) {
  if (FUNC_7(VAR_9)) {
   VAR_19 = -VAR_1;
   break;
  }





  FUNC_3(&VAR_10);
  VAR_14 = FUNC_5(&VAR_11->res, VAR_7);
  if (VAR_14 > VAR_12) {
   VAR_19 = -VAR_2;
   FUNC_4(&VAR_10);
   break;
  }
  VAR_15 = FUNC_5(&VAR_11->memsw, VAR_7);
  if (VAR_15 < VAR_12)
   VAR_20 = 1;
  VAR_19 = FUNC_6(&VAR_11->memsw, VAR_12);
  if (!VAR_19) {
   if (VAR_14 == VAR_12)
    VAR_11->memsw_is_minimum = 1;
   else
    VAR_11->memsw_is_minimum = 0;
  }
  FUNC_4(&VAR_10);

  if (!VAR_19)
   break;

  FUNC_1(VAR_11, VAR_3,
       VAR_4 |
       VAR_6);
  VAR_17 = FUNC_5(&VAR_11->memsw, VAR_8);

  if (VAR_17 >= VAR_16)
   VAR_13--;
  else
   VAR_16 = VAR_17;
 }
 if (!VAR_19 && VAR_20)
  FUNC_2(VAR_11);
 return VAR_19;
}
