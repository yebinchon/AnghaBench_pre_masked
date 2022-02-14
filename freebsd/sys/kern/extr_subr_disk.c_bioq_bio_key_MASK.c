
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uoff_t ;
struct bio_queue_head {scalar_t__ last_offset; } ;
struct bio {scalar_t__ bio_offset; } ;



__attribute__((used)) static inline uoff_t
FUNC_0(struct bio_queue_head *VAR_0, struct bio *VAR_1)
{

 return ((uoff_t)(VAR_1->bio_offset - VAR_0->last_offset));
}
