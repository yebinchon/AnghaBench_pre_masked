
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ibv_gid {int* raw; } ;
typedef int uint16_t ;



__attribute__((used)) static uint16_t FUNC_0(union ibv_gid *VAR_0)
{
 uint16_t VAR_1;
 VAR_1 = VAR_0->raw[11] << 8 | VAR_0->raw[12];
 return VAR_1 < 0x1000 ? VAR_1 : 0xffff;
}
