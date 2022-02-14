
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cluster {int dummy; } ;
struct _zone {struct cluster** clusters; } ;


 int FUNC_0 (struct cluster*,int) ;
 size_t FUNC_1 (int) ;
 int VAR_0 ;

u32 FUNC_2(struct _zone *VAR_1, u32 VAR_2, u32 VAR_3)
{
 struct cluster *VAR_4;
 u32 VAR_5;
 u32 VAR_6;

 if (!VAR_1)
  return 0;
 VAR_4 = VAR_1->clusters[FUNC_1(VAR_2)];
 VAR_6 = VAR_4 ? FUNC_0(VAR_4, VAR_3) : 0;
 if (VAR_6)
  return VAR_6;


 for (VAR_5 = 1; VAR_5 <= VAR_0; VAR_5++) {
  VAR_4 = VAR_1->clusters[VAR_5];
  VAR_6 = VAR_4 ? FUNC_0(VAR_4, VAR_3) : 0;
  if (VAR_6)
   return VAR_6;
 }
 return 0;
}
