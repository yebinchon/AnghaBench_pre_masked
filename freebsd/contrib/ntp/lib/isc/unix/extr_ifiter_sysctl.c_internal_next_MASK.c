
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifa_msghdr {scalar_t__ ifam_msglen; } ;
typedef int isc_result_t ;
struct TYPE_3__ {unsigned int pos; int bufused; scalar_t__ buf; } ;
typedef TYPE_1__ isc_interfaceiter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;

__attribute__((used)) static isc_result_t
FUNC_1(isc_interfaceiter_t *VAR_2) {
 struct ifa_msghdr *VAR_3;
 FUNC_0 (VAR_2->pos < (unsigned int) VAR_2->bufused);

 VAR_3 = (struct ifa_msghdr *) ((char *) VAR_2->buf + VAR_2->pos);

 VAR_2->pos += VAR_3->ifam_msglen;

 if (VAR_2->pos >= VAR_2->bufused)
  return (VAR_0);

 return (VAR_1);
}
