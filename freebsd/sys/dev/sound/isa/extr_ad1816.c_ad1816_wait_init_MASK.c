
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad1816_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ad1816_info*,int ) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(struct ad1816_info *VAR_2, int VAR_3)
{
     int VAR_4 = 0;

     for (; VAR_3--;)
  if ((VAR_4 = (FUNC_1(VAR_2, VAR_0) & VAR_1)) == 0) FUNC_0(10);
  else return VAR_4;
     FUNC_2("ad1816_wait_init failed 0x%02x.\n", VAR_4);
     return -1;
}
