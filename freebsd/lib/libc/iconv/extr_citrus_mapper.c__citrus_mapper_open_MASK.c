
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_mapper_area {int ma_cache; int ma_dir; } ;
struct _citrus_mapper {int cm_refcount; int * cm_key; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct _citrus_mapper*,int ,int) ;
 int FUNC_3 (int *,struct _citrus_mapper*,int ,int ,char const*,int) ;
 int FUNC_4 (struct _citrus_mapper*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (char const*) ;
 int FUNC_6 (int ,char const*,char*,size_t,char const**,char const**) ;
 int FUNC_7 (struct _citrus_mapper_area*,struct _citrus_mapper**,char const*,char const*) ;
 int VAR_4 ;
 int * FUNC_8 (char const*) ;

int
FUNC_9(struct _citrus_mapper_area *__restrict VAR_5,
    struct _citrus_mapper * __restrict * __restrict VAR_6,
    const char * __restrict VAR_7)
{
 struct _citrus_mapper *VAR_8;
 char VAR_9[VAR_0];
 const char *VAR_10, *VAR_11;
 int VAR_12, VAR_13;

 VAR_11 = ((void*)0);

 FUNC_1(&VAR_2);


 VAR_12 = FUNC_5(VAR_7);
 FUNC_3(&VAR_5->ma_cache, VAR_8, VAR_1, VAR_4, VAR_7,
     VAR_12);
 if (VAR_8) {

  VAR_8->cm_refcount++;
  *VAR_6 = VAR_8;
  VAR_13 = 0;
  goto quit;
 }


 VAR_13 = FUNC_6(VAR_5->ma_dir, VAR_7, VAR_9,
     (size_t)VAR_0, &VAR_10, &VAR_11);
 if (VAR_13)
  goto quit;


 FUNC_0(&VAR_2);
 VAR_13 = FUNC_7(VAR_5, &VAR_8, VAR_10, VAR_11);
 FUNC_1(&VAR_2);
 if (VAR_13)
  goto quit;
 VAR_8->cm_key = FUNC_8(VAR_7);
 if (VAR_8->cm_key == ((void*)0)) {
  VAR_13 = VAR_3;
  FUNC_4(VAR_8);
  goto quit;
 }


 VAR_8->cm_refcount = 1;
 FUNC_2(&VAR_5->ma_cache, VAR_8, VAR_1, VAR_12);

 *VAR_6 = VAR_8;
 VAR_13 = 0;
quit:
 FUNC_0(&VAR_2);

 return (VAR_13);
}
