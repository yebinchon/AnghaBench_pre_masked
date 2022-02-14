
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int t ;
struct os_time {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int*,int ,int const*,int,int*) ;
 scalar_t__ FUNC_1 (int*,int ) ;
 int FUNC_2 (struct os_time*) ;
 int FUNC_3 (int*,int*,int ) ;

int FUNC_4(u8 *VAR_2)
{
 struct os_time VAR_3;
 u8 VAR_4[VAR_0];



 FUNC_2(&VAR_3);
 if (FUNC_1(VAR_2, VAR_1) < 0 ||
     FUNC_0(VAR_2, VAR_1, (const u8 *) &VAR_3, sizeof(VAR_3), VAR_4) < 0)
  return -1;

 FUNC_3(VAR_2, VAR_4, VAR_1);


 VAR_2[6] = (4 << 4) | (VAR_2[6] & 0x0f);


 VAR_2[8] = 0x80 | (VAR_2[8] & 0x3f);

 return 0;
}
