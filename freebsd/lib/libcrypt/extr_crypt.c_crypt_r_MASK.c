
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypt_format {int (* func ) (char const*,char const*,char*) ;int * magic; int * name; } ;
struct crypt_data {char* __buf; } ;
struct TYPE_2__ {int (* func ) (char const*,char const*,char*) ;} ;


 int VAR_0 ;
 int FUNC_0 (char const*,char const*,char*) ;
 TYPE_1__* VAR_1 ;
 struct crypt_format* VAR_2 ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,int ) ;
 char const* FUNC_3 (char const*,int *) ;

char *
FUNC_4(const char *VAR_3, const char *VAR_4, struct crypt_data *VAR_5)
{
 const struct crypt_format *VAR_6;
 int (*VAR_7)(const char *, const char *, char *);




 for (VAR_6 = VAR_2; VAR_6->name != ((void*)0); ++VAR_6)
  if (VAR_6->magic != ((void*)0) && FUNC_3(VAR_4, VAR_6->magic) == VAR_4) {
   VAR_7 = VAR_6->func;
   goto match;
  }







 VAR_7 = VAR_1->func;
match:
 if (VAR_7(VAR_3, VAR_4, VAR_5->__buf) != 0)
  return (((void*)0));
 return (VAR_5->__buf);
}
