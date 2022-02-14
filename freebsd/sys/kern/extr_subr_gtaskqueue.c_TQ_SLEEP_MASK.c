
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtx {int dummy; } ;
struct gtaskqueue {int tq_mutex; scalar_t__ tq_spin; } ;


 int FUNC_0 (void*,int *,int ,char const*,int ) ;
 int FUNC_1 (void*,struct mtx*,char const*,int ) ;

__attribute__((used)) static __inline int
FUNC_2(struct gtaskqueue *VAR_0, void *VAR_1, const char *VAR_2)
{
 if (VAR_0->tq_spin)
  return (FUNC_1(VAR_1, (struct mtx *)&VAR_0->tq_mutex, VAR_2, 0));
 return (FUNC_0(VAR_1, &VAR_0->tq_mutex, 0, VAR_2, 0));
}
