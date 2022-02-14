
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {scalar_t__ nvp_type; int nvp_datasize; int nvp_data; } ;
typedef TYPE_1__ nvpair_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (unsigned char const*) ;
 int FUNC_3 (unsigned char const*) ;

const unsigned char *
FUNC_4(bool VAR_2, nvpair_t *VAR_3, const unsigned char *VAR_4,
     size_t *VAR_5)
{

 FUNC_1(VAR_3->nvp_type == VAR_1);

 if (VAR_3->nvp_datasize != sizeof(uint64_t)) {
  FUNC_0(VAR_0);
  return (((void*)0));
 }
 if (*VAR_5 < sizeof(uint64_t)) {
  FUNC_0(VAR_0);
  return (((void*)0));
 }

 if (VAR_2)
  VAR_3->nvp_data = FUNC_2(VAR_4);
 else
  VAR_3->nvp_data = FUNC_3(VAR_4);

 VAR_4 += sizeof(uint64_t);
 *VAR_5 -= sizeof(uint64_t);

 return (VAR_4);
}
