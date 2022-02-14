
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rev {int dummy; } ;
struct blame_chain {int pool; struct blame* avail; } ;
struct blame {struct blame* next; int start; struct rev const* rev; } ;
typedef int apr_off_t ;


 struct blame* FUNC_0 (int ,int) ;

__attribute__((used)) static struct blame *
FUNC_1(struct blame_chain *VAR_0,
             const struct rev *VAR_1,
             apr_off_t VAR_2)
{
  struct blame *VAR_3;
  if (VAR_0->avail)
    {
      VAR_3 = VAR_0->avail;
      VAR_0->avail = VAR_3->next;
    }
  else
    VAR_3 = FUNC_0(VAR_0->pool, sizeof(*VAR_3));
  VAR_3->rev = VAR_1;
  VAR_3->start = VAR_2;
  VAR_3->next = ((void*)0);
  return VAR_3;
}
