
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_bioq {int bio_queue_length; int bio_queue; } ;
struct bio {int bio_flags; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 struct bio* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct bio*,int ) ;
 int VAR_1 ;

__attribute__((used)) static struct bio *
FUNC_3(struct g_bioq *VAR_2)
{
 struct bio *VAR_3;

 VAR_3 = FUNC_1(&VAR_2->bio_queue);
 if (VAR_3 != ((void*)0)) {
  FUNC_0((VAR_3->bio_flags & VAR_0),
      ("Bio not on queue bp=%p target %p", VAR_3, VAR_2));
  VAR_3->bio_flags &= ~VAR_0;
  FUNC_2(&VAR_2->bio_queue, VAR_3, VAR_1);
  VAR_2->bio_queue_length--;
 }
 return (VAR_3);
}
