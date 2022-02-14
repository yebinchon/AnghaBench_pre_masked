
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* jump_host; int jump_port; char* jump_user; char* jump_extra; int * proxy_command; } ;
typedef TYPE_1__ Options ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char**,char**,int*) ;
 scalar_t__ FUNC_2 (char*,char**,char**,int*) ;
 scalar_t__ FUNC_3 (char const*,char*) ;
 char* FUNC_4 (char const*,char) ;
 void* FUNC_5 (char const*) ;

int
FUNC_6(const char *VAR_0, Options *VAR_1, int VAR_2)
{
 char *VAR_3, *VAR_4, *VAR_5;
 char *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 int VAR_8 = -1, VAR_9 = -1, VAR_10;

 VAR_2 &= VAR_1->proxy_command == ((void*)0) && VAR_1->jump_host == ((void*)0);

 VAR_3 = VAR_4 = FUNC_5(VAR_0);
 VAR_10 = VAR_2;
 do {
  if (FUNC_3(VAR_0, "none") == 0)
   break;
  if ((VAR_5 = FUNC_4(VAR_4, ',')) == ((void*)0))
   VAR_5 = VAR_4;
  else
   *VAR_5++ = '\0';

  if (VAR_10) {

   if (FUNC_1(VAR_5, &VAR_7, &VAR_6, &VAR_9) == -1 ||
       FUNC_2(VAR_5, &VAR_7, &VAR_6, &VAR_9) != 0)
    goto out;
  } else {

   if (FUNC_1(VAR_5, ((void*)0), ((void*)0), ((void*)0)) == -1 ||
       FUNC_2(VAR_5, ((void*)0), ((void*)0), ((void*)0)) != 0)
    goto out;
  }
  VAR_10 = 0;
 } while (VAR_5 != VAR_4);

 if (VAR_2) {
  if (FUNC_3(VAR_0, "none") == 0) {
   VAR_1->jump_host = FUNC_5("none");
   VAR_1->jump_port = 0;
  } else {
   VAR_1->jump_user = VAR_7;
   VAR_1->jump_host = VAR_6;
   VAR_1->jump_port = VAR_9;
   VAR_1->proxy_command = FUNC_5("none");
   VAR_7 = VAR_6 = ((void*)0);
   if ((VAR_5 = FUNC_4(VAR_0, ',')) != ((void*)0) && VAR_5 != VAR_0) {
    VAR_1->jump_extra = FUNC_5(VAR_0);
    VAR_1->jump_extra[VAR_5 - VAR_0] = '\0';
   }
  }
 }
 VAR_8 = 0;
 out:
 FUNC_0(VAR_3);
 FUNC_0(VAR_7);
 FUNC_0(VAR_6);
 return VAR_8;
}
