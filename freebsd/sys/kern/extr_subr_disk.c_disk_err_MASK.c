
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct bio {int bio_cmd; int bio_bcount; scalar_t__ bio_pblkno; TYPE_1__* bio_disk; int * bio_dev; } ;
typedef int intmax_t ;
typedef scalar_t__ daddr_t ;
struct TYPE_2__ {char* d_name; char* d_unit; } ;







 int VAR_0 ;
 char* FUNC_0 (int *) ;
 int FUNC_1 (char*,...) ;

void
FUNC_2(struct bio *VAR_1, const char *VAR_2, int VAR_3, int VAR_4)
{
 daddr_t VAR_5;

 if (VAR_1->bio_dev != ((void*)0))
  FUNC_1("%s: %s ", FUNC_0(VAR_1->bio_dev), VAR_2);
 else if (VAR_1->bio_disk != ((void*)0))
  FUNC_1("%s%d: %s ",
      VAR_1->bio_disk->d_name, VAR_1->bio_disk->d_unit, VAR_2);
 else
  FUNC_1("disk??: %s ", VAR_2);
 switch(VAR_1->bio_cmd) {
 case 129: FUNC_1("cmd=read "); break;
 case 128: FUNC_1("cmd=write "); break;
 case 132: FUNC_1("cmd=delete "); break;
 case 130: FUNC_1("cmd=getattr "); break;
 case 131: FUNC_1("cmd=flush "); break;
 default: FUNC_1("cmd=%x ", VAR_1->bio_cmd); break;
 }
 VAR_5 = VAR_1->bio_pblkno;
 if (VAR_1->bio_bcount <= VAR_0) {
  FUNC_1("fsbn %jd%s", (intmax_t)VAR_5, VAR_4 ? "\n" : "");
  return;
 }
 if (VAR_3 >= 0) {
  VAR_5 += VAR_3;
  FUNC_1("fsbn %jd of ", (intmax_t)VAR_5);
 }
 FUNC_1("%jd-%jd", (intmax_t)VAR_1->bio_pblkno,
     (intmax_t)(VAR_1->bio_pblkno + (VAR_1->bio_bcount - 1) / VAR_0));
 if (VAR_4)
  FUNC_1("\n");
}
