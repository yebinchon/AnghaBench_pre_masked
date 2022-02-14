
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_blk_outhdr {int sector; int type; } ;
typedef struct virtio_blk_outhdr uint8_t ;
typedef int uint16_t ;
struct vqueue_info {int dummy; } ;
struct iovec {int iov_len; struct virtio_blk_outhdr* iov_base; } ;
struct beri_vtblk_softc {int ident; int beri_mem_offset; } ;
typedef int off_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int,int) ;
 int VAR_2 ;
 struct virtio_blk_outhdr VAR_3 ;
 struct virtio_blk_outhdr VAR_4 ;
 struct virtio_blk_outhdr VAR_5 ;
 int VAR_6 ;




 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct iovec*,int ) ;
 struct iovec* FUNC_5 (struct iovec*,int) ;
 int FUNC_6 (struct virtio_blk_outhdr*,int ,int ) ;
 int FUNC_7 (int ,struct vqueue_info*,struct iovec*,int,int *) ;
 int FUNC_8 (struct vqueue_info*,struct iovec*,int,int) ;
 int FUNC_9 (struct beri_vtblk_softc*,struct iovec*,int,int,int,int) ;

__attribute__((used)) static void
FUNC_10(struct beri_vtblk_softc *VAR_8, struct vqueue_info *VAR_9)
{
 struct iovec VAR_10[VAR_7 + 2];
 uint16_t VAR_11[VAR_7 + 2];
 struct virtio_blk_outhdr *VAR_12;
 struct iovec *VAR_13;
 uint8_t *VAR_14;
 off_t VAR_15;
 int VAR_16;
 int VAR_17;
 int VAR_18, VAR_19;
 int VAR_20;

 VAR_19 = FUNC_7(VAR_8->beri_mem_offset, VAR_9, VAR_10,
  VAR_7 + 2, VAR_11);
 FUNC_0(VAR_19 >= 2 && VAR_19 <= VAR_7 + 2,
  ("wrong n value %d", VAR_19));

 VAR_13 = FUNC_5(VAR_10, VAR_19);
 VAR_12 = VAR_10[0].iov_base;

 VAR_14 = VAR_10[VAR_19-1].iov_base;
 FUNC_0(VAR_10[VAR_19-1].iov_len == 1,
  ("iov_len == %d", VAR_10[VAR_19-1].iov_len));

 VAR_17 = FUNC_2(VAR_12->type) & ~VAR_6;
 VAR_15 = FUNC_3(VAR_12->sector) * VAR_0;

 VAR_16 = 0;
 for (VAR_18 = 1; VAR_18 < (VAR_19-1); VAR_18++) {
  VAR_16 += VAR_10[VAR_18].iov_len;
 }

 switch (VAR_17) {
 case 128:
 case 129:
  VAR_20 = FUNC_9(VAR_8, VAR_13 + 1, VAR_18 - 1,
   VAR_15, VAR_17, VAR_16);
  break;
 case 130:

  FUNC_6(VAR_10[1].iov_base, VAR_8->ident,
      FUNC_1(VAR_10[1].iov_len, sizeof(VAR_8->ident)));
  VAR_20 = 0;
  break;
 case 131:

 default:
  VAR_20 = -VAR_1;
  break;
 }

 if (VAR_20 < 0) {
  if (VAR_20 == -VAR_1) {
   *VAR_14 = VAR_5;
  } else
   *VAR_14 = VAR_3;
 } else
  *VAR_14 = VAR_4;

 FUNC_4(VAR_13, VAR_2);
 FUNC_8(VAR_9, VAR_10, VAR_19, 1);
}
