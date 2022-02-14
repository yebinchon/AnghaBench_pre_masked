
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int adapter_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,char*,...) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int FUNC_1 (int *) ;
 unsigned int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ,unsigned int) ;

void
FUNC_4(adapter_t *VAR_8)
{
 unsigned int VAR_9, VAR_10;

 VAR_10 = FUNC_2(VAR_8, VAR_0);
 if (VAR_10 & VAR_6)
  FUNC_0(VAR_8, "SGE parity error (0x%x)\n",
    VAR_10 & VAR_6);
 if (VAR_10 & VAR_5)
  FUNC_0(VAR_8, "SGE framing error (0x%x)\n",
    VAR_10 & VAR_5);
 if (VAR_10 & VAR_2)
  FUNC_0(VAR_8, "SGE response queue credit overflow\n");

 if (VAR_10 & VAR_3) {
  VAR_9 = FUNC_2(VAR_8, VAR_1);

  FUNC_0(VAR_8,
    "packet delivered to disabled response queue (0x%x)\n",
    (VAR_9 >> VAR_7) & 0xff);
 }

 FUNC_3(VAR_8, VAR_0, VAR_10);
 if (VAR_10 & VAR_4)
  FUNC_1(VAR_8);
}
