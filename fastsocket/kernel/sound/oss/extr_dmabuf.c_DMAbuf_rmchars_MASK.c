
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_buffparms {int* counts; size_t qhead; int mapping_flags; scalar_t__ qlen; int fragment_size; int nbufs; } ;
struct audio_operations {struct dma_buffparms* dmap_in; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct audio_operations** VAR_3 ;

int FUNC_0(int VAR_4, int VAR_5, int VAR_6)
{
 struct audio_operations *VAR_7 = VAR_3[VAR_4];
 struct dma_buffparms *VAR_8 = VAR_7->dmap_in;
 int VAR_9 = VAR_8->counts[VAR_8->qhead] + VAR_6;

 if (VAR_8->mapping_flags & VAR_0)
 {

  return -VAR_1;
 }
 else if (VAR_8->qlen <= 0)
  return -VAR_2;
 else if (VAR_9 >= VAR_8->fragment_size) {
  VAR_8->counts[VAR_8->qhead] = 0;
  VAR_8->qlen--;
  VAR_8->qhead = (VAR_8->qhead + 1) % VAR_8->nbufs;
 }
 else VAR_8->counts[VAR_8->qhead] = VAR_9;

 return 0;
}
