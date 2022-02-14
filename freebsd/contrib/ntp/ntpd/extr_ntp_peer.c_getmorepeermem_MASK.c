
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct peer {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct peer*,int ) ;
 struct peer* FUNC_1 (int,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_2(void)
{
 int VAR_5;
 struct peer *VAR_6;

 VAR_6 = FUNC_1(VAR_0, sizeof(*VAR_6));

 for (VAR_5 = VAR_0 - 1; VAR_5 >= 0; VAR_5--)
  FUNC_0(VAR_2, &VAR_6[VAR_5], VAR_1);

 VAR_4 += VAR_0;
 VAR_3 += VAR_0;
}
