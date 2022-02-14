
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {scalar_t__ dtrh_epid; } ;
typedef TYPE_1__ dtrace_rechdr_t ;
typedef int dtrace_epid_t ;
struct TYPE_5__ {size_t dtbd_oldest; size_t dtbd_size; int dtbd_timestamp; scalar_t__ dtbd_data; } ;
typedef TYPE_2__ dtrace_bufdesc_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static uint64_t
FUNC_1(void *VAR_1, void *VAR_2)
{
 dtrace_bufdesc_t *VAR_3 = VAR_1;
 size_t VAR_4 = VAR_3->dtbd_oldest;

 while (VAR_4 < VAR_3->dtbd_size) {
  dtrace_rechdr_t *VAR_5 =

      (dtrace_rechdr_t *)(VAR_3->dtbd_data + VAR_4);
  if (VAR_5->dtrh_epid == VAR_0) {
   VAR_4 += sizeof (dtrace_epid_t);
  } else {
   return (FUNC_0(VAR_5));
  }
 }


 return (VAR_3->dtbd_timestamp);
}
