
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int dummy; } ;


 int FUNC_0 (struct pevent*) ;
 unsigned long long FUNC_1 (struct pevent*) ;
 int FUNC_2 (struct pevent*,char*,unsigned long long) ;
 char* FUNC_3 () ;

__attribute__((used)) static void FUNC_4(struct pevent *VAR_0)
{
 unsigned long long VAR_1;
 char *VAR_2;
 int VAR_3;
 int VAR_4;
 int VAR_5,VAR_6;

 VAR_3 = FUNC_0(VAR_0);

 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_2 = FUNC_3();

  VAR_4 = FUNC_0(VAR_0);
  for (VAR_6=0; VAR_6 < VAR_4; VAR_6++) {
   VAR_1 = FUNC_1(VAR_0);
   FUNC_2(VAR_0, VAR_2, VAR_1);
  }
 }
}
