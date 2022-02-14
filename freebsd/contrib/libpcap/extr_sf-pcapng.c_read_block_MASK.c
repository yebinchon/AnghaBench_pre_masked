
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct block_header {int block_type; int total_length; } ;
typedef struct block_header u_char ;
struct pcap_ng_sf {int max_blocksize; } ;
struct block_trailer {int dummy; } ;
struct block_cursor {size_t data_remaining; int block_type; struct block_header* data; } ;
struct TYPE_3__ {int bufsize; void* buffer; scalar_t__ swapped; struct pcap_ng_sf* priv; } ;
typedef TYPE_1__ pcap_t ;
typedef int bhdr ;
typedef int FILE ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 int FUNC_1 (void*,struct block_header*,int) ;
 int FUNC_2 (char*,int ,char*,...) ;
 int FUNC_3 (int *,struct block_header*,size_t,int,char*) ;
 void* FUNC_4 (void*,int) ;

__attribute__((used)) static int
FUNC_5(FILE *VAR_1, pcap_t *VAR_2, struct block_cursor *VAR_3, char *VAR_4)
{
 struct pcap_ng_sf *VAR_5;
 int VAR_6;
 struct block_header VAR_7;
 u_char *VAR_8;
 size_t VAR_9;

 VAR_5 = VAR_2->priv;

 VAR_6 = FUNC_3(VAR_1, &VAR_7, sizeof(VAR_7), 0, VAR_4);
 if (VAR_6 <= 0)
  return (VAR_6);

 if (VAR_2->swapped) {
  VAR_7.block_type = FUNC_0(VAR_7.block_type);
  VAR_7.total_length = FUNC_0(VAR_7.total_length);
 }
 if (VAR_7.total_length > 16*1024*1024) {
  FUNC_2(VAR_4, VAR_0,
      "pcapng block size %u > maximum %u",
      VAR_7.total_length, 16*1024*1024);
      return (-1);
 }





 if (VAR_7.total_length < sizeof(struct block_header) +
     sizeof(struct block_trailer)) {
  FUNC_2(VAR_4, VAR_0,
      "block in pcapng dump file has a length of %u < %lu",
      VAR_7.total_length,
      (unsigned long)(sizeof(struct block_header) + sizeof(struct block_trailer)));
  return (-1);
 }




 if (VAR_2->bufsize < VAR_7.total_length) {



  void *VAR_10;

  if (VAR_7.total_length > VAR_5->max_blocksize) {
   FUNC_2(VAR_4, VAR_0, "block is larger than maximum block size %u",
       VAR_5->max_blocksize);
   return (-1);
  }
  VAR_10 = FUNC_4(VAR_2->buffer, VAR_7.total_length);
  if (VAR_10 == ((void*)0)) {
   FUNC_2(VAR_4, VAR_0, "out of memory");
   return (-1);
  }
  VAR_2->buffer = VAR_10;
 }





 FUNC_1(VAR_2->buffer, &VAR_7, sizeof(VAR_7));
 VAR_8 = (u_char *)VAR_2->buffer + sizeof(VAR_7);
 VAR_9 = VAR_7.total_length - sizeof(VAR_7);
 if (FUNC_3(VAR_1, VAR_8, VAR_9, 1, VAR_4) == -1)
  return (-1);




 VAR_3->data = VAR_8;
 VAR_3->data_remaining = VAR_9 - sizeof(struct block_trailer);
 VAR_3->block_type = VAR_7.block_type;
 return (1);
}
