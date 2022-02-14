
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct TYPE_2__ {int (* uart_input ) (struct oxygen*) ;} ;
struct oxygen {scalar_t__ uart_input_count; TYPE_1__ model; scalar_t__* uart_input; } ;


 scalar_t__ FUNC_0 (scalar_t__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct oxygen*,int ) ;
 scalar_t__ FUNC_2 (struct oxygen*) ;
 int FUNC_3 (struct oxygen*) ;
 scalar_t__ FUNC_4 (int) ;

__attribute__((used)) static void FUNC_5(struct oxygen *VAR_2)
{
 if (FUNC_4(!FUNC_2(VAR_2))) {

  FUNC_1(VAR_2, VAR_1);
  return;
 }
 do {
  u8 VAR_3 = FUNC_1(VAR_2, VAR_1);
  if (VAR_3 == VAR_0)
   continue;
  if (VAR_2->uart_input_count >= FUNC_0(VAR_2->uart_input))
   VAR_2->uart_input_count = 0;
  VAR_2->uart_input[VAR_2->uart_input_count++] = VAR_3;
 } while (FUNC_2(VAR_2));
 if (VAR_2->model.uart_input)
  VAR_2->model.uart_input(VAR_2);
}
