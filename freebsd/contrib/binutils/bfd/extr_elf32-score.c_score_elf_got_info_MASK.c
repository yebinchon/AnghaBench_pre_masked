
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct score_got_info {int dummy; } ;
typedef int bfd ;
typedef int asection ;
struct TYPE_3__ {struct score_got_info* got_info; } ;
struct TYPE_4__ {TYPE_1__ u; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int * FUNC_1 (int *) ;
 int * FUNC_2 (int *,int ) ;
 TYPE_2__* FUNC_3 (int *) ;

__attribute__((used)) static struct score_got_info *
FUNC_4 (bfd *VAR_1, asection **VAR_2)
{
  asection *VAR_3;
  struct score_got_info *VAR_4;

  VAR_3 = FUNC_2 (VAR_1, VAR_0);
  FUNC_0 (VAR_3 != ((void*)0));
  FUNC_0 (FUNC_1 (VAR_3) != ((void*)0));
  VAR_4 = FUNC_3 (VAR_3)->u.got_info;
  FUNC_0 (VAR_4 != ((void*)0));

  if (VAR_2)
    *VAR_2 = VAR_3;
  return VAR_4;
}
