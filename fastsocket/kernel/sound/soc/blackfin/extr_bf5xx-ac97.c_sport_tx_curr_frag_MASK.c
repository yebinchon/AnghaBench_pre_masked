
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sport_device {unsigned int tx_curr_frag; unsigned int tx_fragsize; } ;


 unsigned int FUNC_0 (struct sport_device*) ;

__attribute__((used)) static unsigned int FUNC_1(struct sport_device *VAR_0)
{
 return VAR_0->tx_curr_frag = FUNC_0(VAR_0) /
   VAR_0->tx_fragsize;
}
