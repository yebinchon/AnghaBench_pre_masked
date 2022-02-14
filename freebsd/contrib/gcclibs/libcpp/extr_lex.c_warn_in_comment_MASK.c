
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef char uchar ;
typedef int cpp_reader ;
struct TYPE_3__ {char type; char* pos; } ;
typedef TYPE_1__ _cpp_line_note ;


 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (char const) ;
 int VAR_0 ;

__attribute__((used)) static bool
FUNC_2 (cpp_reader *VAR_1, _cpp_line_note *VAR_2)
{
  const uchar *VAR_3;




  if (VAR_2->type != '/')
    return 0;



  if (FUNC_0 (VAR_1, VAR_0))
    return VAR_2[1].pos == VAR_2->pos;


  VAR_3 = VAR_2->pos + 3;
  while (FUNC_1 (*VAR_3))
    VAR_3++;



  return (*VAR_3 == '\n' && VAR_3 < VAR_2[1].pos);
}
