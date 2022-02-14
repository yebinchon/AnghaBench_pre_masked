
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_disk_softc {int state; scalar_t__* led; } ;
struct bio {int bio_data; } ;





 int FUNC_0 (struct bio*,int ) ;
 int FUNC_1 (scalar_t__*,char const*) ;
 int FUNC_2 (int*,int ,int) ;

__attribute__((used)) static void
FUNC_3(struct bio *VAR_0, struct g_disk_softc *VAR_1)
{
 const char *VAR_2;

 FUNC_2(&VAR_1->state, VAR_0->bio_data, sizeof(VAR_1->state));
 if (VAR_1->led[0] != 0) {
  switch (VAR_1->state) {
  case 130:
   VAR_2 = "1";
   break;
  case 129:
   VAR_2 = "f5";
   break;
  case 128:
   VAR_2 = "f1";
   break;
  default:
   VAR_2 = "0";
   break;
  }
  FUNC_1(VAR_1->led, VAR_2);
 }
 FUNC_0(VAR_0, 0);
}
