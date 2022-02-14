
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int fd; int selectable_fd; int fcode; scalar_t__ tstamp_precision_count; int * tstamp_precision_list; scalar_t__ tstamp_type_count; int * tstamp_type_list; scalar_t__ dlt_count; int * dlt_list; int * buffer; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

void
FUNC_3(pcap_t *VAR_0)
{
 if (VAR_0->buffer != ((void*)0)) {
  FUNC_1(VAR_0->buffer);
  VAR_0->buffer = ((void*)0);
 }
 if (VAR_0->dlt_list != ((void*)0)) {
  FUNC_1(VAR_0->dlt_list);
  VAR_0->dlt_list = ((void*)0);
  VAR_0->dlt_count = 0;
 }
 if (VAR_0->tstamp_type_list != ((void*)0)) {
  FUNC_1(VAR_0->tstamp_type_list);
  VAR_0->tstamp_type_list = ((void*)0);
  VAR_0->tstamp_type_count = 0;
 }
 if (VAR_0->tstamp_precision_list != ((void*)0)) {
  FUNC_1(VAR_0->tstamp_precision_list);
  VAR_0->tstamp_precision_list = ((void*)0);
  VAR_0->tstamp_precision_count = 0;
 }
 FUNC_2(&VAR_0->fcode);

 if (VAR_0->fd >= 0) {
  FUNC_0(VAR_0->fd);
  VAR_0->fd = -1;
 }
 VAR_0->selectable_fd = -1;

}
