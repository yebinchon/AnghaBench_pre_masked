
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct read_ce_req {scalar_t__ offset; struct file_info* file; } ;
struct read_ce_queue {int cnt; int allocated; struct read_ce_req* reqs; } ;
struct iso9660 {scalar_t__ current_position; scalar_t__ volume_size; struct read_ce_queue read_ce_req; scalar_t__ logical_block_size; } ;
struct file_info {int mode; scalar_t__ offset; scalar_t__ ce_offset; scalar_t__ ce_size; } ;
struct archive_read {int archive; TYPE_1__* format; } ;
typedef int p ;
typedef scalar_t__ int32_t ;
struct TYPE_2__ {scalar_t__ data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,int ,char*) ;
 struct read_ce_req* FUNC_1 (int,int) ;
 int FUNC_2 (struct read_ce_req*) ;
 int FUNC_3 (struct read_ce_req*,struct read_ce_req*,int) ;

__attribute__((used)) static int
FUNC_4(struct archive_read *VAR_6, int32_t VAR_7,
    struct file_info *VAR_8)
{
 struct iso9660 *VAR_9;
 struct read_ce_queue *VAR_10;
 struct read_ce_req *VAR_11;
 uint64_t VAR_12, VAR_13;
 int VAR_14, VAR_15;

 VAR_9 = (struct iso9660 *)(VAR_6->format->data);
 VAR_12 = ((uint64_t)VAR_7) * (uint64_t)VAR_9->logical_block_size;
 if (((VAR_8->mode & VAR_0) == VAR_1 &&
     VAR_12 >= VAR_8->offset) ||
     VAR_12 < VAR_9->current_position ||
     (((uint64_t)VAR_8->ce_offset) + VAR_8->ce_size)
       > (uint64_t)VAR_9->logical_block_size ||
     VAR_12 + VAR_8->ce_offset + VAR_8->ce_size
    > VAR_9->volume_size) {
  FUNC_0(&VAR_6->archive, VAR_2,
      "Invalid parameter in SUSP \"CE\" extension");
  return (VAR_3);
 }


 VAR_10 = &(VAR_9->read_ce_req);
 if (VAR_10->cnt >= VAR_10->allocated) {
  int VAR_16;

  if (VAR_10->allocated < 16)
   VAR_16 = 16;
  else
   VAR_16 = VAR_10->allocated * 2;

  if (VAR_16 <= VAR_10->allocated) {
   FUNC_0(&VAR_6->archive, VAR_5, "Out of memory");
   return (VAR_3);
  }
  VAR_11 = FUNC_1(VAR_16, sizeof(VAR_11[0]));
  if (VAR_11 == ((void*)0)) {
   FUNC_0(&VAR_6->archive, VAR_5, "Out of memory");
   return (VAR_3);
  }
  if (VAR_10->reqs != ((void*)0)) {
   FUNC_3(VAR_11, VAR_10->reqs, VAR_10->cnt * sizeof(*VAR_11));
   FUNC_2(VAR_10->reqs);
  }
  VAR_10->reqs = VAR_11;
  VAR_10->allocated = VAR_16;
 }




 VAR_14 = VAR_10->cnt++;
 while (VAR_14 > 0) {
  VAR_15 = (VAR_14 - 1)/2;
  VAR_13 = VAR_10->reqs[VAR_15].offset;
  if (VAR_12 >= VAR_13) {
   VAR_10->reqs[VAR_14].offset = VAR_12;
   VAR_10->reqs[VAR_14].file = VAR_8;
   return (VAR_4);
  }

  VAR_10->reqs[VAR_14] = VAR_10->reqs[VAR_15];
  VAR_14 = VAR_15;
 }
 VAR_10->reqs[0].offset = VAR_12;
 VAR_10->reqs[0].file = VAR_8;
 return (VAR_4);
}
