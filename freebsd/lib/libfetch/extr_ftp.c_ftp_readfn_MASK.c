
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ftpio {scalar_t__ dir; scalar_t__ err; int eof; int * dconn; int * cconn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *,char*,int) ;

__attribute__((used)) static int
FUNC_1(void *VAR_4, char *VAR_5, int VAR_6)
{
 struct ftpio *VAR_7;
 int VAR_8;

 VAR_7 = (struct ftpio *)VAR_4;
 if (VAR_7 == ((void*)0)) {
  VAR_3 = VAR_0;
  return (-1);
 }
 if (VAR_7->cconn == ((void*)0) || VAR_7->dconn == ((void*)0) || VAR_7->dir == VAR_2) {
  VAR_3 = VAR_0;
  return (-1);
 }
 if (VAR_7->err) {
  VAR_3 = VAR_7->err;
  return (-1);
 }
 if (VAR_7->eof)
  return (0);
 VAR_8 = FUNC_0(VAR_7->dconn, VAR_5, VAR_6);
 if (VAR_8 > 0)
  return (VAR_8);
 if (VAR_8 == 0) {
  VAR_7->eof = 1;
  return (0);
 }
 if (VAR_3 != VAR_1)
  VAR_7->err = VAR_3;
 return (-1);
}
