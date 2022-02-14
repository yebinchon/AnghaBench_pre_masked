
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int wchar_t ;
struct tar {int realsize; int init_default_conversion; struct sparse_block* sparse_list; int entry_bytes_remaining; int * sconv_default; int * sconv; int * opt_sconv; scalar_t__ realsize_override; scalar_t__ entry_offset; } ;
struct sparse_block {int remaining; int offset; int hole; struct sparse_block* next; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct archive_entry {int dummy; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct archive_entry*) ;
 char* FUNC_1 (struct archive_entry*) ;
 int* FUNC_2 (struct archive_entry*) ;
 int FUNC_3 (struct archive_entry*,int) ;
 int FUNC_4 (struct archive_entry*,int ) ;
 int FUNC_5 (struct archive_entry*,int) ;
 int FUNC_6 (struct archive_entry*,int ,int ) ;
 int * FUNC_7 (int *) ;
 int FUNC_8 (struct archive_read*,struct tar*,int ,int ) ;
 int FUNC_9 (struct tar*) ;
 size_t FUNC_10 (char const*) ;
 int FUNC_11 (struct archive_read*,size_t*) ;
 int FUNC_12 (struct archive_read*,struct tar*,struct archive_entry*,size_t*) ;
 size_t FUNC_13 (int const*) ;

__attribute__((used)) static int
FUNC_14(struct archive_read *VAR_4,
    struct archive_entry *VAR_5)
{
 static int VAR_6;
 static int VAR_7;
 struct tar *VAR_8;
 const char *VAR_9;
 const wchar_t *VAR_10;
 int VAR_11;
 size_t VAR_12, VAR_13 = 0;


 FUNC_3(VAR_5, 1 + VAR_7);
 FUNC_5(VAR_5, ++VAR_6);

 if (VAR_6 >= 0xffff) {
  ++VAR_7;
  VAR_6 = 0;
 }

 VAR_8 = (struct tar *)(VAR_4->format->data);
 VAR_8->entry_offset = 0;
 FUNC_9(VAR_8);
 VAR_8->realsize = -1;
 VAR_8->realsize_override = 0;


 VAR_8->sconv = VAR_8->opt_sconv;
 if (VAR_8->sconv == ((void*)0)) {
  if (!VAR_8->init_default_conversion) {
   VAR_8->sconv_default =
       FUNC_7(&(VAR_4->archive));
   VAR_8->init_default_conversion = 1;
  }
  VAR_8->sconv = VAR_8->sconv_default;
 }

 VAR_11 = FUNC_12(VAR_4, VAR_8, VAR_5, &VAR_13);

 FUNC_11(VAR_4, &VAR_13);





 if (VAR_8->sparse_list == ((void*)0)) {
  if (FUNC_8(VAR_4, VAR_8, 0, VAR_8->entry_bytes_remaining)
      != VAR_3)
   return (VAR_2);
 } else {
  struct sparse_block *VAR_14;

  for (VAR_14 = VAR_8->sparse_list; VAR_14 != ((void*)0); VAR_14 = VAR_14->next) {
   if (!VAR_14->hole)
    FUNC_6(VAR_5,
        VAR_14->offset, VAR_14->remaining);
  }
 }

 if (VAR_11 == VAR_3 && FUNC_0(VAR_5) == VAR_1) {





  if ((VAR_10 = FUNC_2(VAR_5)) != ((void*)0)) {
   VAR_12 = FUNC_13(VAR_10);
   if (VAR_12 > 0 && VAR_10[VAR_12 - 1] == L'/') {
    FUNC_4(VAR_5, VAR_0);
   }
  } else if ((VAR_9 = FUNC_1(VAR_5)) != ((void*)0)) {
   VAR_12 = FUNC_10(VAR_9);
   if (VAR_12 > 0 && VAR_9[VAR_12 - 1] == '/') {
    FUNC_4(VAR_5, VAR_0);
   }
  }
 }
 return (VAR_11);
}
