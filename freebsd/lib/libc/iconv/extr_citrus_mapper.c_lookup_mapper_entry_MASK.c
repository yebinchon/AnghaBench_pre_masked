
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _region {int dummy; } ;
struct _memstream {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 char* FUNC_0 (char const*,size_t*) ;
 char* FUNC_1 (char const*,size_t*) ;
 int FUNC_2 (struct _region*,char*) ;
 int FUNC_3 (struct _memstream*,struct _region*) ;
 char* FUNC_4 (struct _memstream*,char const*,size_t*,int ) ;
 int FUNC_5 (struct _region*) ;
 int FUNC_6 (char*,size_t,char*,char const*,char*) ;
 int FUNC_7 (char*,char const*,size_t) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_4, const char *VAR_5, void *VAR_6,
    size_t VAR_7, const char **VAR_8, const char **VAR_9)
{
 struct _region VAR_10;
 struct _memstream VAR_11;
 const char *VAR_12, *VAR_13;
 char *VAR_14;
 char VAR_15[VAR_2];
 size_t VAR_16;
 int VAR_17;


 FUNC_6(VAR_15, (size_t)VAR_2, "%s/%s", VAR_4, VAR_3);


 VAR_17 = FUNC_2(&VAR_10, VAR_15);
 if (VAR_17)
  return (VAR_17);

 FUNC_3(&VAR_11, &VAR_10);


 VAR_12 = FUNC_4(&VAR_11, VAR_5, &VAR_16, 0);
 if (!VAR_12) {
  VAR_17 = VAR_1;
  goto quit;
 }
 if (!VAR_16 || VAR_16 > VAR_7 - 1) {
  VAR_17 = VAR_0;
  goto quit;
 }

 VAR_14 = VAR_6;

 *VAR_8 = VAR_14;
 VAR_13 = FUNC_0(VAR_12, &VAR_16);
 FUNC_7(VAR_14, VAR_12, (size_t)(VAR_13 - VAR_12 + 1));
 VAR_14 += VAR_13 - VAR_12 + 1;


 *VAR_9 = VAR_14;
 VAR_12 = FUNC_1(VAR_13, &VAR_16);
 FUNC_7(VAR_14, VAR_12, VAR_16 + 1);

 VAR_17 = 0;

quit:
 FUNC_5(&VAR_10);
 return (VAR_17);
}
