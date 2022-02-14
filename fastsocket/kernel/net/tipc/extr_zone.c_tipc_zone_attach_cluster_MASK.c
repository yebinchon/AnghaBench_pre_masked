
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct cluster {int addr; } ;
struct _zone {struct cluster** clusters; } ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (int) ;
 size_t VAR_0 ;

void FUNC_2(struct _zone *VAR_1, struct cluster *VAR_2)
{
 u32 VAR_3 = FUNC_1(VAR_2->addr);

 FUNC_0(VAR_2->addr);
 FUNC_0(VAR_3 <= VAR_0);
 FUNC_0(VAR_1->clusters[VAR_3] == ((void*)0));
 VAR_1->clusters[VAR_3] = VAR_2;
}
