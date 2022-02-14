
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct au_info {scalar_t__ interrupts; int unit; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct au_info*,int ,int ,int,int) ;
 int FUNC_2 (char*,int) ;

__attribute__((used)) static int
FUNC_3(struct au_info *VAR_3)
{
 FUNC_1(VAR_3, 0, VAR_2, 0x80001000, 4);
 FUNC_1(VAR_3, 0, VAR_0, 0x00001030, 4);
 FUNC_1(VAR_3, 0, VAR_1, 0x000007ff, 4);
 FUNC_0(1000000);
 if (VAR_3->interrupts==0) FUNC_2("pcm%d: irq test failed\n", VAR_3->unit);

 return 0;
}
