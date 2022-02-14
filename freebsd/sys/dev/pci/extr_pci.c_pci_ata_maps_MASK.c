
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct resource_list {int dummy; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int,struct resource_list*,int,int) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int ,int,int) ;
 int FUNC_4 (int ,int,int,int) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (struct resource_list*,int,int,int,int,int) ;
 int FUNC_7 (struct resource_list*,int ,int ,int,int*,int,int,int,int ) ;

__attribute__((used)) static void
FUNC_8(device_t VAR_4, device_t VAR_5, struct resource_list *VAR_6, int VAR_7,
    uint32_t VAR_8)
{
 int VAR_9, VAR_10, VAR_11;
 VAR_11 = FUNC_3(VAR_5, VAR_2, 1);
 VAR_10 = VAR_3;
 if (VAR_11 & VAR_0) {
  FUNC_1(VAR_4, VAR_5, FUNC_0(0), VAR_6, VAR_7,
      VAR_8 & (1 << 0));
  FUNC_1(VAR_4, VAR_5, FUNC_0(1), VAR_6, VAR_7,
      VAR_8 & (1 << 1));
 } else {
  VAR_9 = FUNC_0(0);
  FUNC_6(VAR_6, VAR_10, VAR_9, 0x1f0, 0x1f7, 8);
  (void)FUNC_7(VAR_6, VAR_4, VAR_5, VAR_10, &VAR_9, 0x1f0,
      0x1f7, 8, 0);
  VAR_9 = FUNC_0(1);
  FUNC_6(VAR_6, VAR_10, VAR_9, 0x3f6, 0x3f6, 1);
  (void)FUNC_7(VAR_6, VAR_4, VAR_5, VAR_10, &VAR_9, 0x3f6,
      0x3f6, 1, 0);
 }
 if (VAR_11 & VAR_1) {
  FUNC_1(VAR_4, VAR_5, FUNC_0(2), VAR_6, VAR_7,
      VAR_8 & (1 << 2));
  FUNC_1(VAR_4, VAR_5, FUNC_0(3), VAR_6, VAR_7,
      VAR_8 & (1 << 3));
 } else {
  VAR_9 = FUNC_0(2);
  FUNC_6(VAR_6, VAR_10, VAR_9, 0x170, 0x177, 8);
  (void)FUNC_7(VAR_6, VAR_4, VAR_5, VAR_10, &VAR_9, 0x170,
      0x177, 8, 0);
  VAR_9 = FUNC_0(3);
  FUNC_6(VAR_6, VAR_10, VAR_9, 0x376, 0x376, 1);
  (void)FUNC_7(VAR_6, VAR_4, VAR_5, VAR_10, &VAR_9, 0x376,
      0x376, 1, 0);
 }
 FUNC_1(VAR_4, VAR_5, FUNC_0(4), VAR_6, VAR_7,
     VAR_8 & (1 << 4));
 FUNC_1(VAR_4, VAR_5, FUNC_0(5), VAR_6, VAR_7,
     VAR_8 & (1 << 5));
}
