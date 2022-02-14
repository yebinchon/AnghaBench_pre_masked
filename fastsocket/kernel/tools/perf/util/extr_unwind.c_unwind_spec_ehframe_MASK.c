
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u64 ;
struct machine {int dummy; } ;
struct eh_frame_hdr {int fde_count_enc; int eh_frame_ptr_enc; int data; int enc; } ;
struct dso {int dummy; } ;
typedef int ssize_t ;
typedef int hdr ;


 int VAR_0 ;
 int FUNC_0 (struct dso*,struct machine*,scalar_t__,int *,int) ;
 scalar_t__ FUNC_1 (int *,int *,int ) ;

__attribute__((used)) static int FUNC_2(struct dso *VAR_1, struct machine *VAR_2,
          u64 VAR_3, u64 *VAR_4, u64 *VAR_5,
          u64 *VAR_6)
{
 struct eh_frame_hdr VAR_7;
 u8 *VAR_8 = (u8 *) &VAR_7.enc;
 u8 *VAR_9 = (u8 *) &VAR_7.data;
 ssize_t VAR_10;

 VAR_10 = FUNC_0(VAR_1, VAR_2, VAR_3,
      (u8 *) &VAR_7, sizeof(VAR_7));
 if (VAR_10 != sizeof(VAR_7))
  return -VAR_0;


 FUNC_1(VAR_8, VAR_9, VAR_7.eh_frame_ptr_enc);

 *VAR_6 = FUNC_1(VAR_8, VAR_9, VAR_7.fde_count_enc);
 *VAR_5 = VAR_3;
 *VAR_4 = (VAR_8 - (u8 *) &VAR_7) + VAR_3;
 return 0;
}
