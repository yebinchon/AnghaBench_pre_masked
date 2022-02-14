
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct thread {int dummy; } ;
struct TYPE_5__ {scalar_t__ dh_size; scalar_t__ dh_sigstate; int dh_type; int dh_waitlisthead; } ;
struct TYPE_6__ {TYPE_1__ no_dh; int no_obj; } ;
typedef TYPE_2__ nt_objref ;
typedef int ndis_status ;
typedef int ndis_handle ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *,TYPE_2__*,int ) ;
 int VAR_6 ;
 TYPE_2__* FUNC_2 (int,int ,int) ;
 int VAR_7 ;

__attribute__((used)) static ndis_status
FUNC_3(ndis_handle VAR_8, uint32_t VAR_9, void *VAR_10,
 uint8_t VAR_11, void **VAR_12, void **VAR_13)
{
 nt_objref *VAR_14;

 VAR_14 = FUNC_2(sizeof(nt_objref), VAR_1, VAR_2|VAR_3);
 if (VAR_14 == ((void*)0))
  return (VAR_4);

 FUNC_0((&VAR_14->no_dh.dh_waitlisthead));
 VAR_14->no_obj = VAR_8;
 VAR_14->no_dh.dh_type = VAR_0;
 VAR_14->no_dh.dh_sigstate = 0;
 VAR_14->no_dh.dh_size = (uint8_t)(sizeof(struct thread) /
     sizeof(uint32_t));
 FUNC_1(&VAR_7, VAR_14, VAR_6);
 *VAR_12 = VAR_14;

 return (VAR_5);
}
