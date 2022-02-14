
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {int dummy; } ;
struct bio {scalar_t__ bio_cmd; int bio_flags; int bio_children; int bio_track_bp; int bio_classifier2; int bio_classifier1; int bio_zone; int bio_attribute; int bio_ma_offset; int bio_ma_n; int bio_ma; int bio_data; int bio_offset; int bio_length; struct bio* bio_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int,char*,struct bio*,struct bio*) ;
 int FUNC_1 (int,struct stack*,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *,int *,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct stack*) ;
 struct bio* FUNC_4 (int ,int) ;

struct bio *
FUNC_5(struct bio *VAR_10)
{
 struct bio *VAR_11;

 VAR_11 = FUNC_4(VAR_8, VAR_6 | VAR_7);
 if (VAR_11 != ((void*)0)) {
  VAR_11->bio_parent = VAR_10;
  VAR_11->bio_cmd = VAR_10->bio_cmd;







  VAR_11->bio_flags = VAR_10->bio_flags &
      (VAR_0 | VAR_1 | VAR_2);
  VAR_11->bio_length = VAR_10->bio_length;
  VAR_11->bio_offset = VAR_10->bio_offset;
  VAR_11->bio_data = VAR_10->bio_data;
  VAR_11->bio_ma = VAR_10->bio_ma;
  VAR_11->bio_ma_n = VAR_10->bio_ma_n;
  VAR_11->bio_ma_offset = VAR_10->bio_ma_offset;
  VAR_11->bio_attribute = VAR_10->bio_attribute;
  if (VAR_10->bio_cmd == VAR_3)
   FUNC_2(&VAR_10->bio_zone, &VAR_11->bio_zone,
       sizeof(VAR_10->bio_zone));

  VAR_11->bio_classifier1 = VAR_10->bio_classifier1;
  VAR_11->bio_classifier2 = VAR_10->bio_classifier2;



  VAR_10->bio_children++;
 }
 return(VAR_11);
}
