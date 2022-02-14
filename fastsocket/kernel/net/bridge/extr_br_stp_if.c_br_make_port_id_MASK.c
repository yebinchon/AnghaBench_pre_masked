
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
typedef int port_id ;
typedef scalar_t__ __u8 ;
typedef int __u16 ;


 int VAR_0 ;

__attribute__((used)) static inline port_id FUNC_0(__u8 VAR_1, __u16 VAR_2)
{
 return ((u16)VAR_1 << VAR_0)
  | (VAR_2 & ((1<<VAR_0)-1));
}
