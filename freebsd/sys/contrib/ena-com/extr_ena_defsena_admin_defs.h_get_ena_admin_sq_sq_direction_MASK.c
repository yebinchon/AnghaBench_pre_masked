
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct ena_admin_sq {int sq_identity; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline uint8_t FUNC_0(const struct ena_admin_sq *VAR_2)
{
 return (VAR_2->sq_identity & VAR_0) >> VAR_1;
}
