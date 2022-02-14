
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type {int enums; int from_lno; void* from_fname; int syntax; scalar_t__ is_enum; void* name; } ;
struct TYPE_2__ {char const* fname; int lno; } ;


 int FUNC_0 (int *,struct type*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 void* FUNC_2 (char const*) ;
 int VAR_3 ;
 struct type* FUNC_3 (int) ;

__attribute__((used)) static struct type *
FUNC_4(const char *VAR_4)
{
 struct type *VAR_5;

 VAR_5 = FUNC_3(sizeof(*VAR_5));
 VAR_5->name = FUNC_2(VAR_4);
 VAR_5->is_enum = 0;
 VAR_5->syntax = VAR_0;
 VAR_5->from_fname = FUNC_2(VAR_1->fname);
 VAR_5->from_lno = VAR_1->lno;
 FUNC_1(&VAR_5->enums);
 FUNC_0(&VAR_3, VAR_5, VAR_2);

 return (VAR_5);
}
