
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au1xpsc_audio_dmadata {int msbits; void* ddma_chan; int ddma_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct au1xpsc_audio_dmadata*) ;
 int VAR_3 ;
 int VAR_4 ;
 void* FUNC_1 (int ,int ,int ,void*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (void*,int) ;
 int FUNC_4 (void*,int) ;
 int FUNC_5 (void*) ;

__attribute__((used)) static int FUNC_6(struct au1xpsc_audio_dmadata *VAR_5,
     int VAR_6, int VAR_7)
{

 if (VAR_7 == 24)
  VAR_7 = 32;


 if ((VAR_5->ddma_chan) && (VAR_7 == VAR_5->msbits))
  goto out;

 FUNC_0(VAR_5);

 if (VAR_6 == VAR_2)
  VAR_5->ddma_chan = FUNC_1(VAR_5->ddma_id,
     VAR_0,
     VAR_3, (void *)VAR_5);
 else
  VAR_5->ddma_chan = FUNC_1(VAR_0,
     VAR_5->ddma_id,
     VAR_4, (void *)VAR_5);

 if (!VAR_5->ddma_chan)
  return -VAR_1;

 FUNC_4(VAR_5->ddma_chan, VAR_7);
 FUNC_3(VAR_5->ddma_chan, 2);

 VAR_5->msbits = VAR_7;

 FUNC_5(VAR_5->ddma_chan);
 FUNC_2(VAR_5->ddma_chan);

out:
 return 0;
}
