
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int signaled; } ;
struct TYPE_4__ {int term_event; TYPE_1__ term_signal; int signaled; } ;
typedef int DWORD ;
typedef int BOOL ;




 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 TYPE_2__ VAR_2 ;

__attribute__((used)) static BOOL FUNC_1(DWORD VAR_3)
{
 switch (VAR_3) {
 case 128:
 case 129:
  VAR_2.signaled++;
  VAR_2.term_signal.signaled++;
  FUNC_0(VAR_2.term_event);
  return VAR_1;
 default:
  return VAR_0;
 }
}
