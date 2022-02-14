
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_rr_queue {scalar_t__ q_lastoff; int q_bionum; int q_seekdist; } ;
struct bio {scalar_t__ bio_offset; int bio_length; } ;
typedef int off_t ;


 int FUNC_0 (int *,int) ;

__attribute__((used)) static inline void
FUNC_1(struct g_rr_queue *VAR_0, struct bio *VAR_1)
{
 off_t VAR_2;

 if (VAR_0->q_lastoff > VAR_1->bio_offset)
  VAR_2 = VAR_0->q_lastoff - VAR_1->bio_offset;
 else
  VAR_2 = VAR_1->bio_offset - VAR_0->q_lastoff;

 if (VAR_2 > (8192 * 8))
  VAR_2 = 8192 * 8;

 VAR_0->q_lastoff = VAR_1->bio_offset + VAR_1->bio_length;

 if (VAR_0->q_bionum > 7)
  FUNC_0(&VAR_0->q_seekdist, VAR_2);
}
