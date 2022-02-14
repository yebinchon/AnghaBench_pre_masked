
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
struct archive_match {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ,char*) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (char const*,struct stat*) ;
 int FUNC_2 (struct archive_match*,int,struct stat*) ;

__attribute__((used)) static int
FUNC_3(struct archive_match *VAR_3, int VAR_4,
    const char *VAR_5)
{
 struct stat VAR_6;

 if (VAR_5 == ((void*)0) || *VAR_5 == '\0') {
  FUNC_0(&(VAR_3->archive), VAR_1, "pathname is empty");
  return (VAR_0);
 }
 if (FUNC_1(VAR_5, &VAR_6) != 0) {
  FUNC_0(&(VAR_3->archive), VAR_2, "Failed to stat()");
  return (VAR_0);
 }
 return (FUNC_2(VAR_3, VAR_4, &VAR_6));
}
