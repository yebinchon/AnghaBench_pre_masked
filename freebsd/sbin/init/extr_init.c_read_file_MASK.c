
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {size_t st_size; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,char const*,...) ;
 int VAR_1 ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int,struct stat*) ;
 void* FUNC_4 (size_t) ;
 int FUNC_5 (char const*,int ) ;
 scalar_t__ FUNC_6 (int,void*,size_t) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8(const char *VAR_2, void **VAR_3, size_t *VAR_4)
{
 struct stat VAR_5;
 size_t VAR_6;
 void *VAR_7;
 ssize_t VAR_8;
 int VAR_9, VAR_10;

 VAR_10 = FUNC_5(VAR_2, VAR_0);
 if (VAR_10 < 0) {
  FUNC_1("%s: %s", VAR_2, FUNC_7(VAR_1));
  return (-1);
 }

 VAR_9 = FUNC_3(VAR_10, &VAR_5);
 if (VAR_9 != 0) {
  FUNC_1("fstat: %s", FUNC_7(VAR_1));
  FUNC_0(VAR_10);
  return (VAR_9);
 }

 VAR_6 = VAR_5.st_size;
 VAR_7 = FUNC_4(VAR_6);
 if (VAR_7 == ((void*)0)) {
  FUNC_1("malloc: %s", FUNC_7(VAR_1));
  FUNC_0(VAR_10);
  return (VAR_9);
 }

 VAR_8 = FUNC_6(VAR_10, VAR_7, VAR_6);
 if (VAR_8 != (ssize_t)VAR_6) {
  FUNC_1("read: %s", FUNC_7(VAR_1));
  FUNC_0(VAR_10);
  FUNC_2(VAR_7);
  return (VAR_9);
 }

 VAR_9 = FUNC_0(VAR_10);
 if (VAR_9 != 0) {
  FUNC_1("close: %s", FUNC_7(VAR_1));
  FUNC_2(VAR_7);
  return (VAR_9);
 }

 *VAR_3 = VAR_7;
 *VAR_4 = VAR_6;

 return (0);
}
