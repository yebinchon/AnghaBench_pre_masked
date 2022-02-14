
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct tomoyo_io_buffer {int readbuf_size; int writebuf_size; struct tomoyo_io_buffer* read_buf; void* write_buf; int * write; int * read; int io_sem; } ;
struct file {int f_mode; struct tomoyo_io_buffer* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 void* FUNC_1 (int) ;
 int FUNC_2 (struct tomoyo_io_buffer*) ;
 int FUNC_3 (struct file*,int *,int ) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 int * VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int * VAR_11 ;
 int * VAR_12 ;
 int * VAR_13 ;
 int * VAR_14 ;
 int * VAR_15 ;
 int * VAR_16 ;
 int * VAR_17 ;
 int * VAR_18 ;

__attribute__((used)) static int FUNC_4(const u8 VAR_19, struct file *VAR_20)
{
 struct tomoyo_io_buffer *VAR_21 = FUNC_1(sizeof(*VAR_21));

 if (!VAR_21)
  return -VAR_0;
 FUNC_0(&VAR_21->io_sem);
 switch (VAR_19) {
 case 136:

  VAR_21->write = VAR_12;
  VAR_21->read = VAR_3;
  break;
 case 134:

  VAR_21->write = VAR_14;
  VAR_21->read = VAR_5;
  break;
 case 129:

  VAR_21->read = VAR_10;
  break;
 case 135:

  VAR_21->write = VAR_13;
  VAR_21->read = VAR_4;
  break;
 case 131:

  VAR_21->write = VAR_17;
  VAR_21->read = VAR_8;
  break;
 case 128:

  VAR_21->read = VAR_11;
  VAR_21->readbuf_size = 128;
  break;
 case 132:

  VAR_21->write = VAR_16;
  VAR_21->read = VAR_7;
  VAR_21->readbuf_size = 512;
  break;
 case 130:

  VAR_21->write = VAR_18;
  VAR_21->read = VAR_9;
  break;
 case 133:

  VAR_21->write = VAR_15;
  VAR_21->read = VAR_6;
  break;
 }
 if (!(VAR_20->f_mode & VAR_1)) {




  VAR_21->read = ((void*)0);
 } else {
  if (!VAR_21->readbuf_size)
   VAR_21->readbuf_size = 4096 * 2;
  VAR_21->read_buf = FUNC_1(VAR_21->readbuf_size);
  if (!VAR_21->read_buf) {
   FUNC_2(VAR_21);
   return -VAR_0;
  }
 }
 if (!(VAR_20->f_mode & VAR_2)) {




  VAR_21->write = ((void*)0);
 } else if (VAR_21->write) {
  VAR_21->writebuf_size = 4096 * 2;
  VAR_21->write_buf = FUNC_1(VAR_21->writebuf_size);
  if (!VAR_21->write_buf) {
   FUNC_2(VAR_21->read_buf);
   FUNC_2(VAR_21);
   return -VAR_0;
  }
 }
 VAR_20->private_data = VAR_21;







 if (VAR_19 == 129)
  FUNC_3(VAR_20, ((void*)0), 0);
 return 0;
}
