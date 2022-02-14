
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct z_info {scalar_t__ z_maxfeed; } ;
struct pcm_feeder {scalar_t__ data; } ;
struct pcm_channel {int dummy; } ;


 int FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (struct pcm_feeder*,struct pcm_channel*,int *,int ,void*) ;

__attribute__((used)) static int
FUNC_2(struct pcm_feeder *VAR_0, struct pcm_channel *VAR_1, uint8_t *VAR_2,
    uint32_t VAR_3, void *VAR_4)
{
 uint32_t VAR_5, VAR_6, VAR_7;




 VAR_6 = ((struct z_info *)(VAR_0->data))->z_maxfeed;
 VAR_7 = VAR_3;

 do {
  VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2,
      FUNC_0(VAR_6, VAR_7), VAR_4);
  VAR_2 += VAR_5;
  VAR_7 -= VAR_5;
 } while (VAR_7 != 0 && VAR_5 != 0);

 return (VAR_3 - VAR_7);
}
