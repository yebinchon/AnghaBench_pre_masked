
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct target_ops {int dummy; } ;
struct TYPE_4__ {int ptid; } ;
struct TYPE_3__ {int (* to_attach ) (char*,int) ;} ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,int,struct target_ops*,int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ) ;
 TYPE_2__ VAR_2 ;
 int FUNC_4 (char*) ;
 TYPE_1__ VAR_3 ;
 int FUNC_5 (int *) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7 (char *VAR_6, int VAR_7)
{
  VAR_3.to_attach (VAR_6, VAR_7);


  FUNC_1 ((char *) 0, VAR_7, (struct target_ops *) 0, VAR_0);

  if (VAR_4)
    {
      FUNC_4 ("sol-thread active.\n");
      VAR_2.ptid = VAR_1;
      FUNC_5 (&VAR_5);
      VAR_1 = FUNC_3 (VAR_1);
      if (FUNC_0 (VAR_1) == -1)
 VAR_1 = VAR_2.ptid;
      else
 FUNC_2 (VAR_1);
    }

}
