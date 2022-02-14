
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int hcb_p ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (char*,char*,int,unsigned int,unsigned int) ;
 char* FUNC_5 (int ) ;
 int VAR_6 ;

__attribute__((used)) static unsigned FUNC_6 (hcb_p VAR_7, int VAR_8)
{
 unsigned int VAR_9 = 0;
 unsigned int VAR_10;
 FUNC_2 (VAR_3 , 0);
 (void) FUNC_0 (VAR_4);
 FUNC_1 (VAR_1 , 0);
 (void) FUNC_0 (VAR_4);
 FUNC_1 (VAR_2, 4);
 FUNC_1 (VAR_5, 0);
 FUNC_1 (VAR_5, VAR_8);
 while (!(FUNC_0(VAR_4) & VAR_0) && VAR_9++ < 100000)
  FUNC_3 (1000);
 FUNC_1 (VAR_5, 0);





  FUNC_1 (VAR_2, 0);




 VAR_10 = VAR_9 ? ((1 << VAR_8) * 4340) / VAR_9 : 0;

 if (VAR_6 >= 2)
  FUNC_4 ("%s: Delay (GEN=%d): %u msec, %u KHz\n",
   FUNC_5(VAR_7), VAR_8, VAR_9, VAR_10);

 return VAR_10;
}
