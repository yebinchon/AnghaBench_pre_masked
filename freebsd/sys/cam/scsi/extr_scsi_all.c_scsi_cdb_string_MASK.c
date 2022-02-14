
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int8_t ;
struct sbuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (struct sbuf*) ;
 int FUNC_1 (struct sbuf*) ;
 int FUNC_2 (struct sbuf*,char*,size_t,int ) ;
 int FUNC_3 (int *,struct sbuf*) ;

char *
FUNC_4(u_int8_t *VAR_2, char *VAR_3, size_t VAR_4)
{
 struct sbuf VAR_5;
 int VAR_6;

 if (VAR_4 == 0)
  return ("");

 FUNC_2(&VAR_5, VAR_3, VAR_4, VAR_1);

 FUNC_3(VAR_2, &VAR_5);


 VAR_6 = FUNC_1(&VAR_5);
 if (VAR_6 != 0 && VAR_6 != VAR_0)
  return ("");

 return(FUNC_0(&VAR_5));
}
