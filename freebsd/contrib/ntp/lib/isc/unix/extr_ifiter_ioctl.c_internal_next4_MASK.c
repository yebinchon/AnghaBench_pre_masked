
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct sockaddr {int dummy; } ;
struct TYPE_6__ {int sa_len; } ;
struct ifreq {TYPE_1__ ifr_addr; } ;
typedef int isc_result_t ;
struct TYPE_7__ {scalar_t__ ifc_len; scalar_t__ ifc_req; } ;
struct TYPE_8__ {unsigned int pos; TYPE_2__ ifc; } ;
typedef TYPE_3__ isc_interfaceiter_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (TYPE_3__*) ;

__attribute__((used)) static isc_result_t
FUNC_2(isc_interfaceiter_t *VAR_2) {




 if (VAR_2->pos < (unsigned int) VAR_2->ifc.ifc_len) {
   VAR_2->pos += sizeof(struct ifreq);

 } else {
  FUNC_0(VAR_2->pos == (unsigned int) VAR_2->ifc.ifc_len);

  return (FUNC_1(VAR_2));



 }
 return (VAR_1);
}
