
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_3__ {int cclk; } ;
struct TYPE_4__ {TYPE_1__ vpd; } ;
struct adapter {TYPE_2__ params; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;

__attribute__((used)) static inline uint64_t
FUNC_1(struct adapter *VAR_1, uint64_t VAR_2)
{
 uint64_t VAR_3 = FUNC_0(VAR_2) & 0xfffffffffffffff;

 if (VAR_3 > VAR_0 / 1000000)
  return (VAR_3 / VAR_1->params.vpd.cclk * 1000000);
 else
  return (VAR_3 * 1000000 / VAR_1->params.vpd.cclk);
}
