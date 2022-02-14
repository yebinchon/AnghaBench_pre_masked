
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_mstring {scalar_t__ aes_set; } ;


 int FUNC_0 (struct archive_mstring*,char const*,int ) ;
 int FUNC_1 (char const*) ;

int
FUNC_2(struct archive_mstring *VAR_0, const char *VAR_1)
{
 if (VAR_1 == ((void*)0)) {
  VAR_0->aes_set = 0;
  return (0);
 }
 return (FUNC_0(VAR_0, VAR_1, FUNC_1(VAR_1)));
}
