
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bio {int bio_cmd; } ;






 int VAR_0 ;
 int FUNC_0 (struct bio*) ;
 int FUNC_1 (struct bio*,int ) ;

__attribute__((used)) static void
FUNC_2(struct bio *VAR_1)
{

 switch (VAR_1->bio_cmd) {
 case 131:
 case 129:
 case 128:
  FUNC_0(VAR_1);
  break;
 case 130:
  FUNC_1(VAR_1, VAR_0);
  break;
 default:
  FUNC_1(VAR_1, VAR_0);
  return;
 }
 return;
}
