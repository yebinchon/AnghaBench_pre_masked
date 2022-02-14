
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {size_t gl_pathc; int * gl_pathv; int gl_lstat; int gl_stat; int gl_closedir; int gl_readdir; int gl_opendir; } ;
typedef TYPE_1__ glob_t ;
typedef int gl ;


 int FUNC_0 (int) ;
 int FUNC_1 (int ,char const*) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char const*,int,int *,TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ,int) ;

__attribute__((used)) static void
FUNC_7(const char *VAR_6, int VAR_7, const char **VAR_8, size_t VAR_9)
{
 glob_t VAR_10;
 size_t VAR_11;

 FUNC_6(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.gl_opendir = VAR_3;
 VAR_10.gl_readdir = VAR_4;
 VAR_10.gl_closedir = VAR_1;
 VAR_10.gl_stat = VAR_5;
 VAR_10.gl_lstat = VAR_2;

 FUNC_3(FUNC_4(VAR_6, VAR_0 | VAR_7, ((void*)0), &VAR_10));

 for (VAR_11 = 0; VAR_11 < VAR_10.gl_pathc; VAR_11++)
  FUNC_2(("%s\n", VAR_10.gl_pathv[VAR_11]));

 FUNC_0(VAR_9 == VAR_10.gl_pathc);
 for (VAR_11 = 0; VAR_11 < VAR_10.gl_pathc; VAR_11++)
  FUNC_1(VAR_10.gl_pathv[VAR_11], VAR_8[VAR_11]);

 FUNC_5(&VAR_10);
}
