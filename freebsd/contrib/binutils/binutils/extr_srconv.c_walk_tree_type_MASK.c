
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct coff_type {int dummy; } ;
struct coff_symbol {TYPE_4__* type; TYPE_1__* where; } ;
struct coff_sfile {int dummy; } ;
struct IT_dty {int end; int neg; } ;
struct TYPE_6__ {int code; } ;
struct TYPE_7__ {TYPE_2__ function; } ;
struct TYPE_8__ {scalar_t__ type; TYPE_3__ u; } ;
struct TYPE_5__ {int section; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct IT_dty*) ;
 int FUNC_1 (int ,struct coff_sfile*,int ,int,int ) ;
 int FUNC_2 (struct coff_sfile*,struct coff_symbol*,struct coff_type*,int) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (struct coff_sfile*,int ,int ,int ,int) ;

__attribute__((used)) static void
FUNC_5 (struct coff_sfile *VAR_4, struct coff_symbol *VAR_5,
  struct coff_type *VAR_6, int VAR_7)
{
  if (VAR_5->type->type == VAR_2)
    {
      struct IT_dty VAR_8;

      VAR_8.end = 0;
      VAR_8.neg = 0x1001;

      FUNC_0 (VAR_3, &VAR_8);
      FUNC_2 (VAR_4, VAR_5, VAR_6, VAR_7);
      VAR_8.end = 1;
      FUNC_0 (VAR_3, &VAR_8);

      FUNC_4 (VAR_4,
      VAR_5->where->section,
      VAR_5->type->u.function.code,
      VAR_1, VAR_7);
      FUNC_4 (VAR_4, VAR_5->where->section,
      VAR_5->type->u.function.code,
      VAR_0, VAR_7);
      FUNC_1 (VAR_5->where->section,
         VAR_4,
         VAR_5->type->u.function.code,
         VAR_7 + 1, VAR_0);

      FUNC_3 (VAR_5->where->section,
    VAR_5->type->u.function.code,
    VAR_0);
      FUNC_3 (VAR_5->where->section,
    VAR_5->type->u.function.code, VAR_1);
    }
  else
    {
      struct IT_dty VAR_9;

      VAR_9.end = 0;
      VAR_9.neg = 0x1001;
      FUNC_0 (VAR_3, &VAR_9);
      FUNC_2 (VAR_4, VAR_5, VAR_6, VAR_7);
      VAR_9.end = 1;
      FUNC_0 (VAR_3, &VAR_9);
    }
}
