
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;
struct scan_control {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct scan_control*) ;
 unsigned long FUNC_2 (struct zone*,int ) ;

__attribute__((used)) static int FUNC_3(struct zone *VAR_4, int VAR_5,
  struct scan_control *VAR_6)
{
 unsigned long VAR_7, VAR_8;

 if (FUNC_0())
  return 0;

 if (!FUNC_1(VAR_6))
  return 0;

 if (VAR_5) {
  VAR_7 = FUNC_2(VAR_4, VAR_1);
  VAR_8 = FUNC_2(VAR_4, VAR_3);
 } else {
  VAR_7 = FUNC_2(VAR_4, VAR_0);
  VAR_8 = FUNC_2(VAR_4, VAR_2);
 }

 return VAR_8 > VAR_7;
}
