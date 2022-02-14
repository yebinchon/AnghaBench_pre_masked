
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct uio {int uio_offset; int uio_resid; } ;
struct iic_msg {int member_2; int* member_3; int len; int slave; int member_1; int member_0; } ;
struct icee_softc {int size; int type; int wr_sz; int addr; int dev; } ;
struct cdev {int dummy; } ;


 struct icee_softc* FUNC_0 (struct cdev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ,struct iic_msg*,int,int ) ;
 int FUNC_4 (int*,int,struct uio*) ;

__attribute__((used)) static int
FUNC_5(struct cdev *VAR_6, struct uio *VAR_7, int VAR_8)
{
 struct icee_softc *VAR_9;
 int VAR_10, VAR_11, VAR_12, VAR_13;
 uint8_t VAR_14[VAR_5 + 2];
 struct iic_msg VAR_15[1] = {
      { 0, &VAR_4, 0, VAR_14 },
 };
 struct iic_msg VAR_16[1] = {
      { 0, &VAR_3, 1, VAR_14 },
 };

 VAR_9 = FUNC_0(VAR_6);
 if (VAR_7->uio_offset >= VAR_9->size)
  return (VAR_1);
 if (VAR_9->type != 8 && VAR_9->type != 16)
  return (VAR_0);

 VAR_12 = VAR_10 = 0;
 while (VAR_7->uio_resid > 0) {
  if (VAR_7->uio_offset >= VAR_9->size)
   break;
  VAR_11 = FUNC_1(VAR_9->wr_sz - (VAR_7->uio_offset & (VAR_9->wr_sz - 1)),
      VAR_7->uio_resid);
  switch (VAR_9->type) {
  case 8:
   VAR_12 = (VAR_7->uio_offset >> 7) | VAR_9->addr;
   VAR_15[0].len = 1 + VAR_11;
   VAR_14[0] = VAR_7->uio_offset & 0xff;
   break;
  case 16:
   VAR_12 = VAR_9->addr | (VAR_7->uio_offset >> 15);
   VAR_15[0].len = 2 + VAR_11;
   VAR_14[0] = (VAR_7->uio_offset >> 8) & 0xff;
   VAR_14[1] = VAR_7->uio_offset & 0xff;
   break;
  }
  VAR_15[0].slave = VAR_12;
  VAR_10 = FUNC_4(VAR_14 + VAR_9->type / 8, VAR_11, VAR_7);
  if (VAR_10)
   break;
  VAR_10 = FUNC_3(VAR_9->dev, VAR_15, 1, VAR_2);
  if (VAR_10) {
   VAR_10 = FUNC_2(VAR_10);
   break;
  }

  VAR_13 = 10000;
  VAR_16[0].slave = VAR_12;
  do {
   VAR_10 = FUNC_3(VAR_9->dev, VAR_16, 1,
       VAR_2);
  } while (VAR_13-- > 0 && VAR_10 != 0);
  if (VAR_10) {
   VAR_10 = FUNC_2(VAR_10);
   break;
  }
 }
 return VAR_10;
}
