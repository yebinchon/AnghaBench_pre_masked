
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct _citrus_mapper_area {int ma_cache; int * ma_dir; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (struct _citrus_mapper_area*) ;
 struct _citrus_mapper_area* FUNC_4 (int) ;
 int FUNC_5 (char*,size_t,char*,char const*,char*) ;
 int FUNC_6 (char*,struct stat*) ;
 int * FUNC_7 (char const*) ;

int
FUNC_8(
    struct _citrus_mapper_area *__restrict *__restrict VAR_5,
    const char *__restrict VAR_6)
{
 struct _citrus_mapper_area *VAR_7;
 struct stat VAR_8;
 char VAR_9[VAR_1];
 int VAR_10;

 FUNC_1(&VAR_3);

 if (*VAR_5 != ((void*)0)) {
  VAR_10 = 0;
  goto quit;
 }

 FUNC_5(VAR_9, (size_t)VAR_1, "%s/%s", VAR_6, VAR_2);

 VAR_10 = FUNC_6(VAR_9, &VAR_8);
 if (VAR_10)
  goto quit;

 VAR_7 = FUNC_4(sizeof(*VAR_7));
 if (VAR_7 == ((void*)0)) {
  VAR_10 = VAR_4;
  goto quit;
 }
 VAR_7->ma_dir = FUNC_7(VAR_6);
 if (VAR_7->ma_dir == ((void*)0)) {
  VAR_10 = VAR_4;
  FUNC_3(VAR_7);
  goto quit;
 }
 FUNC_2(&VAR_7->ma_cache, VAR_0);

 *VAR_5 = VAR_7;
 VAR_10 = 0;
quit:
 FUNC_0(&VAR_3);

 return (VAR_10);
}
