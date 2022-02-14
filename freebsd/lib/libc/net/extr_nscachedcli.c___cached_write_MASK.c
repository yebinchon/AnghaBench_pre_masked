
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cached_connection_ {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct cached_connection_*,int*,int) ;
 int FUNC_1 (struct cached_connection_*,...) ;
 int FUNC_2 (struct cached_connection_*,int ) ;
 size_t FUNC_3 (char const*) ;

int
FUNC_4(struct cached_connection_ *VAR_1, const char *VAR_2,
    const char *VAR_3, size_t VAR_4, const char *VAR_5, size_t VAR_6)
{
 size_t VAR_7;
 int VAR_8;
 int VAR_9;

 VAR_8 = -1;
 VAR_9 = 0;
 VAR_9 = FUNC_2(VAR_1, VAR_0);
 if (VAR_9 != 0)
  goto fin;

 VAR_7 = FUNC_3(VAR_2);
 VAR_9 = FUNC_1(VAR_1, &VAR_7, sizeof(size_t));
 if (VAR_9 != 0)
  goto fin;

 VAR_9 = FUNC_1(VAR_1, &VAR_4, sizeof(size_t));
 if (VAR_9 != 0)
  goto fin;

 VAR_9 = FUNC_1(VAR_1, &VAR_6, sizeof(size_t));
 if (VAR_9 != 0)
  goto fin;

 VAR_9 = FUNC_1(VAR_1, VAR_2, VAR_7);
 if (VAR_9 != 0)
  goto fin;

 VAR_9 = FUNC_1(VAR_1, VAR_3, VAR_4);
 if (VAR_9 != 0)
  goto fin;

 VAR_9 = FUNC_1(VAR_1, VAR_5, VAR_6);
 if (VAR_9 != 0)
  goto fin;

 VAR_9 = FUNC_0(VAR_1, &VAR_8, sizeof(int));
 if (VAR_9 != 0)
  VAR_8 = -1;

fin:
 return (VAR_8);
}
