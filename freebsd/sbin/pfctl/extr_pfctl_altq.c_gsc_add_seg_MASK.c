
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct segment {double m; double y; double x; } ;
struct gen_sc {int dummy; } ;


 double VAR_0 ;
 struct segment* FUNC_0 (struct segment*,int ) ;
 int VAR_1 ;
 struct segment* FUNC_1 (struct gen_sc*,double) ;

__attribute__((used)) static int
FUNC_2(struct gen_sc *VAR_2, double VAR_3, double VAR_4, double VAR_5, double VAR_6)
{
 struct segment *VAR_7, *VAR_8, *VAR_9;
 double VAR_10;

 if (VAR_5 == VAR_0)
  VAR_10 = VAR_0;
 else
  VAR_10 = VAR_3 + VAR_5;
 VAR_7 = FUNC_1(VAR_2, VAR_3);
 VAR_8 = FUNC_1(VAR_2, VAR_10);
 if (VAR_7 == ((void*)0) || VAR_8 == ((void*)0))
  return (-1);

 for (VAR_9 = VAR_7; VAR_9 != VAR_8; VAR_9 = FUNC_0(VAR_9, VAR_1)) {
  VAR_9->m += VAR_6;
  VAR_9->y += VAR_4 + (VAR_9->x - VAR_3) * VAR_6;
 }

 VAR_8 = FUNC_1(VAR_2, VAR_0);
 for (; VAR_9 != VAR_8; VAR_9 = FUNC_0(VAR_9, VAR_1)) {
  VAR_9->y += VAR_6 * VAR_5;
 }

 return (0);
}
