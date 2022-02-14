
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ibv_gid {int* raw; } ;



__attribute__((used)) static int FUNC_0(union ibv_gid *VAR_0)
{
 return !(VAR_0->raw[8] | VAR_0->raw[9] | VAR_0->raw[10] | VAR_0->raw[11] |
   VAR_0->raw[12] | VAR_0->raw[13] | VAR_0->raw[14] | VAR_0->raw[15]);
}
