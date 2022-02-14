
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ wint_t ;
struct parse {int dummy; } ;
struct TYPE_7__ {int nranges; TYPE_2__* ranges; } ;
typedef TYPE_1__ cset ;
struct TYPE_8__ {scalar_t__ max; scalar_t__ min; } ;
typedef TYPE_2__ crange ;


 int FUNC_0 (struct parse*,TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,int,int) ;

__attribute__((used)) static void
FUNC_3(struct parse *VAR_2, cset *VAR_3, wint_t VAR_4, wint_t VAR_5)
{
 crange *VAR_6;

 for (; VAR_4 < VAR_0 && VAR_4 <= VAR_5; VAR_4++)
  FUNC_0(VAR_2, VAR_3, VAR_4);
 if (VAR_4 >= VAR_5)
  return;
 VAR_6 = FUNC_2(VAR_3->ranges, VAR_3->nranges + 1,
     sizeof(*VAR_3->ranges));
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_1);
  return;
 }
 VAR_3->ranges = VAR_6;
 VAR_3->ranges[VAR_3->nranges].min = VAR_4;
 VAR_3->ranges[VAR_3->nranges].max = VAR_5;
 VAR_3->nranges++;
}
