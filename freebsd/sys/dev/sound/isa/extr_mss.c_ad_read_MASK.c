
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct mss_info {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mss_info*,int) ;
 int FUNC_1 (struct mss_info*,int ) ;
 int FUNC_2 (struct mss_info*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct mss_info *VAR_3, int VAR_4)
{
     int VAR_5;

     FUNC_0(VAR_3, 201000);
     VAR_5 = FUNC_1(VAR_3, VAR_2) & ~VAR_1;
     FUNC_2(VAR_3, VAR_2, (u_char)(VAR_4 & VAR_1) | VAR_5);
     VAR_5 = FUNC_1(VAR_3, VAR_0);

     return VAR_5;
}
