
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcmchan_syncmember {int id; int members; struct pcmchan_syncmember* parent; } ;
struct pcmchan_syncgroup {int id; int members; struct pcmchan_syncgroup* parent; } ;
struct pcm_channel {struct pcmchan_syncmember* sm; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *,struct pcmchan_syncmember*,int ,int ) ;
 int FUNC_4 (struct pcmchan_syncmember*,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_5(struct pcm_channel *VAR_6)
{
 struct pcmchan_syncmember *VAR_7;
 struct pcmchan_syncgroup *VAR_8;
 int VAR_9;

 VAR_9 = 0;

 FUNC_1(VAR_0);

 if (VAR_6->sm != ((void*)0)) {
  VAR_7 = VAR_6->sm;
  VAR_8 = VAR_7->parent;
  VAR_6->sm = ((void*)0);

  FUNC_0(VAR_8 != ((void*)0), ("syncmember has null parent"));

  FUNC_3(&VAR_8->members, VAR_7, VAR_4, VAR_2);
  FUNC_4(VAR_7, VAR_1);

  if (FUNC_2(&VAR_8->members)) {
   FUNC_3(&VAR_5, VAR_8, VAR_3, VAR_2);
   VAR_9 = VAR_8->id;
   FUNC_4(VAR_8, VAR_1);
  }
 }

 return VAR_9;
}
