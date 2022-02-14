
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int smsg_t ;
typedef int SCR ;


 int VAR_0 ;






 int FUNC_0 () ;
 int FUNC_1 (int *,int ,char*) ;

__attribute__((used)) static void
FUNC_2(
 SCR *VAR_1,
 smsg_t VAR_2)
{
 switch (VAR_2) {
 case 133:
  FUNC_1(VAR_1, VAR_0, "072|File empty; nothing to search");
  break;
 case 132:
  FUNC_1(VAR_1, VAR_0,
      "073|Reached end-of-file without finding the pattern");
  break;
 case 131:
  FUNC_1(VAR_1, VAR_0, "074|No previous search pattern");
  break;
 case 130:
  FUNC_1(VAR_1, VAR_0, "075|Pattern not found");
  break;
 case 129:
  FUNC_1(VAR_1, VAR_0,
      "076|Reached top-of-file without finding the pattern");
  break;
 case 128:
  FUNC_1(VAR_1, VAR_0, "077|Search wrapped");
  break;
 default:
  FUNC_0();
 }
}
