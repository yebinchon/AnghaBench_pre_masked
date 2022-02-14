
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int8_t ;
struct nf_logger {int name; } ;


 int VAR_0 ;
 int * FUNC_0 (size_t,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (int ,struct nf_logger const*) ;

int FUNC_4(u_int8_t VAR_3, const struct nf_logger *VAR_4)
{
 FUNC_1(&VAR_1);
 if (FUNC_0(VAR_3, VAR_4->name) == ((void*)0)) {
  FUNC_2(&VAR_1);
  return -VAR_0;
 }
 FUNC_3(VAR_2[VAR_3], VAR_4);
 FUNC_2(&VAR_1);
 return 0;
}
