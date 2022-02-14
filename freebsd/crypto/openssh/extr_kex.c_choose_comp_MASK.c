
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sshcomp {char* name; int type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 char* FUNC_1 (char*,char*,int *) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(struct sshcomp *VAR_5, char *VAR_6, char *VAR_7)
{
 char *VAR_8 = FUNC_1(VAR_6, VAR_7, ((void*)0));

 if (VAR_8 == ((void*)0))
  return VAR_4;
 if (FUNC_2(VAR_8, "zlib@openssh.com") == 0) {
  VAR_5->type = VAR_0;
 } else if (FUNC_2(VAR_8, "zlib") == 0) {
  VAR_5->type = VAR_2;
 } else if (FUNC_2(VAR_8, "none") == 0) {
  VAR_5->type = VAR_1;
 } else {
  FUNC_0(VAR_8);
  return VAR_3;
 }
 VAR_5->name = VAR_8;
 return 0;
}
