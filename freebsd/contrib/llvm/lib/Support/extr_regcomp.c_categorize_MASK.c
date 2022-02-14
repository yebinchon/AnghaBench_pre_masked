
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct re_guts {int ncategories; scalar_t__* categories; } ;
struct parse {scalar_t__ error; } ;
typedef scalar_t__ cat_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct re_guts*,int) ;
 scalar_t__ FUNC_1 (struct re_guts*,int,int) ;

__attribute__((used)) static void
FUNC_2(struct parse *VAR_2, struct re_guts *VAR_3)
{
 cat_t *VAR_4 = VAR_3->categories;
 int VAR_5;
 int VAR_6;
 cat_t VAR_7;


 if (VAR_2->error != 0)
  return;

 for (VAR_5 = VAR_1; VAR_5 <= VAR_0; VAR_5++)
  if (VAR_4[VAR_5] == 0 && FUNC_0(VAR_3, VAR_5)) {
   VAR_7 = VAR_3->ncategories++;
   VAR_4[VAR_5] = VAR_7;
   for (VAR_6 = VAR_5+1; VAR_6 <= VAR_0; VAR_6++)
    if (VAR_4[VAR_6] == 0 && FUNC_1(VAR_3, VAR_5, VAR_6))
     VAR_4[VAR_6] = VAR_7;
  }
}
