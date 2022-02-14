
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int __u8 ;
typedef int __u32 ;


 int VAR_0 ;
 int FUNC_0 (int,char*,int) ;

__attribute__((used)) static int FUNC_1(__u8 *VAR_1, unsigned int VAR_2, unsigned int *VAR_3,
     __u8 **VAR_4, unsigned int VAR_5,
     __u32 *VAR_6, __u32 VAR_7)
{
 if (VAR_2 > VAR_5) {
  FUNC_0(2, "BACKUP, bogus par.data len > %d\n", VAR_5);
  return -VAR_0;
 }
 if (*VAR_6 & VAR_7) {
  FUNC_0(2, "BACKUP, Par.data found twice 0x%x\n", VAR_7);
  return -VAR_0;
 }
 *VAR_3 = VAR_2;
 *VAR_4 = VAR_1;
 *VAR_6 |= VAR_7;
 return 0;
}
