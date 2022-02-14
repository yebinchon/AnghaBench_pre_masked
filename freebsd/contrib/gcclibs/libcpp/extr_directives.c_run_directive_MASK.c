
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uchar ;
struct TYPE_12__ {TYPE_7__* directive; } ;
typedef TYPE_1__ cpp_reader ;
struct TYPE_13__ {int (* handler ) (TYPE_1__*) ;} ;


 scalar_t__ FUNC_0 (TYPE_1__*,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int const*,size_t,int) ;
 TYPE_7__* VAR_0 ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*) ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_8 (cpp_reader *VAR_2, int VAR_3, const char *VAR_4, size_t VAR_5)
{
  FUNC_3 (VAR_2, (const uchar *) VAR_4, VAR_5,
                       1);
  FUNC_6 (VAR_2);



  FUNC_1 (VAR_2);

  VAR_2->directive = &VAR_0[VAR_3];
  if (FUNC_0 (VAR_2, VAR_1))
    FUNC_5 (VAR_2);
  VAR_2->directive->handler (VAR_2);
  FUNC_4 (VAR_2, 1);
  FUNC_2 (VAR_2);
}
