
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stack {int dummy; } ;
struct bio {int bio_flags; int bio_children; int bio_attribute; int bio_ma_offset; int bio_ma_n; int bio_ma; int bio_data; int bio_offset; int bio_length; int bio_cmd; struct bio* bio_parent; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*,struct bio*,struct bio*) ;
 int FUNC_1 (int,struct stack*,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct stack*) ;
 struct bio* FUNC_3 (int ,int) ;

struct bio *
FUNC_4(struct bio *VAR_8)
{
 struct bio *VAR_9;

 VAR_9 = FUNC_3(VAR_6, VAR_4 | VAR_5);
 VAR_9->bio_flags = VAR_8->bio_flags & (VAR_0 | VAR_1);
 VAR_9->bio_parent = VAR_8;
 VAR_9->bio_cmd = VAR_8->bio_cmd;
 VAR_9->bio_length = VAR_8->bio_length;
 VAR_9->bio_offset = VAR_8->bio_offset;
 VAR_9->bio_data = VAR_8->bio_data;
 VAR_9->bio_ma = VAR_8->bio_ma;
 VAR_9->bio_ma_n = VAR_8->bio_ma_n;
 VAR_9->bio_ma_offset = VAR_8->bio_ma_offset;
 VAR_9->bio_attribute = VAR_8->bio_attribute;
 VAR_8->bio_children++;
 return(VAR_9);
}
