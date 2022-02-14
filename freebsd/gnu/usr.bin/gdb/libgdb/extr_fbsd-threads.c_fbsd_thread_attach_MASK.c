
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct TYPE_2__ {int (* to_attach ) (char*,int) ;} ;


 int FUNC_0 (char*,int,struct target_ops*,int ) ;
 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static void
FUNC_3 (char *VAR_6, int VAR_7)
{
  VAR_3 = 0;

  VAR_1.to_attach (VAR_6, VAR_7);


  FUNC_0 ((char *) 0, VAR_7, (struct target_ops *) 0, VAR_0);

  if (VAR_5 && !VAR_2)
    FUNC_1(&VAR_4);
}
