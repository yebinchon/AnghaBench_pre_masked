
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_cgroup {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct mem_cgroup* FUNC_0 (int,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (struct mem_cgroup*,int ,int) ;
 struct mem_cgroup* FUNC_3 (int) ;

__attribute__((used)) static struct mem_cgroup *FUNC_4(void)
{
 struct mem_cgroup *VAR_2;
 int VAR_3 = FUNC_1();

 if (VAR_3 < VAR_1)
  VAR_2 = FUNC_0(VAR_3, VAR_0);
 else
  VAR_2 = FUNC_3(VAR_3);

 if (VAR_2)
  FUNC_2(VAR_2, 0, VAR_3);
 return VAR_2;
}
