
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {int dummy; } ;
struct TYPE_2__ {int (* add_options ) (int,char**,int,struct option**,int,struct option**) ;} ;


 TYPE_1__* VAR_0 ;
 int FUNC_0 (int,char**,int,struct option**,int,struct option**) ;

void
FUNC_1 (int VAR_1, char **VAR_2, int VAR_3,
      struct option **VAR_4, int VAR_5,
      struct option **VAR_6)
{
  if (VAR_0->add_options)
    (*VAR_0->add_options) (VAR_1, VAR_2, VAR_3, VAR_4,
      VAR_5, VAR_6);
}
