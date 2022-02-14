
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pathhead {int dummy; } ;
struct pathentry {int * path; } ;


 int VAR_0 ;
 int FUNC_0 (struct pathhead*,struct pathentry*,int ) ;
 int FUNC_1 (struct pathhead*,char*,int,int ) ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 struct pathentry* FUNC_3 (int) ;
 int VAR_2 ;
 int * FUNC_4 (char*) ;
 char* FUNC_5 (char**,char*) ;

__attribute__((used)) static void
FUNC_6(struct pathhead *VAR_3, char *VAR_4, int VAR_5)
{
 char *VAR_6;
 struct pathentry *VAR_7;

 while ((VAR_6 = FUNC_5(&VAR_4, ";")) != ((void*)0))
  if (!VAR_5) {
   if (((VAR_7 = FUNC_3(sizeof(*VAR_7))) == ((void*)0)) ||
       ((VAR_7->path = FUNC_4(VAR_6)) == ((void*)0))) {
    VAR_1 = VAR_0;
    FUNC_2(1, "allocating path element");
   }
   FUNC_0(VAR_3, VAR_7, VAR_2);
  } else {
   FUNC_1(VAR_3, VAR_6, 1, 0);
  }
}
