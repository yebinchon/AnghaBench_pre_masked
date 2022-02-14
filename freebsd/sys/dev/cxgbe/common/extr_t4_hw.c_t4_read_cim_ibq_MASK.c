
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct adapter {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (struct adapter*,int ) ;
 int FUNC_2 (struct adapter*,int ,int ,int ,int,int) ;
 int FUNC_3 (struct adapter*,int ,int) ;

int FUNC_4(struct adapter *VAR_6, unsigned int VAR_7, u32 *VAR_8, size_t VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 unsigned int VAR_13;
 const unsigned int VAR_14 = VAR_2 * 4;

 if (VAR_7 > 5 || (VAR_9 & 3))
  return -VAR_3;

 VAR_13 = VAR_7 * VAR_14;
 if (VAR_9 > VAR_14)
  VAR_9 = VAR_14;




 VAR_12 = 1000000;

 for (VAR_10 = 0; VAR_10 < VAR_9; VAR_10++, VAR_13++) {
  FUNC_3(VAR_6, VAR_0, FUNC_0(VAR_13) |
        VAR_5);
  VAR_11 = FUNC_2(VAR_6, VAR_0, VAR_4, 0,
          VAR_12, 1);
  if (VAR_11)
   return VAR_11;
  *VAR_8++ = FUNC_1(VAR_6, VAR_1);
 }
 FUNC_3(VAR_6, VAR_0, 0);
 return VAR_10;
}
