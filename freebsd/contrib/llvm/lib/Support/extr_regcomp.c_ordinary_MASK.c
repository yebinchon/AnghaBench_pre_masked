
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uch ;
struct parse {TYPE_1__* g; } ;
typedef scalar_t__ cat_t ;
struct TYPE_2__ {int cflags; int ncategories; scalar_t__* categories; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct parse*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4(struct parse *VAR_2, int VAR_3)
{
 cat_t *VAR_4 = VAR_2->g->categories;

 if ((VAR_2->g->cflags&VAR_1) && FUNC_2((uch)VAR_3) && FUNC_3(VAR_3) != VAR_3)
  FUNC_1(VAR_2, VAR_3);
 else {
  FUNC_0(VAR_0, (uch)VAR_3);
  if (VAR_4[VAR_3] == 0)
   VAR_4[VAR_3] = VAR_2->g->ncategories++;
 }
}
