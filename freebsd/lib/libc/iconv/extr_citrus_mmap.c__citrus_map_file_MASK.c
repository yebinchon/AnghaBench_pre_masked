
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; int st_mode; } ;
struct _citrus_region {int dummy; } ;
typedef int off_t ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int,struct stat*) ;
 int FUNC_3 (char const*,int) ;
 int FUNC_4 (struct _citrus_region*,void*,size_t) ;
 int VAR_7 ;
 void* FUNC_5 (int *,size_t,int ,int,int,int ) ;

int
FUNC_6(struct _citrus_region * __restrict VAR_8,
    const char * __restrict VAR_9)
{
 struct stat VAR_10;
 void *VAR_11;
 int VAR_12, VAR_13;

 VAR_13 = 0;

 FUNC_4(VAR_8, ((void*)0), 0);

 if ((VAR_12 = FUNC_3(VAR_9, VAR_5 | VAR_4)) == -1)
  return (VAR_7);

 if (FUNC_2(VAR_12, &VAR_10) == -1) {
  VAR_13 = VAR_7;
  goto error;
 }
 if (!FUNC_0(VAR_10.st_mode)) {
  VAR_13 = VAR_0;
  goto error;
 }

 VAR_11 = FUNC_5(((void*)0), (size_t)VAR_10.st_size, VAR_6, VAR_2|VAR_3,
     VAR_12, (off_t)0);
 if (VAR_11 == VAR_1) {
  VAR_13 = VAR_7;
  goto error;
 }
 FUNC_4(VAR_8, VAR_11, (size_t)VAR_10.st_size);

error:
 (void)FUNC_1(VAR_12);
 return (VAR_13);
}
