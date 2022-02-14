
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct resource*,int ) ;
 int FUNC_1 (struct resource*) ;

__attribute__((used)) static int
FUNC_2(struct resource *VAR_2)
{
 int VAR_3, VAR_4, VAR_5;

     FUNC_0(VAR_2, VAR_1);
     VAR_3 = (FUNC_1(VAR_2) << 8) | FUNC_1(VAR_2);
 if (VAR_3 < 0x100 || VAR_3 > 0x4ff) return 0;
     if (VAR_3 == 0x0301) {

      FUNC_0(VAR_2, VAR_0);
      VAR_4 = (FUNC_1(VAR_2) << 8) | FUNC_1(VAR_2);
      VAR_5 = VAR_4 & 0x000f;
      VAR_4 &= 0xfff0;
      if (VAR_4 == 0x4880) VAR_3 |= 0x1000;
      else if (VAR_4 == 0x6880) VAR_3 = 0x0500 | VAR_5;
 }
 return VAR_3;
}
