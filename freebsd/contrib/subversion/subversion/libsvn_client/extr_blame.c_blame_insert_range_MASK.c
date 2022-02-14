
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct rev {int dummy; } ;
struct blame_chain {struct blame* blame; } ;
struct blame {scalar_t__ start; struct blame* next; struct rev const* rev; } ;
typedef scalar_t__ apr_off_t ;


 int * VAR_0 ;
 int FUNC_0 (struct blame*,scalar_t__) ;
 struct blame* FUNC_1 (struct blame_chain*,struct rev const*,scalar_t__) ;
 struct blame* FUNC_2 (struct blame*,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_3(struct blame_chain *VAR_1,
                   const struct rev *VAR_2,
                   apr_off_t VAR_3,
                   apr_off_t VAR_4)
{
  struct blame *VAR_5 = VAR_1->blame;
  struct blame *VAR_6 = FUNC_2(VAR_5, VAR_3);
  struct blame *VAR_7;

  if (VAR_6->start == VAR_3)
    {
      VAR_7 = FUNC_1(VAR_1, VAR_6->rev, VAR_6->start + VAR_4);
      VAR_6->rev = VAR_2;
      VAR_7->next = VAR_6->next;
      VAR_6->next = VAR_7;
    }
  else
    {
      struct blame *VAR_8;
      VAR_8 = FUNC_1(VAR_1, VAR_2, VAR_3);
      VAR_7 = FUNC_1(VAR_1, VAR_6->rev, VAR_3 + VAR_4);
      VAR_8->next = VAR_7;
      VAR_7->next = VAR_6->next;
      VAR_6->next = VAR_8;
    }
  FUNC_0(VAR_7->next, VAR_4);

  return VAR_0;
}
