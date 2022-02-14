
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int tree ;
typedef int section ;
struct TYPE_2__ {unsigned int (* section_type_flags ) (int ,char const*,int) ;} ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 int * FUNC_4 (char const*,unsigned int,int ) ;
 unsigned int FUNC_5 (int ,char const*,int) ;
 TYPE_1__ VAR_0 ;

section *
FUNC_6 (tree VAR_1, const char *VAR_2, int VAR_3)
{
  unsigned int VAR_4;

  FUNC_3 (!VAR_1 || FUNC_0 (VAR_1));
  if (VAR_2 == ((void*)0))
    VAR_2 = FUNC_2 (FUNC_1 (VAR_1));

  VAR_4 = VAR_0.section_type_flags (VAR_1, VAR_2, VAR_3);

  return FUNC_4 (VAR_2, VAR_4, VAR_1);
}
