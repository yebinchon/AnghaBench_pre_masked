
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct au_info {int* x; int* y; int* z; scalar_t__* routes; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct au_info*,int,int,int) ;
 int FUNC_2 (struct au_info*,int) ;
 int FUNC_3 (struct au_info*,int) ;
 int FUNC_4 (struct au_info*,int ,int,int) ;
 int FUNC_5 (struct au_info*,int ,int,int,int) ;
 int FUNC_6 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_8, struct au_info *VAR_9)
{
 u_int32_t VAR_10, VAR_11;

 FUNC_5(VAR_9, 0, VAR_6, 0xffffffff, 4);
 FUNC_0(100000);



 for (VAR_10=0; VAR_10<32; VAR_10++) {
  FUNC_5(VAR_9, 0, VAR_3+(VAR_10<<2), 0, 4);
  FUNC_0(10000);
 }
 if (1) {
  FUNC_5(VAR_9, 0, VAR_5, 0x8068, 4);
  FUNC_0(10000);
  FUNC_5(VAR_9, 0, VAR_5, 0x00e8, 4);
  FUNC_0(10000);
 } else {
  FUNC_5(VAR_9, 0, VAR_5, 0x00a8, 4);
   FUNC_0(100000);
  FUNC_5(VAR_9, 0, VAR_5, 0x80a8, 4);
  FUNC_0(100000);
  FUNC_5(VAR_9, 0, VAR_5, 0x80e8, 4);
  FUNC_0(100000);
  FUNC_5(VAR_9, 0, VAR_5, 0x80a8, 4);
  FUNC_0(100000);
  FUNC_5(VAR_9, 0, VAR_5, 0x00a8, 4);
  FUNC_0(100000);
  FUNC_5(VAR_9, 0, VAR_5, 0x00e8, 4);
  FUNC_0(100000);
 }


 for (VAR_10=0; VAR_10<32; VAR_10++) {
  FUNC_5(VAR_9, 0, VAR_3+(VAR_10<<2), 0, 4);
  FUNC_0(10000);
 }
 FUNC_5(VAR_9, 0, VAR_5, 0xe8, 4);
 FUNC_0(10000);
 FUNC_5(VAR_9, 0, VAR_4, 0, 4);


 VAR_10=VAR_11=0;
 while (VAR_11<100 && (VAR_10 & VAR_0)==0) {
  VAR_10=FUNC_4(VAR_9, 0, VAR_5, 4);
  FUNC_0(1000);
  VAR_11++;
 }
 if (VAR_11==100) FUNC_6(VAR_8, "codec not ready, status 0x%x\n", VAR_10);



 for (VAR_10=0; VAR_10<32; VAR_10++) VAR_9->x[VAR_10]=VAR_10+0x67;
 for (VAR_10=0; VAR_10<128; VAR_10++) VAR_9->y[VAR_10]=0x7f;
 for (VAR_10=0; VAR_10<128; VAR_10++) VAR_9->z[VAR_10]=0x1f;
 FUNC_5(VAR_9, 0, VAR_2, 0, 4);
 for (VAR_10=0; VAR_10<124; VAR_10++) FUNC_5(VAR_9, 0, VAR_7+(VAR_10<<2), 0xffffffff, 4);


 VAR_10=FUNC_4(VAR_9, 0, 0x107c0, 4);
  if (VAR_10!=0xdeadbeef) FUNC_6(VAR_8, "dma check failed: 0x%x\n", VAR_10);


 FUNC_5(VAR_9, 0, VAR_6,
       FUNC_4(VAR_9, 0, VAR_6, 4) | VAR_1, 4);



 VAR_9->routes[0]=VAR_9->routes[1]=VAR_9->routes[2]=VAR_9->routes[3]=0;



 FUNC_1(VAR_9, 0x11, 0x48, 0x02);
 FUNC_1(VAR_9, 0x11, 0x49, 0x03);
 FUNC_3(VAR_9, 0);
 FUNC_3(VAR_9, 1);

 for (VAR_10=0; VAR_10<48; VAR_10++) FUNC_5(VAR_9, 0, 0xf800+(VAR_10<<2), 0x20, 4);
 for (VAR_10=2; VAR_10<6; VAR_10++) FUNC_5(VAR_9, 0, 0xf800+(VAR_10<<2), 0, 4);
 FUNC_5(VAR_9, 0, 0xf8c0, 0x0843, 4);
 for (VAR_10=0; VAR_10<4; VAR_10++) FUNC_2(VAR_9, VAR_10);

 return (0);
}
