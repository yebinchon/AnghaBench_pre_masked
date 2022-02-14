
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cached_connection_params {int dummy; } ;
struct cached_connection_ {int mp_flag; } ;


 int VAR_0 ;
 int FUNC_0 (struct cached_connection_*) ;
 struct cached_connection_* FUNC_1 (struct cached_connection_params const*) ;
 int FUNC_2 (struct cached_connection_*,int*,int) ;
 int FUNC_3 (struct cached_connection_*,...) ;
 int FUNC_4 (struct cached_connection_*,int ) ;
 size_t FUNC_5 (char const*) ;

struct cached_connection_ *
FUNC_6(struct cached_connection_params const *VAR_1,
    const char *VAR_2)
{
 struct cached_connection_ *VAR_3, *VAR_4;
 size_t VAR_5;
 int VAR_6;
 int VAR_7;

 VAR_4 = ((void*)0);
 VAR_3 = FUNC_1(VAR_1);
 if (VAR_3 == ((void*)0))
  return (((void*)0));
 VAR_3->mp_flag = 1;

 VAR_7 = FUNC_4(VAR_3, VAR_0);
 if (VAR_7 != 0)
  goto fin;

 VAR_5 = FUNC_5(VAR_2);
 VAR_7 = FUNC_3(VAR_3, &VAR_5, sizeof(size_t));
 if (VAR_7 != 0)
  goto fin;

 VAR_7 = FUNC_3(VAR_3, VAR_2, VAR_5);
 if (VAR_7 != 0)
  goto fin;

 VAR_7 = FUNC_2(VAR_3, &VAR_6, sizeof(int));
 if (VAR_7 != 0)
  goto fin;

 if (VAR_6 != 0)
  VAR_7 = VAR_6;

fin:
 if (VAR_7 != 0)
  FUNC_0(VAR_3);
 else
  VAR_4 = VAR_3;
 return (VAR_4);
}
