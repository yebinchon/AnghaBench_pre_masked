
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct consdev {TYPE_1__* cn_arg; int cn_pri; int cn_name; } ;
struct TYPE_4__ {int * cookie; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int ,int ,int) ;
 TYPE_1__ VAR_6 ;
 scalar_t__ FUNC_2 (int ,TYPE_1__*) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(struct consdev *VAR_8)
{

 VAR_8->cn_pri = VAR_0;

 FUNC_0(VAR_6.cookie == ((void*)0), ("foo"));

 if (FUNC_2(VAR_4, &VAR_6))
  return;

 if (FUNC_3(&VAR_6))
  return;

 FUNC_1(VAR_8->cn_name, VAR_7, sizeof(VAR_8->cn_name));
 VAR_8->cn_pri = (VAR_5 & VAR_3) ? VAR_2 : VAR_1;
 VAR_8->cn_arg = &VAR_6;
}
