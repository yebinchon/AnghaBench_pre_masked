
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vnstat {int dummy; } ;
struct procstat {scalar_t__ type; int kd; } ;
struct filestat {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vnstat*) ;
 int FUNC_1 (int ,struct filestat*,struct vnstat*,char*) ;
 int FUNC_2 (struct filestat*,struct vnstat*,char*) ;
 int FUNC_3 (char*,int ,char*) ;
 int FUNC_4 (char*,scalar_t__) ;

int
FUNC_5(struct procstat *VAR_4, struct filestat *VAR_5,
    struct vnstat *VAR_6, char *VAR_7)
{

 FUNC_0(VAR_6);
 if (VAR_4->type == VAR_1) {
  return (FUNC_1(VAR_4->kd, VAR_5, VAR_6,
      VAR_7));
 } else if (VAR_4->type == VAR_2 ||
  VAR_4->type == VAR_0) {
  return (FUNC_2(VAR_5, VAR_6, VAR_7));
 } else {
  FUNC_4("unknown access method: %d", VAR_4->type);
  if (VAR_7 != ((void*)0))
   FUNC_3(VAR_7, VAR_3, "error");
  return (1);
 }
}
