
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uintmax_t ;
struct stat {size_t st_size; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int,char*,char const*,...) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (int,struct stat*) ;
 void* FUNC_3 (size_t) ;
 int FUNC_4 (char const*,int ) ;
 size_t FUNC_5 (int,void*,size_t) ;

__attribute__((used)) static void *
FUNC_6(const char *VAR_3, size_t *VAR_4)
{
 void *VAR_5;
 int VAR_6;
 struct stat VAR_7;

 VAR_6 = FUNC_4(VAR_3, VAR_1);
 if (VAR_6 < 0) {
  if (VAR_2 == VAR_0)
   return ((void*)0);
  FUNC_1(1, "Can't open %s for reading", VAR_3);
 }
 if (FUNC_2(VAR_6, &VAR_7) != 0)
  FUNC_1(1, "Can't fstat %s\n", VAR_3);
 VAR_5 = FUNC_3(VAR_7.st_size);
 if (VAR_5 == ((void*)0))
  FUNC_1(1, "not enough space to read hints file of %ju bytes", (uintmax_t)VAR_7.st_size);
 if (FUNC_5(VAR_6, VAR_5, VAR_7.st_size) != VAR_7.st_size)
  FUNC_1(1, "Can't read in %ju bytes from %s", (uintmax_t)VAR_7.st_size, VAR_3);
 FUNC_0(VAR_6);
 *VAR_4 = VAR_7.st_size;
 return VAR_5;
}
