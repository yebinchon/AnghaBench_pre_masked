
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct vlapic {int * lvt_last; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static __inline uint32_t
FUNC_2(struct vlapic *VAR_0, uint32_t VAR_1)
{
 int VAR_2;
 uint32_t VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = FUNC_0(&VAR_0->lvt_last[VAR_2]);
 return (VAR_3);
}
