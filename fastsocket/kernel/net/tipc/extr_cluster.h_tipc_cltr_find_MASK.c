
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct cluster {int dummy; } ;
struct _zone {struct cluster** clusters; } ;


 struct _zone* FUNC_0 (int ) ;

__attribute__((used)) static inline struct cluster *FUNC_1(u32 VAR_0)
{
 struct _zone *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1)
  return VAR_1->clusters[1];
 return ((void*)0);
}
