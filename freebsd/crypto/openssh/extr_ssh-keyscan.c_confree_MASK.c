
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ c_status; int * c_ssh; scalar_t__ c_keytype; int * c_data; int * c_output_name; int * c_namebase; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int *,TYPE_1__*,int ) ;
 int VAR_2 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,int) ;
 TYPE_1__* VAR_3 ;
 int FUNC_4 (int *) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int VAR_7 ;

__attribute__((used)) static void
FUNC_6(int VAR_8)
{
 if (VAR_8 >= VAR_4 || VAR_3[VAR_8].c_status == VAR_1)
  FUNC_3("confree: attempt to free bad fdno %d", VAR_8);
 FUNC_4(VAR_3[VAR_8].c_namebase);
 FUNC_4(VAR_3[VAR_8].c_output_name);
 if (VAR_3[VAR_8].c_status == VAR_0)
  FUNC_4(VAR_3[VAR_8].c_data);
 VAR_3[VAR_8].c_status = VAR_1;
 VAR_3[VAR_8].c_keytype = 0;
 if (VAR_3[VAR_8].c_ssh) {
  FUNC_5(VAR_3[VAR_8].c_ssh);
  FUNC_4(VAR_3[VAR_8].c_ssh);
  VAR_3[VAR_8].c_ssh = ((void*)0);
 } else
  FUNC_2(VAR_8);
 FUNC_1(&VAR_7, &VAR_3[VAR_8], VAR_2);
 FUNC_0(VAR_8, VAR_6);
 VAR_5--;
}
