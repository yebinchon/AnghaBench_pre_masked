
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mlx5_cqe64 {int l4_hdr_type_etc; } ;



__attribute__((used)) static inline uint8_t FUNC_0(struct mlx5_cqe64 *VAR_0)
{
 return (VAR_0->l4_hdr_type_etc >> 2) & 0x3;
}
