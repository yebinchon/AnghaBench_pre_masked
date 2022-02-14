
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct using_direct {struct using_direct* next; void* outer; void* inner; } ;


 int FUNC_0 (int) ;
 void* FUNC_1 (char const*,unsigned int) ;
 struct using_direct* FUNC_2 (int) ;

__attribute__((used)) static struct using_direct *
FUNC_3 (const char *VAR_0,
       unsigned int VAR_1,
       unsigned int VAR_2,
       struct using_direct *VAR_3)
{
  struct using_direct *VAR_4;

  FUNC_0 (VAR_2 < VAR_1);

  VAR_4 = FUNC_2 (sizeof (struct using_direct));
  VAR_4->inner = FUNC_1 (VAR_0, VAR_1);
  VAR_4->outer = FUNC_1 (VAR_0, VAR_2);
  VAR_4->next = VAR_3;

  return VAR_4;
}
