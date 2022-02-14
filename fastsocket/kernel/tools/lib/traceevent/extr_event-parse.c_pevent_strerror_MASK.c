
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pevent {int dummy; } ;
typedef enum pevent_errno { ____Placeholder_pevent_errno } pevent_errno ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char const*,int) ;
 int FUNC_1 (size_t,size_t) ;
 char** VAR_2 ;
 int FUNC_2 (char*,size_t,char*,char const*) ;
 char* FUNC_3 (int,char*,size_t) ;
 size_t FUNC_4 (char const*) ;

int FUNC_5(struct pevent *VAR_3, enum pevent_errno VAR_4,
      char *VAR_5, size_t VAR_6)
{
 int VAR_7;
 const char *VAR_8;

 if (VAR_4 >= 0) {
  VAR_8 = FUNC_3(VAR_4, VAR_5, VAR_6);
  if (VAR_8 != VAR_5) {
   size_t VAR_9 = FUNC_4(VAR_8);
   FUNC_0(VAR_5, VAR_8, FUNC_1(VAR_6 - 1, VAR_9));
   *(VAR_5 + FUNC_1(VAR_6 - 1, VAR_9)) = '\0';
  }
  return 0;
 }

 if (VAR_4 <= VAR_1 ||
     VAR_4 >= VAR_0)
  return -1;

 VAR_7 = VAR_4 - VAR_1 - 1;
 VAR_8 = VAR_2[VAR_7];

 switch (VAR_4) {
 case 133:
 case 131:
 case 129:
 case 130:
 case 128:
 case 132:
  FUNC_2(VAR_5, VAR_6, "%s", VAR_8);
  break;

 default:

  break;
 }

 return 0;
}
