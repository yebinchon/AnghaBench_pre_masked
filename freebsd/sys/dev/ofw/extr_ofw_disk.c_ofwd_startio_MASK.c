
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int ;
struct ofwd_softc {int ofwd_instance; } ;
struct bio {int bio_cmd; scalar_t__ bio_length; scalar_t__ bio_resid; scalar_t__ bio_data; int bio_offset; } ;




 scalar_t__ FUNC_0 (int ,void*,scalar_t__) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ,void*,scalar_t__) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static int
FUNC_4(struct ofwd_softc *VAR_0, struct bio *VAR_1)
{
 u_int VAR_2;

 VAR_2 = FUNC_1(VAR_0->ofwd_instance, VAR_1->bio_offset);

 switch (VAR_1->bio_cmd) {
 case 129:
  VAR_2 = FUNC_0(VAR_0->ofwd_instance, (void *)VAR_1->bio_data,
     VAR_1->bio_length);
  break;
 case 128:
  VAR_2 = FUNC_2(VAR_0->ofwd_instance, (void *)VAR_1->bio_data,
     VAR_1->bio_length);
  break;
 }
 if (VAR_2 != VAR_1->bio_length)
  FUNC_3("ofwd: incorrect i/o count");

 VAR_1->bio_resid = 0;
 return (0);
}
