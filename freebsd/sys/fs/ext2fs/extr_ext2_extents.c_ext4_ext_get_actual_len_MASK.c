
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct ext4_extent {scalar_t__ e_len; } ;


 scalar_t__ VAR_0 ;

__attribute__((used)) static inline uint16_t
FUNC_0(struct ext4_extent *VAR_1)
{

 return (VAR_1->e_len <= VAR_0 ?
     VAR_1->e_len : (VAR_1->e_len - VAR_0));
}
