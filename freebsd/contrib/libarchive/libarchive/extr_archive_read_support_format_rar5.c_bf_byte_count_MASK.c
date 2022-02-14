
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct compressed_block_header {int block_flags_u8; } ;



__attribute__((used)) static inline
uint8_t FUNC_0(const struct compressed_block_header* VAR_0) {
 return (VAR_0->block_flags_u8 >> 3) & 7;
}
