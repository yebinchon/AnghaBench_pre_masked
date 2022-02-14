
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef void fm801_info ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (void*,int,int) ;
 int FUNC_3 (void*,int,int,int) ;

__attribute__((used)) static int
FUNC_4(struct fm801_info *VAR_15)
{
 u_int32_t VAR_16;


 FUNC_3(VAR_15, VAR_0, 0x0020,2);
 FUNC_0(100000);
 FUNC_3(VAR_15, VAR_0, 0x0000,2);
 FUNC_0(100000);

 FUNC_3(VAR_15, VAR_13, 0x0808,2);
 FUNC_3(VAR_15, VAR_1, 0x0808,2);
 FUNC_3(VAR_15, VAR_2, 0x0808,2);
 FUNC_3(VAR_15, 0x40,0x107f,2);

 FUNC_3((void *)VAR_15, VAR_14, 0x0000,2);


 VAR_16 = FUNC_2((void *)VAR_15, VAR_3,2);
 FUNC_3(VAR_15, VAR_3,
  (VAR_16 & ~(VAR_5 | VAR_6 | VAR_4)) |
  VAR_7,2);
 FUNC_3(VAR_15, VAR_8,
  VAR_10 | VAR_11 | VAR_9 |
  VAR_12,2);

 FUNC_1("FM801 init Ok\n");
 return 0;
}
