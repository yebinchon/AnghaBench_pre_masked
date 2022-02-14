
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_filter {int * close; scalar_t__ data; scalar_t__ archive; } ;
struct archive_write {int bytes_in_last_block; int bytes_per_block; int (* client_writer ) (int *,int *,scalar_t__,int) ;scalar_t__ passphrase; int * client_data; int archive; int (* client_closer ) (int *,int *) ;} ;
struct archive_none {scalar_t__ next; scalar_t__ buffer; int buffer_size; int avail; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct archive_none*) ;
 int FUNC_1 (scalar_t__,int ,int) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int *,int *,scalar_t__,int) ;
 int FUNC_4 (int *,int *) ;

__attribute__((used)) static int
FUNC_5(struct archive_write_filter *VAR_2)
{
 struct archive_write *VAR_3 = (struct archive_write *)VAR_2->archive;
 struct archive_none *VAR_4 = (struct archive_none *)VAR_2->data;
 ssize_t VAR_5;
 ssize_t VAR_6;
 ssize_t VAR_7;
 int VAR_8 = VAR_1;


 if (VAR_4->next != VAR_4->buffer) {
  VAR_5 = VAR_4->buffer_size - VAR_4->avail;


  if (VAR_3->bytes_in_last_block <= 0)

   VAR_6 = VAR_3->bytes_per_block;
  else

   VAR_6 = VAR_3->bytes_in_last_block *
       ( (VAR_5 + VAR_3->bytes_in_last_block - 1) /
           VAR_3->bytes_in_last_block);
  if (VAR_6 > VAR_3->bytes_per_block)
   VAR_6 = VAR_3->bytes_per_block;
  if (VAR_5 < VAR_6) {
   FUNC_1(VAR_4->next, 0,
       VAR_6 - VAR_5);
   VAR_5 = VAR_6;
  }
  VAR_7 = (VAR_3->client_writer)(&VAR_3->archive,
      VAR_3->client_data, VAR_4->buffer, VAR_5);
  VAR_8 = VAR_7 <= 0 ? VAR_0 : VAR_1;
 }
 if (VAR_3->client_closer)
  (*VAR_3->client_closer)(&VAR_3->archive, VAR_3->client_data);
 FUNC_0(VAR_4->buffer);
 FUNC_0(VAR_4);

 VAR_2->close = ((void*)0);
 VAR_3->client_data = ((void*)0);

 if (VAR_3->passphrase != ((void*)0)) {
  FUNC_1(VAR_3->passphrase, 0, FUNC_2(VAR_3->passphrase));
  FUNC_0(VAR_3->passphrase);
  VAR_3->passphrase = ((void*)0);
 }
 return (VAR_8);
}
