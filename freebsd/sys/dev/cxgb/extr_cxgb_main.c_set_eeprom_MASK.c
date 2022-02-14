
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int const uint8_t ;
typedef int u32 ;
struct port_info {struct adapter* adapter; } ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int const*,int ) ;
 int const* FUNC_1 (int,int ,int) ;
 int FUNC_2 (int const*,int const*,int) ;
 int FUNC_3 (struct adapter*,int,int*) ;
 int FUNC_4 (struct adapter*,int) ;
 int FUNC_5 (struct adapter*,int,int) ;

__attribute__((used)) static int
FUNC_6(struct port_info *VAR_4, const uint8_t *VAR_5, int VAR_6, int VAR_7)
{
 uint8_t *VAR_8;
 int VAR_9 = 0;
 u32 VAR_10, VAR_11, *VAR_12;
 struct adapter *VAR_13 = VAR_4->adapter;


 VAR_10 = VAR_7 & ~3;
 VAR_11 = (VAR_6 + (VAR_7 & 3) + 3) & ~3;

 if (VAR_10 != VAR_7 || VAR_11 != VAR_6) {
  VAR_8 = FUNC_1(VAR_11, VAR_1, VAR_2|VAR_3);
  if (!VAR_8)
   return (VAR_0);
  VAR_9 = FUNC_3(VAR_13, VAR_10, (u32 *)VAR_8);
  if (!VAR_9 && VAR_11 > 4)
   VAR_9 = FUNC_3(VAR_13,
           VAR_10 + VAR_11 - 4,
           (u32 *)&VAR_8[VAR_11 - 4]);
  if (VAR_9)
   goto out;
  FUNC_2(VAR_8 + (VAR_7 & 3), VAR_5, VAR_6);
 } else
  VAR_8 = (uint8_t *)(uintptr_t)VAR_5;

 VAR_9 = FUNC_4(VAR_13, 0);
 if (VAR_9)
  goto out;

 for (VAR_12 = (u32 *)VAR_8; !VAR_9 && VAR_11; VAR_11 -= 4, VAR_12++) {
  VAR_9 = FUNC_5(VAR_13, VAR_10, *VAR_12);
  VAR_10 += 4;
 }

 if (!VAR_9)
  VAR_9 = FUNC_4(VAR_13, 1);
out:
 if (VAR_8 != VAR_5)
  FUNC_0(VAR_8, VAR_1);
 return VAR_9;
}
