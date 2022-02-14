
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcfile {int dummy; } ;
struct nb_ctx {int nb_timo; } ;


 int VAR_0 ;
 int FUNC_0 (struct nb_ctx*,char*) ;
 int FUNC_1 (struct nb_ctx*,char*) ;
 int FUNC_2 (struct rcfile*,char const*,char*,int *) ;
 int FUNC_3 (struct rcfile*,char const*,char*,char**) ;
 int FUNC_4 (char*,int ,char const*) ;

int
FUNC_5(struct rcfile *VAR_1, struct nb_ctx *VAR_2,
 const char *VAR_3, int VAR_4)
{
 char *VAR_5;
 int VAR_6;

 if (VAR_4 > 1)
  return VAR_0;
 FUNC_2(VAR_1, VAR_3, "nbtimeout", &VAR_2->nb_timo);
 FUNC_3(VAR_1, VAR_3, "nbns", &VAR_5);
 if (VAR_5) {
  VAR_6 = FUNC_0(VAR_2, VAR_5);
  if (VAR_6) {
   FUNC_4("invalid address specified in the section %s", 0, VAR_3);
   return VAR_6;
  }
 }
 FUNC_3(VAR_1, VAR_3, "nbscope", &VAR_5);
 if (VAR_5)
  FUNC_1(VAR_2, VAR_5);
 return 0;
}
