
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct via_info {int dummy; } ;
typedef int kobj_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct via_info*) ;
 int FUNC_3 (struct via_info*,int ,int,int) ;

__attribute__((used)) static int
FUNC_4(kobj_t VAR_2, void *VAR_3, int VAR_4, uint32_t VAR_5)
{
 struct via_info *VAR_6 = VAR_3;

 if (FUNC_2(VAR_6))
  return (-1);

 FUNC_3(VAR_6, VAR_1,
        VAR_0 | FUNC_1(VAR_4) |
        FUNC_0(VAR_5), 4);

 return (0);
}
