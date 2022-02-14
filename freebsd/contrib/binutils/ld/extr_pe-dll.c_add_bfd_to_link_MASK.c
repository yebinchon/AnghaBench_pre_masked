
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct bfd_link_info {int dummy; } ;
struct TYPE_4__ {int * the_bfd; } ;
typedef TYPE_1__ lang_input_statement_type ;
typedef int bfd ;


 int FUNC_0 (int *,struct bfd_link_info*) ;
 int FUNC_1 (char*,char const*) ;
 TYPE_1__* FUNC_2 (char const*,int ,int *) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4 (bfd *VAR_1, const char *VAR_2, struct bfd_link_info *VAR_3)
{
  lang_input_statement_type *VAR_4;

  VAR_4 = FUNC_2 (VAR_2,
       VAR_0,
       ((void*)0));
  VAR_4->the_bfd = VAR_1;
  FUNC_3 (VAR_4);

  if (!FUNC_0 (VAR_1, VAR_3))
    FUNC_1 ("%Xaddsym %s: %E\n", VAR_2);
}
