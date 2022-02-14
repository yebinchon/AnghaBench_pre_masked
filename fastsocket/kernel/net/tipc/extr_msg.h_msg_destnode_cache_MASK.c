
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_msg {int * hdr; } ;



__attribute__((used)) static inline u32 FUNC_0(struct tipc_msg *VAR_0)
{
 return VAR_0->hdr[2];
}
