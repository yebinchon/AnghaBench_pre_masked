
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;
struct td_thragent {int ph; } ;
typedef int psaddr_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int *,int,int ) ;

int
FUNC_1(const struct td_thragent *VAR_1, psaddr_t VAR_2, uint32_t *VAR_3)
{
 uint64_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_0(VAR_1->ph, VAR_2, &VAR_4, sizeof(int), VAR_0);
 if (!VAR_5)
  *VAR_3 = VAR_4;

 return (VAR_5);
}
