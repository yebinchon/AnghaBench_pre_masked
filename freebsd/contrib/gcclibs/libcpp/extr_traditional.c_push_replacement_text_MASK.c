
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef char uchar ;
typedef int cpp_reader ;
struct TYPE_9__ {char* text; } ;
struct TYPE_10__ {int used; int traditional; size_t count; TYPE_2__ exp; } ;
typedef TYPE_3__ cpp_macro ;
struct TYPE_8__ {TYPE_3__* macro; } ;
struct TYPE_11__ {int flags; TYPE_1__ value; } ;
typedef TYPE_4__ cpp_hashnode ;


 int VAR_0 ;
 char* FUNC_0 (int *,TYPE_4__*) ;
 int FUNC_1 (int *,TYPE_4__*,char const*,size_t) ;
 char* FUNC_2 (int *,size_t) ;
 int FUNC_3 (char*,char const*,size_t) ;
 size_t FUNC_4 (char const*) ;

__attribute__((used)) static void
FUNC_5 (cpp_reader *VAR_1, cpp_hashnode *VAR_2)
{
  size_t VAR_3;
  const uchar *VAR_4;
  uchar *VAR_5;

  if (VAR_2->flags & VAR_0)
    {
      VAR_4 = FUNC_0 (VAR_1, VAR_2);
      VAR_3 = FUNC_4 (VAR_4);
      VAR_5 = FUNC_2 (VAR_1, VAR_3 + 1);
      FUNC_3 (VAR_5, VAR_4, VAR_3);
      VAR_5[VAR_3]='\n';
      VAR_4 = VAR_5;
    }
  else
    {
      cpp_macro *VAR_6 = VAR_2->value.macro;
      VAR_6->used = 1;
      VAR_4 = VAR_6->exp.text;
      VAR_6->traditional = 1;
      VAR_3 = VAR_6->count;
    }

  FUNC_1 (VAR_1, VAR_2, VAR_4, VAR_3);
}
