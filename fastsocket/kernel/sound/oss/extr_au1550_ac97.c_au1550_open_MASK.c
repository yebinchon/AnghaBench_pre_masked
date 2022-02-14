
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_rdev; } ;
struct file {int f_flags; int f_mode; struct au1550_state* private_data; } ;
struct TYPE_4__ {int num_channels; int sample_size; scalar_t__ total_bytes; scalar_t__ subdivision; scalar_t__ ossmaxfrags; scalar_t__ ossfragshift; } ;
struct TYPE_3__ {int num_channels; int sample_size; scalar_t__ total_bytes; scalar_t__ subdivision; scalar_t__ ossmaxfrags; scalar_t__ ossfragshift; } ;
struct au1550_state {int open_mode; int sem; int open_mutex; TYPE_2__ dma_dac; TYPE_1__ dma_adc; int open_wait; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *,int *) ;
 struct au1550_state VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (struct au1550_state*) ;
 int FUNC_9 (struct au1550_state*) ;
 int FUNC_10 (int *,int *) ;
 int FUNC_11 () ;
 int FUNC_12 (struct au1550_state*,int) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (struct au1550_state*,int) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct au1550_state*) ;
 int FUNC_17 (struct au1550_state*) ;
 int VAR_10 ;

__attribute__((used)) static int
FUNC_18(struct inode *VAR_11, struct file *VAR_12)
{
 int VAR_13 = FUNC_1(VAR_11->i_rdev);
 FUNC_0(VAR_10, VAR_9);
 struct au1550_state *VAR_14 = &VAR_8;
 int VAR_15;
 VAR_12->private_data = VAR_14;

 FUNC_5(&VAR_14->open_mutex);
 while (VAR_14->open_mode & VAR_12->f_mode) {
  if (VAR_12->f_flags & VAR_4) {
   FUNC_6(&VAR_14->open_mutex);
   return -VAR_0;
  }
  FUNC_3(&VAR_14->open_wait, &VAR_10);
  FUNC_2(VAR_6);
  FUNC_6(&VAR_14->open_mutex);
  FUNC_11();
  FUNC_10(&VAR_14->open_wait, &VAR_10);
  FUNC_13(VAR_7);
  if (FUNC_15(VAR_9))
   return -VAR_1;
  FUNC_5(&VAR_14->open_mutex);
 }

 FUNC_17(VAR_14);
 FUNC_16(VAR_14);

 if (VAR_12->f_mode & VAR_2) {
  VAR_14->dma_adc.ossfragshift = VAR_14->dma_adc.ossmaxfrags =
   VAR_14->dma_adc.subdivision = VAR_14->dma_adc.total_bytes = 0;
  VAR_14->dma_adc.num_channels = 1;
  VAR_14->dma_adc.sample_size = 8;
  FUNC_12(VAR_14, 8000);
  if ((VAR_13 & 0xf) == VAR_5)
   VAR_14->dma_adc.sample_size = 16;
 }

 if (VAR_12->f_mode & VAR_3) {
  VAR_14->dma_dac.ossfragshift = VAR_14->dma_dac.ossmaxfrags =
   VAR_14->dma_dac.subdivision = VAR_14->dma_dac.total_bytes = 0;
  VAR_14->dma_dac.num_channels = 1;
  VAR_14->dma_dac.sample_size = 8;
  FUNC_14(VAR_14, 8000);
  if ((VAR_13 & 0xf) == VAR_5)
   VAR_14->dma_dac.sample_size = 16;
 }

 if (VAR_12->f_mode & VAR_2) {
  if ((VAR_15 = FUNC_8(VAR_14)))
   return VAR_15;
 }
 if (VAR_12->f_mode & VAR_3) {
  if ((VAR_15 = FUNC_9(VAR_14)))
   return VAR_15;
 }

 VAR_14->open_mode |= VAR_12->f_mode & (VAR_2 | VAR_3);
 FUNC_6(&VAR_14->open_mutex);
 FUNC_4(&VAR_14->sem);
 return 0;
}
