
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct read_ce_queue {TYPE_1__* reqs; scalar_t__ cnt; } ;
struct iso9660 {size_t logical_block_size; scalar_t__ current_position; struct read_ce_queue read_ce_req; } ;
struct file_info {size_t ce_offset; size_t ce_size; } ;
struct archive_read {int archive; } ;
struct TYPE_2__ {scalar_t__ offset; struct file_info* file; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char* FUNC_0 (struct archive_read*,size_t,int *) ;
 int FUNC_1 (struct archive_read*,size_t) ;
 int FUNC_2 (int *,int ,char*) ;
 int FUNC_3 (struct read_ce_queue*) ;
 int FUNC_4 (struct archive_read*,struct file_info*,unsigned char const*,unsigned char const*) ;

__attribute__((used)) static int
FUNC_5(struct archive_read *VAR_4, struct iso9660 *VAR_5)
{
 struct read_ce_queue *VAR_6;
 const unsigned char *VAR_7, *VAR_8, *VAR_9;
 struct file_info *VAR_10;
 size_t VAR_11;
 int VAR_12;


 VAR_6 = &(VAR_5->read_ce_req);
 VAR_11 = VAR_5->logical_block_size;
 while (VAR_6->cnt &&
     VAR_6->reqs[0].offset == VAR_5->current_position) {
  VAR_7 = FUNC_0(VAR_4, VAR_11, ((void*)0));
  if (VAR_7 == ((void*)0)) {
   FUNC_2(&VAR_4->archive,
       VAR_1,
       "Failed to read full block when scanning "
       "ISO9660 directory list");
   return (VAR_2);
  }
  do {
   VAR_10 = VAR_6->reqs[0].file;
   if (VAR_10->ce_offset + VAR_10->ce_size > VAR_11) {
    FUNC_2(&VAR_4->archive,
        VAR_0,
        "Malformed CE information");
    return (VAR_2);
   }
   VAR_8 = VAR_7 + VAR_10->ce_offset;
   VAR_9 = VAR_8 + VAR_10->ce_size;
   FUNC_3(VAR_6);
   VAR_12 = FUNC_4(VAR_4, VAR_10, VAR_8, VAR_9);
   if (VAR_12 != VAR_3)
    return (VAR_2);
  } while (VAR_6->cnt &&
      VAR_6->reqs[0].offset == VAR_5->current_position);



  FUNC_1(VAR_4, VAR_11);
  VAR_5->current_position += VAR_11;
 }
 return (VAR_3);
}
