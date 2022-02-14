
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_journal_softc {int sc_jconsumer; } ;
struct bio {int bio_done; int bio_cmd; int bio_length; int bio_data; int bio_joffset; int bio_offset; struct bio* bio_parent; int bio_cflags; } ;


 int VAR_0 ;
 int FUNC_0 (int,struct bio*,char*) ;
 int VAR_1 ;
 struct bio* FUNC_1 () ;
 int FUNC_2 (struct bio*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static void
FUNC_4(struct g_journal_softc *VAR_4, struct bio *VAR_5)
{
 struct bio *VAR_6;





 VAR_6 = FUNC_1();
 VAR_6->bio_cflags = VAR_5->bio_cflags;
 VAR_6->bio_parent = VAR_5;
 VAR_6->bio_offset = VAR_5->bio_joffset;
 VAR_6->bio_length = VAR_5->bio_length;
 VAR_6->bio_data = FUNC_3(VAR_5->bio_length, VAR_1);
 VAR_6->bio_cmd = VAR_0;
 VAR_6->bio_done = VAR_3;
 FUNC_0(4, VAR_6, "READ FIRST");
 FUNC_2(VAR_6, VAR_4->sc_jconsumer);
 VAR_2++;
}
