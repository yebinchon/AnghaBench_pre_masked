
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct hentry {char* str; size_t hash; struct hentry* next; } ;


 struct hentry* FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (char*) ;
 struct hentry** VAR_0 ;

__attribute__((used)) static void
FUNC_3(char *VAR_1, uint32_t VAR_2)
{
 struct hentry *VAR_3;
 char *VAR_4;

 if ((VAR_3 = FUNC_0(sizeof(*VAR_3))) == ((void*)0))
  FUNC_1("memory allocation error");
 if ((VAR_4 = FUNC_2(VAR_1)) == ((void*)0))
  FUNC_1("memory allocation error");

 VAR_3->str = VAR_4;
 VAR_3->hash = VAR_2;
 VAR_3->next = VAR_0[VAR_2];
 VAR_0[VAR_2] = VAR_3;
}
