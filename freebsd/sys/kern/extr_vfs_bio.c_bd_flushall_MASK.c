
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bufqueue {scalar_t__ bq_len; } ;
struct bufdomain {scalar_t__ bd_lim; struct bufqueue* bd_subq; } ;


 int FUNC_0 (struct bufqueue*) ;
 int FUNC_1 (struct bufqueue*) ;
 int FUNC_2 (struct bufdomain*,struct bufqueue*) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_3(struct bufdomain *VAR_1)
{
 struct bufqueue *VAR_2;
 int VAR_3;
 int VAR_4;

 if (VAR_1->bd_lim == 0)
  return (0);
 VAR_3 = 0;
 for (VAR_4 = 0; VAR_4 <= VAR_0; VAR_4++) {
  VAR_2 = &VAR_1->bd_subq[VAR_4];
  if (VAR_2->bq_len == 0)
   continue;
  FUNC_0(VAR_2);
  FUNC_2(VAR_1, VAR_2);
  FUNC_1(VAR_2);
  VAR_3++;
 }

 return (VAR_3);
}
