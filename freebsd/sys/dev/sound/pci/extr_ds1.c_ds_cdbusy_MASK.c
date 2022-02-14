
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sc_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sc_info*,int,int) ;

__attribute__((used)) static int
FUNC_1(struct sc_info *VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;

 VAR_7 = VAR_5? VAR_2 : VAR_1;
 VAR_6 = VAR_3;
 while (VAR_6 > 0) {
  if (!(FUNC_0(VAR_4, VAR_7, 2) & 0x8000))
   return 0;
  VAR_6--;
 }
 return VAR_0;
}
