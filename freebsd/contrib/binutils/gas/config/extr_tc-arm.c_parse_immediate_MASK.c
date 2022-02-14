
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ X_op; int X_add_number; } ;
typedef TYPE_1__ expressionS ;
typedef scalar_t__ bfd_boolean ;
struct TYPE_5__ {void* error; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 void* FUNC_0 (char*) ;
 TYPE_3__ VAR_5 ;
 int FUNC_1 (TYPE_1__*,char**,int ) ;

__attribute__((used)) static int
FUNC_2 (char **VAR_6, int *VAR_7, int VAR_8, int VAR_9,
   bfd_boolean VAR_10)
{
  expressionS VAR_11;
  FUNC_1 (&VAR_11, VAR_6, VAR_10 ? VAR_2 : VAR_1);
  if (VAR_11.X_op != VAR_3)
    {
      VAR_5.error = FUNC_0("constant expression required");
      return VAR_0;
    }

  if (VAR_11.X_add_number < VAR_8 || VAR_11.X_add_number > VAR_9)
    {
      VAR_5.error = FUNC_0("immediate value out of range");
      return VAR_0;
    }

  *VAR_7 = VAR_11.X_add_number;
  return VAR_4;
}
