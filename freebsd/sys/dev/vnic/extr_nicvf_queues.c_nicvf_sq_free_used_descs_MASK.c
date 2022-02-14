
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct sq_hdr_subdesc {scalar_t__ subdesc_type; int subdesc_cnt; } ;
struct snd_queue {int head; struct snd_buff* snd_buff; int snd_buff_dmat; } ;
struct snd_buff {int * mbuf; int dmap; } ;
struct nicvf {int dummy; } ;


 scalar_t__ FUNC_0 (struct snd_queue*,int) ;
 int FUNC_1 (struct snd_queue*) ;
 int FUNC_2 (struct snd_queue*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct snd_queue*,int) ;
 int FUNC_6 (struct nicvf*,int ,int) ;

__attribute__((used)) static void
FUNC_7(struct nicvf *VAR_2, struct snd_queue *VAR_3, int VAR_4)
{
 uint64_t VAR_5;
 struct snd_buff *VAR_6;
 struct sq_hdr_subdesc *VAR_7;

 FUNC_1(VAR_3);
 VAR_5 = FUNC_6(VAR_2, VAR_0, VAR_4) >> 4;
 while (VAR_3->head != VAR_5) {
  VAR_7 = (struct sq_hdr_subdesc *)FUNC_0(VAR_3, VAR_3->head);
  if (VAR_7->subdesc_type != VAR_1) {
   FUNC_5(VAR_3, 1);
   continue;
  }
  VAR_6 = &VAR_3->snd_buff[VAR_3->head];
  if (VAR_6->mbuf != ((void*)0)) {
   FUNC_3(VAR_3->snd_buff_dmat, VAR_6->dmap);
   FUNC_4(VAR_6->mbuf);
   VAR_3->snd_buff[VAR_3->head].mbuf = ((void*)0);
  }
  FUNC_5(VAR_3, VAR_7->subdesc_cnt + 1);
 }
 FUNC_2(VAR_3);
}
