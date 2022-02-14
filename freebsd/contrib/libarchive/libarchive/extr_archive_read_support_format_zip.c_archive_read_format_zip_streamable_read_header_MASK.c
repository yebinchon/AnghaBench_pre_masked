
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zip_entry {int dummy; } ;
struct zip {scalar_t__ has_encrypted_entries; scalar_t__ unconsumed; scalar_t__ hctx_valid; scalar_t__ cctx_valid; scalar_t__ tctx_valid; int hctx; int cctx; int * entry; int * zip_entries; } ;
struct TYPE_4__ {char* archive_format_name; int archive_format; } ;
struct archive_read {TYPE_2__ archive; TYPE_1__* format; } ;
struct archive_entry {int dummy; } ;
typedef int ssize_t ;
typedef scalar_t__ int64_t ;
struct TYPE_3__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 char* FUNC_0 (struct archive_read*,int,int*) ;
 int FUNC_1 (struct archive_read*,scalar_t__) ;
 int FUNC_2 (struct archive_read*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_2__*,int ,char*) ;
 int * FUNC_6 (int) ;
 int FUNC_7 (int *,int ,int) ;
 int FUNC_8 (struct archive_read*,struct archive_entry*,struct zip*) ;

__attribute__((used)) static int
FUNC_9(struct archive_read *VAR_5,
    struct archive_entry *VAR_6)
{
 struct zip *VAR_7;

 VAR_5->archive.archive_format = VAR_2;
 if (VAR_5->archive.archive_format_name == ((void*)0))
  VAR_5->archive.archive_format_name = "ZIP";

 VAR_7 = (struct zip *)(VAR_5->format->data);
 if (VAR_7->has_encrypted_entries ==
   VAR_3)
  VAR_7->has_encrypted_entries = 0;


 if (VAR_7->zip_entries == ((void*)0)) {
  VAR_7->zip_entries = FUNC_6(sizeof(struct zip_entry));
  if (VAR_7->zip_entries == ((void*)0)) {
   FUNC_5(&VAR_5->archive, VAR_4,
       "Out  of memory");
   return VAR_1;
  }
 }
 VAR_7->entry = VAR_7->zip_entries;
 FUNC_7(VAR_7->entry, 0, sizeof(struct zip_entry));

 if (VAR_7->cctx_valid)
  FUNC_3(&VAR_7->cctx);
 if (VAR_7->hctx_valid)
  FUNC_4(&VAR_7->hctx);
 VAR_7->tctx_valid = VAR_7->cctx_valid = VAR_7->hctx_valid = 0;
 FUNC_2(VAR_5);


 FUNC_1(VAR_5, VAR_7->unconsumed);
 VAR_7->unconsumed = 0;
 for (;;) {
  int64_t VAR_8 = 0;
  const char *VAR_9, *VAR_10;
  ssize_t VAR_11;

  VAR_9 = FUNC_0(VAR_5, 4, &VAR_11);
  if (VAR_9 == ((void*)0))
   return (VAR_1);
  VAR_10 = VAR_9 + VAR_11;

  while (VAR_9 + 4 <= VAR_10) {
   if (VAR_9[0] == 'P' && VAR_9[1] == 'K') {
    if (VAR_9[2] == '\003' && VAR_9[3] == '\004') {

     FUNC_1(VAR_5, VAR_8);
     return FUNC_8(VAR_5,
         VAR_6, VAR_7);
    }
                              if (VAR_9[2] == '\001' && VAR_9[3] == '\002') {
                                      return (VAR_0);
                              }



                              if ((VAR_9[2] == '\005' && VAR_9[3] == '\006')
                                  || (VAR_9[2] == '\006' && VAR_9[3] == '\006'))
                                      return (VAR_0);
   }
   ++VAR_9;
   ++VAR_8;
  }
  FUNC_1(VAR_5, VAR_8);
 }
}
