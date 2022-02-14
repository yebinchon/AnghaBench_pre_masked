
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cgroup {int dummy; } ;
struct cftype {int dummy; } ;
typedef enum freezer_state { ____Placeholder_freezer_state } freezer_state ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cgroup*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct cgroup*,int) ;
 int * VAR_4 ;
 scalar_t__ FUNC_3 (char const*,int ) ;

__attribute__((used)) static int FUNC_4(struct cgroup *VAR_5,
    struct cftype *VAR_6,
    const char *VAR_7)
{
 int VAR_8;
 enum freezer_state VAR_9;

 if (FUNC_3(VAR_7, VAR_4[VAR_1]) == 0)
  VAR_9 = VAR_1;
 else if (FUNC_3(VAR_7, VAR_4[VAR_0]) == 0)
  VAR_9 = VAR_0;
 else
  return -VAR_2;

 if (!FUNC_0(VAR_5))
  return -VAR_3;
 VAR_8 = FUNC_2(VAR_5, VAR_9);
 FUNC_1();
 return VAR_8;
}
