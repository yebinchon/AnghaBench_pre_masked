
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ wint_t ;
typedef int wctype_t ;
struct parse {int dummy; } ;
struct TYPE_4__ {scalar_t__ ntypes; int * types; } ;
typedef TYPE_1__ cset ;


 int FUNC_0 (struct parse*,TYPE_1__*,scalar_t__) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 int * FUNC_3 (int *,scalar_t__,int) ;

__attribute__((used)) static void
FUNC_4(struct parse *VAR_2, cset *VAR_3, wctype_t VAR_4)
{
 wint_t VAR_5;
 wctype_t *VAR_6;

 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++)
  if (FUNC_2(VAR_5, VAR_4))
   FUNC_0(VAR_2, VAR_3, VAR_5);
 VAR_6 = FUNC_3(VAR_3->types, VAR_3->ntypes + 1,
     sizeof(*VAR_3->types));
 if (VAR_6 == ((void*)0)) {
  FUNC_1(VAR_1);
  return;
 }
 VAR_3->types = VAR_6;
 VAR_3->types[VAR_3->ntypes++] = VAR_4;
}
