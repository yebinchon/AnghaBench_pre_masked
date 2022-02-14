
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int c_keytype; int c_output_name; int c_namelist; } ;
typedef TYPE_1__ con ;


 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static int
FUNC_2(int VAR_1)
{
 con *VAR_2 = &VAR_0[VAR_1];
 int VAR_3;

 VAR_3 = FUNC_0(VAR_2->c_namelist, VAR_2->c_output_name, VAR_2->c_keytype);
 FUNC_1(VAR_1);
 return (VAR_3);
}
