
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct zip_entry {int format_name; struct zip_entry* v_data; struct zip_entry* erd; struct zip_entry* iv; int hctx; scalar_t__ hctx_valid; int cctx; scalar_t__ cctx_valid; struct zip_entry* decrypted_buffer; int rsrcname; struct zip_entry* next; struct zip_entry* zip_entries; int ppmd8; scalar_t__ ppmd8_valid; struct zip_entry* uncompressed_buffer; int bzstream; scalar_t__ bzstream_valid; int zipx_lzma_stream; scalar_t__ zipx_lzma_valid; int stream; scalar_t__ stream_valid; } ;
struct zip {int format_name; struct zip* v_data; struct zip* erd; struct zip* iv; int hctx; scalar_t__ hctx_valid; int cctx; scalar_t__ cctx_valid; struct zip* decrypted_buffer; int rsrcname; struct zip* next; struct zip* zip_entries; int ppmd8; scalar_t__ ppmd8_valid; struct zip* uncompressed_buffer; int bzstream; scalar_t__ bzstream_valid; int zipx_lzma_stream; scalar_t__ zipx_lzma_valid; int stream; scalar_t__ stream_valid; } ;
struct archive_read {TYPE_1__* format; } ;
struct TYPE_4__ {int (* Ppmd8_Free ) (int *) ;} ;
struct TYPE_3__ {int * data; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 TYPE_2__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct zip_entry*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int
FUNC_8(struct archive_read *VAR_2)
{
 struct zip *VAR_3;
 struct zip_entry *VAR_4, *VAR_5;

 VAR_3 = (struct zip *)(VAR_2->format->data);
 FUNC_4(VAR_3->uncompressed_buffer);

 if (VAR_3->ppmd8_valid)
  VAR_1.Ppmd8_Free(&VAR_3->ppmd8);

 if (VAR_3->zip_entries) {
  VAR_4 = VAR_3->zip_entries;
  while (VAR_4 != ((void*)0)) {
   VAR_5 = VAR_4->next;
   FUNC_3(&VAR_4->rsrcname);
   FUNC_4(VAR_4);
   VAR_4 = VAR_5;
  }
 }
 FUNC_4(VAR_3->decrypted_buffer);
 if (VAR_3->cctx_valid)
  FUNC_1(&VAR_3->cctx);
 if (VAR_3->hctx_valid)
  FUNC_2(&VAR_3->hctx);
 FUNC_4(VAR_3->iv);
 FUNC_4(VAR_3->erd);
 FUNC_4(VAR_3->v_data);
 FUNC_3(&VAR_3->format_name);
 FUNC_4(VAR_3);
 (VAR_2->format->data) = ((void*)0);
 return (VAR_0);
}
