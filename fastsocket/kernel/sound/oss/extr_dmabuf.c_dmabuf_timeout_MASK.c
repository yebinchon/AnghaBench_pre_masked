
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dma_buffparms {int fragment_size; int data_rate; } ;


 int VAR_0 ;

__attribute__((used)) static long FUNC_0(struct dma_buffparms *VAR_1)
{
 long VAR_2;

 VAR_2 = (VAR_1->fragment_size * VAR_0) / VAR_1->data_rate;
 VAR_2 += VAR_0 / 5;
 if (VAR_2 < (VAR_0 / 2))
  VAR_2 = VAR_0 / 2;
 if (VAR_2 > 20 * VAR_0)
  VAR_2 = 20 * VAR_0;
 return VAR_2;
}
