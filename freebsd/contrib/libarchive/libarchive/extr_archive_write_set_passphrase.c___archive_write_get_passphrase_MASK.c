
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write {char const* passphrase; char* (* passphrase_callback ) (int *,int ) ;int archive; int passphrase_client_data; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*) ;
 char const* FUNC_1 (char const*) ;
 char* FUNC_2 (int *,int ) ;

const char *
FUNC_3(struct archive_write *VAR_1)
{

 if (VAR_1->passphrase != ((void*)0))
  return (VAR_1->passphrase);

 if (VAR_1->passphrase_callback != ((void*)0)) {
  const char *VAR_2;
  VAR_2 = VAR_1->passphrase_callback(&VAR_1->archive,
      VAR_1->passphrase_client_data);
  if (VAR_2 != ((void*)0)) {
   VAR_1->passphrase = FUNC_1(VAR_2);
   if (VAR_1->passphrase == ((void*)0)) {
    FUNC_0(&VAR_1->archive, VAR_0,
        "Can't allocate data for passphrase");
    return (((void*)0));
   }
   return (VAR_1->passphrase);
  }
 }
 return (((void*)0));
}
