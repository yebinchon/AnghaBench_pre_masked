
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct archive_read_passphrase {char* passphrase; struct archive_read_passphrase* next; } ;
struct TYPE_2__ {int candidate; char* (* callback ) (int *,int ) ;int client_data; struct archive_read_passphrase* first; } ;
struct archive_read {TYPE_1__ passphrases; int archive; } ;


 int FUNC_0 (struct archive_read*,struct archive_read_passphrase*) ;
 int FUNC_1 (struct archive_read*,struct archive_read_passphrase*) ;
 struct archive_read_passphrase* FUNC_2 (struct archive_read*,char const*) ;
 struct archive_read_passphrase* FUNC_3 (struct archive_read*) ;
 char* FUNC_4 (int *,int ) ;

const char *
FUNC_5(struct archive_read *VAR_0)
{
 struct archive_read_passphrase *VAR_1;
 const char *VAR_2;

 if (VAR_0->passphrases.candidate < 0) {

  int VAR_3 = 0;

  for (VAR_1 = VAR_0->passphrases.first; VAR_1 != ((void*)0); VAR_1 = VAR_1->next)
   VAR_3++;
  VAR_0->passphrases.candidate = VAR_3;
  VAR_1 = VAR_0->passphrases.first;
 } else if (VAR_0->passphrases.candidate > 1) {

  VAR_0->passphrases.candidate--;
  VAR_1 = FUNC_3(VAR_0);
  FUNC_0(VAR_0, VAR_1);

  VAR_1 = VAR_0->passphrases.first;
 } else if (VAR_0->passphrases.candidate == 1) {

  VAR_0->passphrases.candidate = 0;
  if (VAR_0->passphrases.first->next != ((void*)0)) {

   VAR_1 = FUNC_3(VAR_0);
   FUNC_0(VAR_0, VAR_1);
  }
  VAR_1 = ((void*)0);
 } else
  VAR_1 = ((void*)0);

 if (VAR_1 != ((void*)0))
  VAR_2 = VAR_1->passphrase;
 else if (VAR_0->passphrases.callback != ((void*)0)) {



  VAR_2 = VAR_0->passphrases.callback(&VAR_0->archive,
      VAR_0->passphrases.client_data);
  if (VAR_2 != ((void*)0)) {
   VAR_1 = FUNC_2(VAR_0, VAR_2);
   if (VAR_1 == ((void*)0))
    return (((void*)0));
   FUNC_1(VAR_0, VAR_1);
   VAR_0->passphrases.candidate = 1;
  }
 } else
  VAR_2 = ((void*)0);

 return (VAR_2);
}
