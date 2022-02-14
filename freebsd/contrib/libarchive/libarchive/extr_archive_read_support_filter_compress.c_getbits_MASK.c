
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct private_data {int bits_avail; scalar_t__ avail_in; scalar_t__ consume_unnotified; int bit_buffer; int bytes_in_section; int * next_in; } ;
struct archive_read_filter {int upstream; scalar_t__ data; } ;
typedef scalar_t__ ssize_t ;


 int VAR_0 ;
 int * FUNC_0 (int ,int,scalar_t__*) ;
 int FUNC_1 (int ,scalar_t__) ;

__attribute__((used)) static int
FUNC_2(struct archive_read_filter *VAR_1, int VAR_2)
{
 struct private_data *VAR_3 = (struct private_data *)VAR_1->data;
 int VAR_4;
 ssize_t VAR_5;
 static const int VAR_6[] = {
  0x00, 0x01, 0x03, 0x07, 0x0f, 0x1f, 0x3f, 0x7f, 0xff,
  0x1ff, 0x3ff, 0x7ff, 0xfff, 0x1fff, 0x3fff, 0x7fff, 0xffff
 };

 while (VAR_3->bits_avail < VAR_2) {
  if (VAR_3->avail_in <= 0) {
   if (VAR_3->consume_unnotified) {
    FUNC_1(VAR_1->upstream,
     VAR_3->consume_unnotified);
    VAR_3->consume_unnotified = 0;
   }
   VAR_3->next_in
       = FUNC_0(VAR_1->upstream,
    1, &VAR_5);
   if (VAR_5 == 0)
    return (-1);
   if (VAR_5 < 0 || VAR_3->next_in == ((void*)0))
    return (VAR_0);
   VAR_3->consume_unnotified = VAR_3->avail_in = VAR_5;
  }
  VAR_3->bit_buffer |= *VAR_3->next_in++ << VAR_3->bits_avail;
  VAR_3->avail_in--;
  VAR_3->bits_avail += 8;
  VAR_3->bytes_in_section++;
 }

 VAR_4 = VAR_3->bit_buffer;
 VAR_3->bit_buffer >>= VAR_2;
 VAR_3->bits_avail -= VAR_2;

 return (VAR_4 & VAR_6[VAR_2]);
}
