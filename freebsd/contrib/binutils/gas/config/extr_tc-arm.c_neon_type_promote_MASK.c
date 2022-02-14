
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct neon_type_el {int size; int type; } ;


 unsigned int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned int,int *,int *) ;

__attribute__((used)) static struct neon_type_el
FUNC_2 (struct neon_type_el *VAR_1, unsigned VAR_2)
{
  struct neon_type_el VAR_3 = *VAR_1;

  FUNC_0 ((VAR_2 & VAR_0) != 0);

  FUNC_1 (VAR_2, &VAR_3.type, &VAR_3.size);

  return VAR_3;
}
