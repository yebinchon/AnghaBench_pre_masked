
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int dummy; } ;


 int FUNC_0 (char*) ;
 char* FUNC_1 (unsigned int) ;
 int FUNC_2 (struct pevent*,char*,unsigned int) ;
 unsigned int FUNC_3 (struct pevent*) ;
 int FUNC_4 (char*,unsigned int) ;

__attribute__((used)) static void FUNC_5(struct pevent *VAR_0)
{
 unsigned int VAR_1;
 char *VAR_2;

 VAR_1 = FUNC_3(VAR_0);
 if (!VAR_1)
  return;

 VAR_2 = FUNC_1(VAR_1);
 FUNC_4(VAR_2, VAR_1);

 FUNC_2(VAR_0, VAR_2, VAR_1);

 FUNC_0(VAR_2);
}
