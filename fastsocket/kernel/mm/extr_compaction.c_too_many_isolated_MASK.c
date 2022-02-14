
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct zone {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long FUNC_0 (struct zone*,int ) ;

__attribute__((used)) static bool FUNC_1(struct zone *VAR_6)
{
 unsigned long VAR_7, VAR_8, VAR_9;

 VAR_8 = FUNC_0(VAR_6, VAR_3) +
     FUNC_0(VAR_6, VAR_2);
 VAR_7 = FUNC_0(VAR_6, VAR_1) +
     FUNC_0(VAR_6, VAR_0);
 VAR_9 = FUNC_0(VAR_6, VAR_5) +
     FUNC_0(VAR_6, VAR_4);

 return VAR_9 > (VAR_8 + VAR_7) / 2;
}
