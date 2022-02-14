
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct zip {size_t decrypted_buffer_size; int * decrypted_buffer; int * decrypted_ptr; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int ,char*) ;
 int * FUNC_1 (size_t) ;

__attribute__((used)) static int
FUNC_2(struct archive_read *VAR_3)
{
 struct zip *VAR_4 = (struct zip *)(VAR_3->format->data);
 size_t VAR_5 = 256 * 1024;

 if (VAR_4->decrypted_buffer == ((void*)0)) {
  VAR_4->decrypted_buffer_size = VAR_5;
  VAR_4->decrypted_buffer = FUNC_1(VAR_5);
  if (VAR_4->decrypted_buffer == ((void*)0)) {
   FUNC_0(&VAR_3->archive, VAR_2,
       "No memory for ZIP decryption");
   return (VAR_0);
  }
 }
 VAR_4->decrypted_ptr = VAR_4->decrypted_buffer;
 return (VAR_1);
}
