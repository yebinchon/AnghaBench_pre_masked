
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned short u_short ;
struct ad1816_info {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ad1816_info*,int) ;
 int FUNC_1 (struct ad1816_info*,int ) ;
 int FUNC_2 (struct ad1816_info*,int ,unsigned int) ;

__attribute__((used)) static unsigned short
FUNC_3(struct ad1816_info *VAR_4, unsigned int VAR_5)
{
     u_short VAR_6 = 0;

     if (FUNC_0(VAR_4, 100) == -1) return 0;
     FUNC_2(VAR_4, VAR_0, 0);
     FUNC_2(VAR_4, VAR_0, (VAR_5 & VAR_1));
     if (FUNC_0(VAR_4, 100) == -1) return 0;
     VAR_6 = (FUNC_1(VAR_4, VAR_2) << 8) | FUNC_1(VAR_4, VAR_3);
     return VAR_6;
}
