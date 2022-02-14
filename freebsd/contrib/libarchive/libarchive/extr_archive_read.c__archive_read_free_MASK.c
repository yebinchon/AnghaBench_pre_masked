
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {struct archive_read_passphrase* dataset; } ;
struct TYPE_11__ {int state; scalar_t__ magic; int error_string; } ;
struct TYPE_8__ {struct archive_read_passphrase* first; } ;
struct archive_read_passphrase {int (* cleanup_archive_extract ) (struct archive_read_passphrase*) ;TYPE_3__ client; TYPE_5__ archive; int entry; struct archive_read_passphrase* passphrase; struct archive_read_passphrase* next; TYPE_2__ passphrases; TYPE_4__* bidders; TYPE_1__* formats; TYPE_1__* format; } ;
struct archive_read {int (* cleanup_archive_extract ) (struct archive_read_passphrase*) ;TYPE_3__ client; TYPE_5__ archive; int entry; struct archive_read* passphrase; struct archive_read* next; TYPE_2__ passphrases; TYPE_4__* bidders; TYPE_1__* formats; TYPE_1__* format; } ;
struct archive {int dummy; } ;
struct TYPE_10__ {int (* free ) (TYPE_4__*) ;} ;
struct TYPE_7__ {int (* cleanup ) (struct archive_read_passphrase*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_5__*) ;
 int FUNC_1 (struct archive_read_passphrase*) ;
 int FUNC_2 (struct archive*,int ,int,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct archive_read_passphrase*) ;
 int FUNC_7 (struct archive_read_passphrase*,int ,int ) ;
 int FUNC_8 (struct archive_read_passphrase*) ;
 int FUNC_9 (struct archive_read_passphrase*) ;
 int FUNC_10 (struct archive_read_passphrase*) ;
 int FUNC_11 (TYPE_4__*) ;

__attribute__((used)) static int
FUNC_12(struct archive *VAR_5)
{
 struct archive_read *VAR_6 = (struct archive_read *)VAR_5;
 struct archive_read_passphrase *VAR_7;
 int VAR_8, VAR_9;
 int VAR_10;
 int VAR_11 = VAR_0;

 if (VAR_5 == ((void*)0))
  return (VAR_0);
 FUNC_2(VAR_5, VAR_1,
     VAR_2 | VAR_4, "archive_read_free");
 if (VAR_6->archive.state != VAR_3
     && VAR_6->archive.state != VAR_4)
  VAR_11 = FUNC_4(&VAR_6->archive);


 if (VAR_6->cleanup_archive_extract != ((void*)0))
  VAR_11 = (VAR_6->cleanup_archive_extract)(VAR_6);


 VAR_10 = sizeof(VAR_6->formats) / sizeof(VAR_6->formats[0]);
 for (VAR_8 = 0; VAR_8 < VAR_10; VAR_8++) {
  VAR_6->format = &(VAR_6->formats[VAR_8]);
  if (VAR_6->formats[VAR_8].cleanup)
   (VAR_6->formats[VAR_8].cleanup)(VAR_6);
 }


 FUNC_1(VAR_6);


 VAR_9 = sizeof(VAR_6->bidders)/sizeof(VAR_6->bidders[0]);
 for (VAR_8 = 0; VAR_8 < VAR_9; VAR_8++) {
  if (VAR_6->bidders[VAR_8].free != ((void*)0)) {
   int VAR_12 = (VAR_6->bidders[VAR_8].free)(&VAR_6->bidders[VAR_8]);
   if (VAR_12 < VAR_11)
    VAR_11 = VAR_12;
  }
 }


 VAR_7 = VAR_6->passphrases.first;
 while (VAR_7 != ((void*)0)) {
  struct archive_read_passphrase *VAR_13 = VAR_7->next;


  FUNC_7(VAR_7->passphrase, 0, FUNC_8(VAR_7->passphrase));
  FUNC_6(VAR_7->passphrase);
  FUNC_6(VAR_7);
  VAR_7 = VAR_13;
 }

 FUNC_5(&VAR_6->archive.error_string);
 FUNC_3(VAR_6->entry);
 VAR_6->archive.magic = 0;
 FUNC_0(&VAR_6->archive);
 FUNC_6(VAR_6->client.dataset);
 FUNC_6(VAR_6);
 return (VAR_11);
}
