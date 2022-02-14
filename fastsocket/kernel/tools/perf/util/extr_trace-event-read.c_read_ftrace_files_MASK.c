
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int dummy; } ;


 int FUNC_0 (struct pevent*) ;
 unsigned long long FUNC_1 (struct pevent*) ;
 int FUNC_2 (struct pevent*,unsigned long long) ;

__attribute__((used)) static void FUNC_3(struct pevent *VAR_0)
{
 unsigned long long VAR_1;
 int VAR_2;
 int VAR_3;

 VAR_2 = FUNC_0(VAR_0);

 for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
  VAR_1 = FUNC_1(VAR_0);
  FUNC_2(VAR_0, VAR_1);
 }
}
