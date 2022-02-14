
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct resource {int start; } ;
struct platform_device {int dummy; } ;
struct au1xpsc_audio_dmadata {int dummy; } ;
struct TYPE_4__ {int ddma_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 TYPE_1__** VAR_7 ;
 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* FUNC_1 (int,int ) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_8)
{
 struct resource *VAR_9;
 int VAR_10;

 if (VAR_7[VAR_6] || VAR_7[VAR_5])
  return -VAR_0;


 VAR_7[VAR_6]
  = FUNC_1(sizeof(struct au1xpsc_audio_dmadata), VAR_3);
 if (!VAR_7[VAR_6])
  return -VAR_2;

 VAR_9 = FUNC_2(VAR_8, VAR_4, 0);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto out1;
 }
 (VAR_7[VAR_6])->ddma_id = VAR_9->start;


 VAR_7[VAR_5]
  = FUNC_1(sizeof(struct au1xpsc_audio_dmadata), VAR_3);
 if (!VAR_7[VAR_5])
  return -VAR_2;

 VAR_9 = FUNC_2(VAR_8, VAR_4, 1);
 if (!VAR_9) {
  VAR_10 = -VAR_1;
  goto out2;
 }
 (VAR_7[VAR_5])->ddma_id = VAR_9->start;

 return 0;

out2:
 FUNC_0(VAR_7[VAR_5]);
 VAR_7[VAR_5] = ((void*)0);
out1:
 FUNC_0(VAR_7[VAR_6]);
 VAR_7[VAR_6] = ((void*)0);
 return VAR_10;
}
