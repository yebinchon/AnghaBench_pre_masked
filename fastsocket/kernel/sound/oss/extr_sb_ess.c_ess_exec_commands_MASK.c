
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct ess_command {int cmd; int data; } ;
struct TYPE_4__ {int channels; scalar_t__ bits; } ;
typedef TYPE_1__ sb_devc ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int ) ;

__attribute__((used)) static void FUNC_1
 (sb_devc *VAR_1, struct ess_command *VAR_2[])
{
 struct ess_command *VAR_3;

 VAR_3 = VAR_2 [ ((VAR_1->channels != 1) << 1) + (VAR_1->bits != VAR_0) ];

 while (VAR_3->cmd != -1) {
  FUNC_0 (VAR_1, VAR_3->cmd, VAR_3->data);
  VAR_3++;
 }
}
