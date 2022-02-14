
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct gre_protocol {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int * FUNC_0 (struct gre_protocol const**,int *,struct gre_protocol const*) ;
 int * VAR_3 ;

int FUNC_1(const struct gre_protocol *VAR_4, u8 VAR_5)
{
 if (VAR_5 >= VAR_2)
  return -VAR_1;

 return (FUNC_0((const struct gre_protocol **)&VAR_3[VAR_5], ((void*)0), VAR_4) == ((void*)0)) ?
  0 : -VAR_0;
}
