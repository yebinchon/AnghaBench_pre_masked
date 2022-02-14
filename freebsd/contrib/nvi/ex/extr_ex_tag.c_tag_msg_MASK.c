
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tagmsg_t ;
typedef int SCR ;


 int VAR_0 ;
 int VAR_1 ;



 int FUNC_0 () ;
 int FUNC_1 (int *,int ,char*) ;
 int FUNC_2 (int *,int ,char*,char*) ;

void
FUNC_3(SCR *VAR_2, tagmsg_t VAR_3, char *VAR_4)
{
 switch (VAR_3) {
 case 130:
  FUNC_2(VAR_2, VAR_0, VAR_4,
     "164|%s: the tag's line number is past the end of the file");
  break;
 case 129:
  FUNC_1(VAR_2, VAR_1, "165|The tags stack is empty");
  break;
 case 128:
  FUNC_2(VAR_2, VAR_0, VAR_4, "166|%s: search pattern not found");
  break;
 default:
  FUNC_0();
 }
}
