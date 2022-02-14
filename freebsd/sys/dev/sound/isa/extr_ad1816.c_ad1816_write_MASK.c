
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ad1816_info {int dummy; } ;


 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ad1816_info*,int) ;
 int FUNC_1 (struct ad1816_info*,int ,unsigned short) ;

__attribute__((used)) static void
FUNC_2(struct ad1816_info *VAR_4, unsigned int VAR_5, unsigned short VAR_6)
{
     if (FUNC_0(VAR_4, 100) == -1) return;
     FUNC_1(VAR_4, VAR_0, (VAR_5 & VAR_1));
     FUNC_1(VAR_4, VAR_3, (VAR_6 & 0x000000ff));
     FUNC_1(VAR_4, VAR_2, (VAR_6 & 0x0000ff00) >> 8);
}
