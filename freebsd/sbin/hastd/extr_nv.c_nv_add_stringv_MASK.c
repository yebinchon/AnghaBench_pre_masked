
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;
struct nv {scalar_t__ nv_error; } ;
typedef int ssize_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct nv*,unsigned char const*,int,int ,char const*) ;
 int FUNC_2 (char**,char const*,int ) ;

void
FUNC_3(struct nv *VAR_2, const char *VAR_3, const char *VAR_4,
    va_list VAR_5)
{
 char *VAR_6;
 ssize_t VAR_7;

 VAR_7 = FUNC_2(&VAR_6, VAR_4, VAR_5);
 if (VAR_7 == -1) {
  if (VAR_2->nv_error == 0)
   VAR_2->nv_error = VAR_0;
  return;
 }
 VAR_7++;
 FUNC_1(VAR_2, (const unsigned char *)VAR_6, VAR_7, VAR_1, VAR_3);
 FUNC_0(VAR_6);
}
