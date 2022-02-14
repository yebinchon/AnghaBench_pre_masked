
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct mss_info*,int ) ;
 int FUNC_2 (char*,int,int) ;

__attribute__((used)) static int
FUNC_3(struct mss_info *VAR_2, int VAR_3)
{
     int VAR_4 = VAR_3, VAR_5 = 0;
     for (; VAR_3 > 0; VAR_3--)
  if ((VAR_5 = FUNC_1(VAR_2, VAR_1)) & VAR_0) FUNC_0(10);
  else return VAR_5;
     FUNC_2("AD_WAIT_INIT FAILED %d 0x%02x\n", VAR_4, VAR_5);
     return VAR_5;
}
