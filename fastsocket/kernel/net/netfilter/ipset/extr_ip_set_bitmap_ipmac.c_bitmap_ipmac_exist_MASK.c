
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ipmac_telem {scalar_t__ match; int timeout; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static inline int
FUNC_1(const struct ipmac_telem *VAR_2)
{
 return VAR_2->match == VAR_1 ||
        (VAR_2->match == VAR_0 &&
  !FUNC_0(VAR_2->timeout));
}
