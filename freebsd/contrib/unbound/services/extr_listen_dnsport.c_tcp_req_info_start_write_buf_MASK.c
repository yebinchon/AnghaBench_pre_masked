
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct tcp_req_info {TYPE_1__* cp; } ;
struct TYPE_2__ {scalar_t__ tcp_is_reading; int buffer; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *,size_t) ;

__attribute__((used)) static void
FUNC_3(struct tcp_req_info* VAR_0, uint8_t* VAR_1,
 size_t VAR_2)
{
 FUNC_0(VAR_0->cp->buffer);
 FUNC_2(VAR_0->cp->buffer, VAR_1, VAR_2);
 FUNC_1(VAR_0->cp->buffer);

 VAR_0->cp->tcp_is_reading = 0;
}
