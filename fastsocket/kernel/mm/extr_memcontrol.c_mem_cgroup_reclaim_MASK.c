
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {scalar_t__ memsw_is_minimum; } ;
typedef int gfp_t ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 int FUNC_0 () ;
 int FUNC_1 (struct mem_cgroup*) ;
 scalar_t__ FUNC_2 (struct mem_cgroup*) ;
 scalar_t__ FUNC_3 (struct mem_cgroup*,int ,int,int ) ;

__attribute__((used)) static unsigned long FUNC_4(struct mem_cgroup *VAR_3,
     gfp_t VAR_4,
     unsigned long VAR_5)
{
 unsigned long VAR_6 = 0;
 bool VAR_7 = 0;
 int VAR_8;

 if (VAR_5 & VAR_1)
  VAR_7 = 1;
 if (!(VAR_5 & VAR_2) && VAR_3->memsw_is_minimum)
  VAR_7 = 1;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (VAR_8)
   FUNC_0();
  VAR_6 += FUNC_3(VAR_3, VAR_4, VAR_7,
            FUNC_1(VAR_3));





  if (VAR_6 && (VAR_5 & VAR_2))
   break;
  if (FUNC_2(VAR_3))
   break;




  if (VAR_8 && !VAR_6)
   break;
 }
 return VAR_6;
}
