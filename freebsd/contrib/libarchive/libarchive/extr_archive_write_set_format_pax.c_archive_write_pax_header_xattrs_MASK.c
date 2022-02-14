
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* s; } ;
struct pax {TYPE_1__ l_url_encoded_name; int sconv_utf8; } ;
struct archive_write {int archive; } ;
struct archive_entry {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct archive_entry*,char const**,void const**,size_t*) ;
 int FUNC_1 (struct archive_entry*) ;
 int FUNC_2 (int *,scalar_t__,char*) ;
 int FUNC_3 (TYPE_1__*,char*,int ) ;
 int FUNC_4 (struct pax*,char*,void const*,size_t) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*) ;
 char* FUNC_6 (char const*) ;

__attribute__((used)) static int
FUNC_7(struct archive_write *VAR_4,
    struct pax *VAR_5, struct archive_entry *VAR_6)
{
 int VAR_7 = FUNC_1(VAR_6);

 while (VAR_7--) {
  const char *VAR_8;
  const void *VAR_9;
  char *VAR_10 = ((void*)0), *VAR_11 = ((void*)0);
  size_t VAR_12;
  int VAR_13;

  FUNC_0(VAR_6, &VAR_8, &VAR_9, &VAR_12);
  VAR_10 = FUNC_6(VAR_8);
  if (VAR_10 != ((void*)0)) {

   VAR_13 = FUNC_3(&(VAR_5->l_url_encoded_name),
       VAR_10, VAR_5->sconv_utf8);
   FUNC_5(VAR_10);
   if (VAR_13 == 0)
    VAR_11 = VAR_5->l_url_encoded_name.s;
   else if (VAR_3 == VAR_2) {
    FUNC_2(&VAR_4->archive, VAR_2,
        "Can't allocate memory for Linkname");
    return (VAR_0);
   }
  }

  FUNC_4(VAR_5, VAR_11,
      VAR_9, VAR_12);

 }
 return (VAR_1);
}
