
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct thread {TYPE_1__* td_frame; } ;
struct TYPE_2__ {int tf_pc; } ;


 int VAR_0 ;
 int FUNC_0 (struct thread*,int ,int ,int *,int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int
FUNC_4(struct thread *VAR_3, uint32_t VAR_4,
    uint32_t *VAR_5)
{
 int VAR_6;

 if (FUNC_1(VAR_4) || FUNC_2(VAR_4) ||
     FUNC_3(VAR_4)) {
  VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_3->td_frame->tf_pc,
      VAR_5, VAR_2, VAR_1);

  return (VAR_6);
 }

 return (VAR_0);
}
