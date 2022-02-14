
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {TYPE_2__* bfd_section; } ;
typedef TYPE_1__ segment_info_type ;
typedef TYPE_2__* segT ;
struct TYPE_14__ {struct TYPE_14__* output_section; } ;


 char* FUNC_0 (int ,TYPE_2__*) ;
 TYPE_2__* FUNC_1 (int ,char const*) ;
 TYPE_2__* FUNC_2 (int ,char const*) ;
 int FUNC_3 (int ,TYPE_2__*,TYPE_1__*) ;
 TYPE_2__* VAR_0 ;
 TYPE_1__* FUNC_4 (TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_5 (char const*,char const*) ;
 TYPE_1__* FUNC_6 (int,int) ;

segT
FUNC_7 (const char *VAR_2, int VAR_3)
{
  segT VAR_4;
  segment_info_type *VAR_5;
  const char *VAR_6 = (VAR_0
         ? FUNC_0 (VAR_1, VAR_0)
         : 0);

  if (!VAR_3
      && VAR_6
      && (VAR_6 == VAR_2
   || !FUNC_5 (VAR_6, VAR_2)))
    return VAR_0;

  if (!VAR_3)
    VAR_4 = FUNC_2 (VAR_1, VAR_2);
  else
    VAR_4 = FUNC_1 (VAR_1, VAR_2);

  VAR_5 = FUNC_4 (VAR_4);
  if (! VAR_5)
    {
      VAR_4->output_section = VAR_4;
      VAR_5 = FUNC_6 (1, sizeof (*VAR_5));
      VAR_5->bfd_section = VAR_4;
      (void) FUNC_3 (VAR_1, VAR_4, VAR_5);
    }
  return VAR_4;
}
