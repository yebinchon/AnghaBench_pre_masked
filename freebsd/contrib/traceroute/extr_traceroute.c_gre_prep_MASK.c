
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct outdata {int seq; } ;
struct grehdr {void* callId; scalar_t__ length; void* proto; void* flags; } ;


 void* FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;

void
FUNC_1(struct outdata *VAR_3)
{
 struct grehdr *const VAR_4 = (struct grehdr *) VAR_1;

 VAR_4->flags = FUNC_0(0x2001);
 VAR_4->proto = FUNC_0(VAR_2);
 VAR_4->length = 0;
 VAR_4->callId = FUNC_0(VAR_0 + VAR_3->seq);
}
