
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct sockaddr_storage {int dummy; } ;
typedef int ldns_rdf ;


 scalar_t__ VAR_0 ;
 struct sockaddr_storage* FUNC_0 (int const*,scalar_t__,size_t*) ;

struct sockaddr_storage *
FUNC_1(
  const ldns_rdf *VAR_1, uint16_t VAR_2, size_t *VAR_3)
{
 return FUNC_0(
   VAR_1, (VAR_2 == 0 ? (uint16_t)VAR_0 : VAR_2), VAR_3);
}
