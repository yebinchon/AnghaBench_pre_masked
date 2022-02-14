
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (void*) ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (char const*,int ) ;
 scalar_t__ FUNC_5 (int,void*,size_t) ;
 int FUNC_6 (void*,size_t,void*,size_t,int) ;

int FUNC_7(const char *VAR_1, void *VAR_2, size_t VAR_3)
{
 int VAR_4;
 int VAR_5 = -1;
 struct stat VAR_6;
 size_t VAR_7;
 void *VAR_8;

 VAR_4 = FUNC_4(VAR_1, VAR_0);
 if (VAR_4 < 0)
  return -1;

 if (FUNC_2(VAR_4, &VAR_6) < 0)
  goto out;

 VAR_7 = VAR_6.st_size;
 VAR_8 = FUNC_3(VAR_7);
 if (VAR_8 == ((void*)0))
  goto out;

 if (FUNC_5(VAR_4, VAR_8, VAR_7) != (ssize_t) VAR_7)
  goto out_free;

 VAR_5 = FUNC_6(VAR_8, VAR_7, VAR_2, VAR_3, 0);
out_free:
 FUNC_1(VAR_8);
out:
 FUNC_0(VAR_4);
 return VAR_5;
}
