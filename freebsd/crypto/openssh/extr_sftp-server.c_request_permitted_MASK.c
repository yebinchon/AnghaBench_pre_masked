
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sftp_handler {int name; scalar_t__ does_write; } ;


 int FUNC_0 (char*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ,int *,int *) ;
 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_3 (char*,int ) ;

__attribute__((used)) static int
FUNC_4(struct sftp_handler *VAR_3)
{
 char *VAR_4;

 if (VAR_0 && VAR_3->does_write) {
  FUNC_3("Refusing %s request in read-only mode", VAR_3->name);
  return 0;
 }
 if (VAR_1 != ((void*)0) &&
     ((VAR_4 = FUNC_2(VAR_3->name, VAR_1, ((void*)0)))) != ((void*)0)) {
  FUNC_1(VAR_4);
  FUNC_3("Refusing blacklisted %s request", VAR_3->name);
  return 0;
 }
 if (VAR_2 != ((void*)0) &&
     ((VAR_4 = FUNC_2(VAR_3->name, VAR_2, ((void*)0)))) != ((void*)0)) {
  FUNC_1(VAR_4);
  FUNC_0("Permitting whitelisted %s request", VAR_3->name);
  return 1;
 }
 if (VAR_2 != ((void*)0)) {
  FUNC_3("Refusing non-whitelisted %s request", VAR_3->name);
  return 0;
 }
 return 1;
}
