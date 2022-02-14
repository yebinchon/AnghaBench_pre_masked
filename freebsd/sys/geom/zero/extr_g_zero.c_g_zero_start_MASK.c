
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bio_cmd; int bio_flags; int bio_length; int bio_completed; int bio_data; } ;





 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct bio*,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct bio *VAR_5)
{
 int VAR_6 = VAR_1;

 switch (VAR_5->bio_cmd) {
 case 129:
  if (VAR_4 && (VAR_5->bio_flags & VAR_0) == 0)
   FUNC_1(VAR_5->bio_data, VAR_3, VAR_5->bio_length);

 case 131:
 case 128:
  VAR_5->bio_completed = VAR_5->bio_length;
  VAR_6 = 0;
  break;
 case 130:
 default:
  VAR_6 = VAR_2;
  break;
 }
 FUNC_0(VAR_5, VAR_6);
}
