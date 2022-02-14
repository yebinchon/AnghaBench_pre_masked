
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {scalar_t__ st_size; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char const*,int) ;
 void* FUNC_2 (int *,scalar_t__,int ,int ,int,int ) ;
 int FUNC_3 (void*,scalar_t__) ;
 int FUNC_4 (char const*,int ) ;
 int FUNC_5 (char const*,char const*) ;
 scalar_t__ FUNC_6 (char const*,struct stat*) ;
 int FUNC_7 (char const*) ;
 scalar_t__ FUNC_8 (int,void*,scalar_t__) ;

int FUNC_9(const char *VAR_4, const char *VAR_5)
{
 int VAR_6, VAR_7;
 struct stat VAR_8;
 void *VAR_9;
 int VAR_10 = -1;

 if (FUNC_6(VAR_4, &VAR_8))
  goto out;

 if (VAR_8.st_size == 0)
  return FUNC_5(VAR_4, VAR_5);

 VAR_6 = FUNC_4(VAR_4, VAR_2);
 if (VAR_6 < 0)
  goto out;

 VAR_7 = FUNC_1(VAR_5, 0755);
 if (VAR_7 < 0)
  goto out_close_from;

 VAR_9 = FUNC_2(((void*)0), VAR_8.st_size, VAR_3, VAR_1, VAR_6, 0);
 if (VAR_9 == VAR_0)
  goto out_close_to;

 if (FUNC_8(VAR_7, VAR_9, VAR_8.st_size) == VAR_8.st_size)
  VAR_10 = 0;

 FUNC_3(VAR_9, VAR_8.st_size);
out_close_to:
 FUNC_0(VAR_7);
 if (VAR_10)
  FUNC_7(VAR_5);
out_close_from:
 FUNC_0(VAR_6);
out:
 return VAR_10;
}
