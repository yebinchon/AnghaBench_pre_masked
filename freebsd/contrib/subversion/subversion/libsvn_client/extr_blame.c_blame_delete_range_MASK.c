
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_error_t ;
struct blame_chain {int blame; } ;
struct blame {scalar_t__ start; struct blame* next; } ;
typedef scalar_t__ apr_off_t ;


 int * VAR_0 ;
 int FUNC_0 (struct blame*,scalar_t__) ;
 int FUNC_1 (struct blame_chain*,struct blame*) ;
 struct blame* FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static svn_error_t *
FUNC_3(struct blame_chain *VAR_1,
                   apr_off_t VAR_2,
                   apr_off_t VAR_3)
{
  struct blame *VAR_4 = FUNC_2(VAR_1->blame, VAR_2);
  struct blame *VAR_5 = FUNC_2(VAR_1->blame, VAR_2 + VAR_3);
  struct blame *VAR_6 = VAR_5->next;

  if (VAR_4 != VAR_5)
    {
      struct blame *VAR_7 = VAR_4->next;
      while (VAR_7 != VAR_5)
        {
          struct blame *VAR_8 = VAR_7->next;
          FUNC_1(VAR_1, VAR_7);
          VAR_7 = VAR_8;
        }
      VAR_4->next = VAR_5;
      VAR_5->start = VAR_2;
      if (VAR_4->start == VAR_2)
        {
          *VAR_4 = *VAR_5;
          FUNC_1(VAR_1, VAR_5);
          VAR_5 = VAR_4;
        }
    }

  if (VAR_6 && VAR_6->start == VAR_5->start + VAR_3)
    {
      *VAR_5 = *VAR_6;
      FUNC_1(VAR_1, VAR_6);
      VAR_6 = VAR_5->next;
    }

  FUNC_0(VAR_6, -VAR_3);

  return VAR_0;
}
