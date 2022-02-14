
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct resource_i* __r_i; } ;
struct resource_i {TYPE_1__ r_r; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct resource_i* FUNC_0 (int,int ,int) ;

__attribute__((used)) static __inline struct resource_i *
FUNC_1(int VAR_2)
{
 struct resource_i *VAR_3;

 VAR_3 = FUNC_0(sizeof *VAR_3, VAR_0, VAR_2 | VAR_1);
 if (VAR_3 != ((void*)0)) {
  VAR_3->r_r.__r_i = VAR_3;
 }
 return (VAR_3);
}
