
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct snd_sg_buf {int dummy; } ;
struct snd_dma_buffer {scalar_t__ addr; struct snd_sg_buf* private_data; } ;
struct azx_dev {scalar_t__ frags; } ;
struct azx {int driver_caps; } ;
typedef scalar_t__ dma_addr_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct snd_sg_buf*,int) ;
 int FUNC_2 (struct snd_dma_buffer*,int,int) ;
 int FUNC_3 (scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct azx *VAR_3,
        struct snd_dma_buffer *VAR_4,
        struct azx_dev *VAR_5, u32 **VAR_6,
        int VAR_7, int VAR_8, int VAR_9)
{
 struct snd_sg_buf *VAR_10 = VAR_4->private_data;
 u32 *VAR_11 = *VAR_6;

 while (VAR_8 > 0) {
  dma_addr_t VAR_12;
  int VAR_13;

  if (VAR_5->frags >= VAR_1)
   return -VAR_2;




  VAR_12 = VAR_4->addr + VAR_7;


  VAR_11[0] = FUNC_0((u32)VAR_12);
  VAR_11[1] = FUNC_0(FUNC_3(VAR_12));

  VAR_13 = FUNC_2(VAR_4, VAR_7, VAR_8);

  if (VAR_3->driver_caps & VAR_0) {
   u32 VAR_14 = 0x1000 - (VAR_7 & 0xfff);
   if (VAR_13 > VAR_14)
    VAR_13 = VAR_14;
  }
  VAR_11[2] = FUNC_0(VAR_13);



  VAR_8 -= VAR_13;
  VAR_11[3] = (VAR_8 || !VAR_9) ? 0 : FUNC_0(0x01);
  VAR_11 += 4;
  VAR_5->frags++;
  VAR_7 += VAR_13;
 }
 *VAR_6 = VAR_11;
 return VAR_7;
}
