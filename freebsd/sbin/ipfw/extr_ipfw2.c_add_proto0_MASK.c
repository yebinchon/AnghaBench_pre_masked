
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
struct protoent {int p_proto; } ;
typedef int ipfw_insn ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,int) ;
 struct protoent* FUNC_1 (char*) ;
 int FUNC_2 (char*,char**,int) ;

__attribute__((used)) static ipfw_insn *
FUNC_3(ipfw_insn *VAR_1, char *VAR_2, u_char *VAR_3)
{
 struct protoent *VAR_4;
 char *VAR_5;
 int VAR_6;

 VAR_6 = FUNC_2(VAR_2, &VAR_5, 10);
 if (*VAR_5 != '\0' || VAR_6 <= 0) {
  if ((VAR_4 = FUNC_1(VAR_2)) == ((void*)0))
   return ((void*)0);
  VAR_6 = VAR_4->p_proto;
 }

 FUNC_0(VAR_1, VAR_0, 0, VAR_6);
 *VAR_3 = VAR_6;
 return VAR_1;
}
