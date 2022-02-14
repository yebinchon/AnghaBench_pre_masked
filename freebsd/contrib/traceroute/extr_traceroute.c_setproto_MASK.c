
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;
struct protoent {int p_proto; } ;
struct outproto {int num; int * name; } ;


 struct protoent* FUNC_0 (char*) ;
 int VAR_0 ;
 struct outproto* VAR_1 ;
 int FUNC_1 (int ,char*,int,int) ;
 scalar_t__ FUNC_2 (int *,char*) ;

struct outproto *
FUNC_3(char *VAR_2)
{
 struct outproto *VAR_3;
 int VAR_4;

 for (VAR_4 = 0; VAR_1[VAR_4].name != ((void*)0); VAR_4++) {
  if (FUNC_2(VAR_1[VAR_4].name, VAR_2) == 0) {
   break;
  }
 }
 VAR_3 = &VAR_1[VAR_4];
 if (VAR_3->name == ((void*)0)) {
  struct protoent *VAR_5;
  u_long VAR_6;


  if ((VAR_5 = FUNC_0(VAR_2)) != ((void*)0))
   VAR_6 = VAR_5->p_proto;
  else
   VAR_6 = FUNC_1(VAR_0, "proto number", 1, 255);
  VAR_3->num = VAR_6;
 }
 return VAR_3;
}
