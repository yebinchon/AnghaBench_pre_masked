
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtree_option {int dummy; } ;
struct archive_read {int archive; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int FUNC_1 (struct mtree_option*) ;
 int FUNC_2 (struct mtree_option**,char const*,size_t) ;
 int * FUNC_3 (char const*,char) ;
 size_t FUNC_4 (char const*,char*) ;
 scalar_t__ FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (char const*,char*) ;

__attribute__((used)) static int
FUNC_7(struct archive_read *VAR_3,
    struct mtree_option **VAR_4, const char *VAR_5)
{
 const char *VAR_6;
 size_t VAR_7;

 VAR_5 += 6;
 if (FUNC_3(VAR_5, '=') != ((void*)0)) {
  FUNC_0(&VAR_3->archive, VAR_0,
      "/unset shall not contain `='");
  return VAR_1;
 }

 for (;;) {
  VAR_6 = VAR_5 + FUNC_6(VAR_5, " \t\r\n");
  if (*VAR_6 == '\0')
   return (VAR_2);
  VAR_5 = VAR_6;
  VAR_7 = FUNC_4(VAR_5, " \t\r\n");

  if (VAR_7 == 3 && FUNC_5(VAR_5, "all", 3) == 0) {
   FUNC_1(*VAR_4);
   *VAR_4 = ((void*)0);
  } else {
   FUNC_2(VAR_4, VAR_5, VAR_7);
  }

  VAR_5 += VAR_7;
 }
}
