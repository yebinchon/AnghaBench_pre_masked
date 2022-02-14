
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






union ibv_gid {int* raw; } ;



__attribute__((used)) static int FUNC_0(const union ibv_gid *VAR_0)
{
 return VAR_0->raw[0] == 0xff;
}
