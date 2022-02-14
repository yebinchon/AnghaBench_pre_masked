
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cached_connection_ {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cached_connection_*,...) ;
 int FUNC_1 (struct cached_connection_*,int*,int) ;

int
FUNC_2(struct cached_connection_ *VAR_1, char *VAR_2, size_t *VAR_3)
{
 size_t VAR_4;
 int VAR_5, VAR_6;
 int VAR_7, VAR_8;

 VAR_5 = -1;
 VAR_7 = VAR_0;
 VAR_8 = FUNC_1(VAR_1, &VAR_7, sizeof(int));
 if (VAR_8 != 0)
  goto fin;

 VAR_8 = FUNC_0(VAR_1, &VAR_6, sizeof(int));
 if (VAR_8 != 0)
  goto fin;

 if (VAR_6 != 0) {
  VAR_5 = VAR_6;
  goto fin;
 }

 VAR_8 = FUNC_0(VAR_1, &VAR_4, sizeof(size_t));
 if (VAR_8 != 0)
  goto fin;

 if (VAR_4 > *VAR_3) {
  *VAR_3 = VAR_4;
  VAR_5 = -2;
  goto fin;
 }

 VAR_8 = FUNC_0(VAR_1, VAR_2, VAR_4);
 if (VAR_8 != 0)
  goto fin;

 *VAR_3 = VAR_4;
 VAR_5 = 0;

fin:
 return (VAR_5);
}
