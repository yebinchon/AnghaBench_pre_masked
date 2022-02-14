
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {int dummy; } ;
struct sbuf {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char const*) ;
 int FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*,char*,int,int ) ;
 int FUNC_3 (struct sbuf*,int ,int *) ;
 int FUNC_4 (struct stack*) ;
 int FUNC_5 (struct sbuf*,struct stack*) ;
 int FUNC_6 (struct stack*) ;
 scalar_t__ VAR_2 ;
 int FUNC_7 (char*) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_8(int VAR_5, const char *VAR_6)
{
 char VAR_7[32];
 struct sbuf VAR_8;
 struct stack VAR_9;

 if (!VAR_5)
  return;

 if (VAR_4) {
  FUNC_2(&VAR_8, VAR_7, sizeof(VAR_7), VAR_1);
  FUNC_3(&VAR_8, VAR_3, ((void*)0));

  FUNC_6(&VAR_9);
  FUNC_4(&VAR_9);
  FUNC_7("stack backtrace:\n");
  FUNC_5(&VAR_8, &VAR_9);

  FUNC_1(&VAR_8);
 }





}
