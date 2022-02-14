
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct protoent {char** p_aliases; char* p_name; int p_proto; } ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 int FUNC_2 (char*) ;

int
FUNC_3(struct protoent *VAR_2, struct protoent *VAR_3, char *VAR_4,
    size_t VAR_5)
{
 char *VAR_6;
 int VAR_7, VAR_8;
 int VAR_9, VAR_10;


 VAR_9 = 1;
 VAR_10 = (char *)FUNC_0(VAR_4) - VAR_4;
 for (VAR_7 = 0; VAR_2->p_aliases[VAR_7]; VAR_7++, VAR_9++) {
  VAR_10 += FUNC_2(VAR_2->p_aliases[VAR_7]) + 1;
 }
 VAR_10 += FUNC_2(VAR_2->p_name) + 1;
 VAR_10 += VAR_9 * sizeof(char*);

 if (VAR_10 > (int)VAR_5) {
  VAR_1 = VAR_0;
  return (-1);
 }


 VAR_3->p_proto = VAR_2->p_proto;

 VAR_6 = (char *)FUNC_0(VAR_4) + VAR_9 * sizeof(char *);


 VAR_8 = FUNC_2(VAR_2->p_name) + 1;
 FUNC_1(VAR_6, VAR_2->p_name);
 VAR_3->p_name = VAR_6;
 VAR_6 += VAR_8;


 VAR_3->p_aliases = (char **)FUNC_0(VAR_4);
 for (VAR_7 = 0 ; VAR_2->p_aliases[VAR_7]; VAR_7++) {
  VAR_8 = FUNC_2(VAR_2->p_aliases[VAR_7]) + 1;
  FUNC_1(VAR_6, VAR_2->p_aliases[VAR_7]);
  VAR_3->p_aliases[VAR_7] = VAR_6;
  VAR_6 += VAR_8;
 }
 VAR_3->p_aliases[VAR_7] = ((void*)0);

 return (0);
}
