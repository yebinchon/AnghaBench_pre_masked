
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sv_permsocks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (TYPE_1__*,char*,int *,int ,int,int ) ;

__attribute__((used)) static int FUNC_2(int VAR_4)
{
 int VAR_5;
 if (!FUNC_0(&VAR_3->sv_permsocks))
  return 0;

 VAR_5 = FUNC_1(VAR_3, "udp", &VAR_2, VAR_0, VAR_4,
     VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 VAR_5 = FUNC_1(VAR_3, "tcp", &VAR_2, VAR_0, VAR_4,
     VAR_1);
 if (VAR_5 < 0)
  return VAR_5;

 return 0;
}
