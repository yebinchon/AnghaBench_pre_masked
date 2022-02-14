
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mss_info {int bd_flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mss_info*,int) ;
 int FUNC_1 (struct mss_info*,int ) ;
 int FUNC_2 (struct mss_info*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct mss_info *VAR_4)
{
     int VAR_5;

     VAR_4->bd_flags |= VAR_0;
     FUNC_0(VAR_4, 203000);
     VAR_5 = FUNC_1(VAR_4, VAR_1);
     VAR_5 &= ~VAR_3;
     FUNC_2(VAR_4, VAR_1, VAR_5 | VAR_2);
}
