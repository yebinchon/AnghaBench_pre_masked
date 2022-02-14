
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cached_connection_ {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cached_connection_*,int*,int) ;
 int FUNC_1 (struct cached_connection_*,...) ;

int
FUNC_2(struct cached_connection_ *VAR_1, const char *VAR_2,
    size_t VAR_3)
{
 int VAR_4, VAR_5;
 int VAR_6;

 VAR_6 = -1;

 VAR_4 = VAR_0;
 VAR_5 = FUNC_1(VAR_1, &VAR_4, sizeof(int));
 if (VAR_5 != 0)
  goto fin;

 VAR_5 = FUNC_1(VAR_1, &VAR_3, sizeof(size_t));
 if (VAR_5 != 0)
  goto fin;

 VAR_5 = FUNC_1(VAR_1, VAR_2, VAR_3);
 if (VAR_5 != 0)
  goto fin;

 VAR_5 = FUNC_0(VAR_1, &VAR_6, sizeof(int));
 if (VAR_5 != 0)
  VAR_6 = -1;

fin:
 return (VAR_6);
}
