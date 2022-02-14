
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termp {int dummy; } ;
struct roffsu {int scale; } ;


 int FUNC_0 (struct roffsu*,int ) ;
 int VAR_0 ;
 char* FUNC_1 (char const*,struct roffsu*,int ) ;
 int FUNC_2 (struct termp const*,struct roffsu*) ;
 int FUNC_3 (struct termp const*,char const*) ;

__attribute__((used)) static int
FUNC_4(const struct termp *VAR_1, const char *VAR_2)
{
 struct roffsu VAR_3;
 const char *VAR_4;

 VAR_4 = FUNC_1(VAR_2, &VAR_3, VAR_0);
 if (VAR_4 == ((void*)0) || *VAR_4 != '\0') {
  FUNC_0(&VAR_3, FUNC_3(VAR_1, VAR_2));
  VAR_3.scale /= FUNC_3(VAR_1, "0");
 }
 return FUNC_2(VAR_1, &VAR_3);
}
