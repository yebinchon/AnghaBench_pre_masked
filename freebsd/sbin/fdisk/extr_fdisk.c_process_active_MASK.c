
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct dos_partition {scalar_t__ dp_flag; } ;
struct TYPE_7__ {struct dos_partition* parts; } ;
struct TYPE_6__ {int n_args; TYPE_1__* args; } ;
struct TYPE_5__ {int arg_val; } ;
typedef TYPE_2__ CMD ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_4__ VAR_4 ;
 int FUNC_0 (char*,int ,...) ;

__attribute__((used)) static int
FUNC_1(CMD *VAR_5)
{
    int VAR_6 = 0, VAR_7, VAR_8;
    struct dos_partition *VAR_9;

 while (1) {
 VAR_2 = 1;
  if (VAR_5->n_args != 1) {
     FUNC_0("ERROR line %d: incorrect number of active args",
      VAR_3);
     VAR_6 = 0;
     break;
 }
 VAR_7 = VAR_5->args[0].arg_val;
  if (VAR_7 < 1 || VAR_7 > 4) {
     FUNC_0("ERROR line %d: invalid partition number %d",
      VAR_3, VAR_7);
     break;
 }



 VAR_9 = VAR_4.parts;
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++)
     VAR_9[VAR_8].dp_flag = 0;
 VAR_9[VAR_7-1].dp_flag = VAR_0;

 VAR_6 = 1;
 break;
    }
    return (VAR_6);
}
