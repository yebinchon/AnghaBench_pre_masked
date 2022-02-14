
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (char*,...) ;
 scalar_t__ FUNC_2 (char const*,struct stat*) ;

const char *
FUNC_3(const char *VAR_0)
{
 struct stat VAR_1, VAR_2;

 if (FUNC_2("/", &VAR_1) < 0) {
  FUNC_1("Can't stat `/'");
  return (VAR_0);
 }
 if (FUNC_2(VAR_0, &VAR_2) < 0) {
  FUNC_1("Can't stat %s\n", VAR_0);
  return (VAR_0);
 }
 if (!FUNC_0(VAR_2.st_mode)) {
  FUNC_1("%s is not a char device\n", VAR_0);
 }
 return (VAR_0);
}
