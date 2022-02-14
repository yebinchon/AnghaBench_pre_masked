
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cached_connection_ {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct cached_connection_*,...) ;
 int FUNC_2 (struct cached_connection_*,...) ;
 int FUNC_3 (struct cached_connection_*,int ) ;
 size_t FUNC_4 (char const*) ;

int
FUNC_5(struct cached_connection_ *VAR_1, const char *VAR_2,
    const char *VAR_3, size_t VAR_4, char *VAR_5, size_t *VAR_6)
{
 size_t VAR_7, VAR_8;
 int VAR_9, VAR_10;
 int VAR_11;

 FUNC_0(VAR_1 != ((void*)0));
 VAR_11 = 0;
 VAR_9 = -1;

 VAR_11 = FUNC_3(VAR_1, VAR_0);
 if (VAR_11 != 0)
  goto fin;

 VAR_7 = FUNC_4(VAR_2);
 VAR_11 = FUNC_2(VAR_1, &VAR_7, sizeof(size_t));
 if (VAR_11 != 0)
  goto fin;

 VAR_11 = FUNC_2(VAR_1, &VAR_4, sizeof(size_t));
 if (VAR_11 != 0)
  goto fin;

 VAR_11 = FUNC_2(VAR_1, VAR_2, VAR_7);
 if (VAR_11 != 0)
  goto fin;

 VAR_11 = FUNC_2(VAR_1, VAR_3, VAR_4);
 if (VAR_11 != 0)
  goto fin;

 VAR_11 = FUNC_1(VAR_1, &VAR_10, sizeof(int));
 if (VAR_11 != 0)
  goto fin;

 if (VAR_10 != 0) {
  VAR_9 = VAR_10;
  goto fin;
 }

 VAR_11 = FUNC_1(VAR_1, &VAR_8, sizeof(size_t));
 if (VAR_11 != 0)
  goto fin;

  if (VAR_8 > *VAR_6) {
   *VAR_6 = VAR_8;
   VAR_9 = -2;
   goto fin;
  }

 VAR_11 = FUNC_1(VAR_1, VAR_5, VAR_8);
 if (VAR_11 != 0)
  goto fin;

 *VAR_6 = VAR_8;
 VAR_9 = 0;

fin:
 return (VAR_9);
}
