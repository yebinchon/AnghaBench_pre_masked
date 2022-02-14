
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int source_location ;
typedef int cpp_reader ;
typedef int cpp_hashnode ;
struct TYPE_4__ {scalar_t__ to_line; } ;
struct TYPE_3__ {int src_line; int outf; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *,int *) ;
 char VAR_0 ;
 int FUNC_2 (char const*,int ) ;
 int VAR_1 ;
 TYPE_2__* FUNC_3 (int *,int ) ;
 int FUNC_4 (int ) ;
 TYPE_1__ VAR_2 ;
 int FUNC_5 (char,int ) ;

__attribute__((used)) static void
FUNC_6 (cpp_reader *VAR_3, source_location VAR_4, cpp_hashnode *VAR_5)
{
  FUNC_4 (VAR_4);
  FUNC_2 ("#define ", VAR_2.outf);


  if (VAR_0 == 'D')
    FUNC_2 ((const char *) FUNC_1 (VAR_3, VAR_5),
    VAR_2.outf);
  else
    FUNC_2 ((const char *) FUNC_0 (VAR_5), VAR_2.outf);

  FUNC_5 ('\n', VAR_2.outf);
  if (FUNC_3 (&VAR_1, VAR_4)->to_line != 0)
    VAR_2.src_line++;
}
