
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct mss_info {struct resource* conf_base; } ;
typedef int device_t ;


 size_t VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 size_t FUNC_2 (int ) ;
 size_t FUNC_3 (int ) ;
 int FUNC_4 (struct resource*,int,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int) ;

__attribute__((used)) static void
FUNC_7(struct mss_info *VAR_2, device_t VAR_3, struct resource *VAR_4)
{
 static const unsigned char VAR_5[16] = {
  0, 0, 0, 3, 0, 2, 0, 4, 0, 1, 0, 5, 6, 0, 0, 7
 };
 static const unsigned char VAR_6[8] = {
  0, 1, 0, 2, 0, 3, 4, 5
 };
 device_t VAR_7 = FUNC_1(VAR_3);
 unsigned char VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5();

 FUNC_4(VAR_4, 0x0f, 0x05);
 FUNC_4(VAR_4, 0x00, 0x0c);
 FUNC_4(VAR_4, 0x0b, 0x00);

 FUNC_4(VAR_4, 0x0f, 0x00);

 VAR_8 = VAR_5[FUNC_3(VAR_7)];

 VAR_8 |= 0x40;
 VAR_9 = VAR_6[FUNC_2(VAR_7)];
 if (FUNC_0(VAR_7) & VAR_1)
  VAR_9 |= VAR_6[FUNC_0(VAR_7) & VAR_0]
      << 3;




 FUNC_4(VAR_4, 0x00, 0x0c);
 FUNC_4(VAR_4, 0x0b, VAR_9 | 0x80);
 FUNC_4(VAR_4, 0x00, 0x4c);
 FUNC_4(VAR_4, 0x0b, VAR_8);

 FUNC_4(VAR_4, 0x00, 0x0c);
 FUNC_4(VAR_4, 0x0b, VAR_9);
 FUNC_4(VAR_4, 0x00, 0x4c);
 FUNC_4(VAR_4, 0x0b, VAR_8);

 FUNC_4(VAR_2->conf_base, 2, 0);
 FUNC_4(VAR_4, 0x00, 0x0c);
 FUNC_4(VAR_2->conf_base, 2, 0);

 FUNC_6(VAR_10);
}
