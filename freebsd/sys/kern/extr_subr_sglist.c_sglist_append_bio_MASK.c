
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sglist {int dummy; } ;
struct bio {int bio_flags; int bio_bcount; int bio_ma_offset; int bio_ma; int bio_data; } ;


 int VAR_0 ;
 int FUNC_0 (struct sglist*,int ,int ) ;
 int FUNC_1 (struct sglist*,int ,int ,int ) ;

int
FUNC_2(struct sglist *VAR_1, struct bio *VAR_2)
{
 int VAR_3;

 if ((VAR_2->bio_flags & VAR_0) == 0)
  VAR_3 = FUNC_0(VAR_1, VAR_2->bio_data, VAR_2->bio_bcount);
 else
  VAR_3 = FUNC_1(VAR_1, VAR_2->bio_ma,
      VAR_2->bio_ma_offset, VAR_2->bio_bcount);
 return (VAR_3);
}
