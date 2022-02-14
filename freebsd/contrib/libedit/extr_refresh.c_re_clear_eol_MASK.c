
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int EditLine ;


 int FUNC_0 (int,int ) ;
 int VAR_0 ;
 int FUNC_1 (int *,int) ;

__attribute__((used)) static void
FUNC_2(EditLine *VAR_1, int VAR_2, int VAR_3, int VAR_4)
{

 FUNC_0(1, (VAR_0, "re_clear_eol sx %d, fx %d, diff %d\n",
     VAR_3, VAR_2, VAR_4));

 if (VAR_2 < 0)
  VAR_2 = -VAR_2;
 if (VAR_3 < 0)
  VAR_3 = -VAR_3;
 if (VAR_2 > VAR_4)
  VAR_4 = VAR_2;
 if (VAR_3 > VAR_4)
  VAR_4 = VAR_3;

 FUNC_0(1, (VAR_0, "re_clear_eol %d\n", VAR_4));
 FUNC_1(VAR_1, VAR_4);
}
