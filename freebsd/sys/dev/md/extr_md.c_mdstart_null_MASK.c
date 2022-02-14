
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct md_s {int dummy; } ;
struct bio {int bio_cmd; scalar_t__ bio_resid; int bio_length; int bio_data; } ;




 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int
FUNC_2(struct md_s *VAR_0, struct bio *VAR_1)
{

 switch (VAR_1->bio_cmd) {
 case 129:
  FUNC_0(VAR_1->bio_data, VAR_1->bio_length);
  FUNC_1(VAR_1->bio_data, VAR_1->bio_length);
  break;
 case 128:
  break;
 }
 VAR_1->bio_resid = 0;
 return (0);
}
