
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_dbuf {int dummy; } ;
struct pcm_channel {int dummy; } ;
struct fm801_chinfo {int dir; struct snd_dbuf* buffer; struct pcm_channel* channel; struct fm801_info* parent; } ;
struct fm801_info {int bufsz; int parent_dmat; struct fm801_chinfo rch; struct fm801_chinfo pch; } ;
typedef int kobj_t ;


 int FUNC_0 (char*,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct snd_dbuf*,int ,int ,int ) ;

__attribute__((used)) static void *
FUNC_2(kobj_t VAR_1, void *VAR_2, struct snd_dbuf *VAR_3, struct pcm_channel *VAR_4, int VAR_5)
{
 struct fm801_info *VAR_6 = (struct fm801_info *)VAR_2;
 struct fm801_chinfo *VAR_7 = (VAR_5 == VAR_0)? &VAR_6->pch : &VAR_6->rch;

 FUNC_0("fm801ch_init, direction = %d\n", VAR_5);
 VAR_7->parent = VAR_6;
 VAR_7->channel = VAR_4;
 VAR_7->buffer = VAR_3;
 VAR_7->dir = VAR_5;
 if (FUNC_1(VAR_7->buffer, VAR_6->parent_dmat, 0, VAR_6->bufsz) != 0)
  return ((void*)0);
 return (void *)VAR_7;
}
