
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int len; } ;
struct TYPE_7__ {int mode; int flags; TYPE_1__ DAPF; int writeflush; } ;
struct TYPE_6__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *) ;
 TYPE_2__* VAR_5 ;
 TYPE_3__ VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,int *) ;

__attribute__((used)) static void FUNC_7(void)
{
 if (!(VAR_6.mode & VAR_1) || !FUNC_6(VAR_3, &VAR_6.flags))
  return;
 FUNC_4(VAR_2, &VAR_6.flags);
 FUNC_2(
  &VAR_6.writeflush,
  FUNC_1(VAR_6.DAPF.len));
 FUNC_0(VAR_2, &VAR_6.flags);
 if (!FUNC_5(VAR_5)) {
  VAR_5->state = VAR_4;
  FUNC_3(FUNC_1(VAR_0));
 }
 FUNC_0(VAR_3, &VAR_6.flags);
}
