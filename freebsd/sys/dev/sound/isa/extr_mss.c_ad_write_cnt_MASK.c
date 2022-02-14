
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_short ;
struct mss_info {int dummy; } ;


 int FUNC_0 (struct mss_info*,int,int) ;

__attribute__((used)) static void
FUNC_1(struct mss_info *VAR_0, int VAR_1, u_short VAR_2)
{
     FUNC_0(VAR_0, VAR_1+1, VAR_2 & 0xff);
     FUNC_0(VAR_0, VAR_1, VAR_2 >> 8);
}
