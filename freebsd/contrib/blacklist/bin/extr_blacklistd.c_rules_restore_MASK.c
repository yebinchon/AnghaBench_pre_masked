
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dbinfo {char* id; } ;
struct conf {int dummy; } ;


 int FUNC_0 (char*,struct conf*,char*,int) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct conf*,struct dbinfo*,unsigned int) ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct conf VAR_1;
 struct dbinfo VAR_2;
 unsigned int VAR_3;

 for (VAR_3 = 1; FUNC_1(VAR_0, &VAR_1, &VAR_2, VAR_3) == 1; VAR_3 = 0) {
  if (VAR_2.id[0] == '\0')
   continue;
  (void)FUNC_0("add", &VAR_1, VAR_2.id, sizeof(VAR_2.id));
 }
}
