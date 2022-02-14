
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ rfile; int fcode; int * buffer; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ VAR_0 ;

void
FUNC_3(pcap_t *VAR_1)
{
 if (VAR_1->rfile != VAR_0)
  (void)FUNC_0(VAR_1->rfile);
 if (VAR_1->buffer != ((void*)0))
  FUNC_1(VAR_1->buffer);
 FUNC_2(&VAR_1->fcode);
}
