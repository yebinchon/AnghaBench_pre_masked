
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ali {struct pci_dev* pci_m1533; } ;
struct pci_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct snd_ali*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned char VAR_4 ;
 unsigned char VAR_5 ;
 unsigned short VAR_6 ;
 unsigned char FUNC_1 (int ) ;
 unsigned short FUNC_2 (int ) ;
 int FUNC_3 (unsigned char,int ) ;
 int FUNC_4 (unsigned short,int ) ;
 int FUNC_5 (struct pci_dev*,int,unsigned char*) ;
 int FUNC_6 (struct pci_dev*,int,unsigned char) ;
 int FUNC_7 (struct snd_ali*,int ) ;

__attribute__((used)) static void FUNC_8(struct snd_ali *VAR_7)
{
 unsigned short VAR_8;
 unsigned char VAR_9;
        struct pci_dev *VAR_10;

        VAR_10 = VAR_7->pci_m1533;
        if (VAR_10 == ((void*)0))
                return;
        FUNC_5(VAR_10, 0x61, &VAR_9);
        VAR_9 |= 0x40;
        FUNC_6(VAR_10, 0x61, VAR_9);
        FUNC_5(VAR_10, 0x7d, &VAR_9);
        VAR_9 |= 0x01;
        FUNC_6(VAR_10, 0x7d, VAR_9);

        FUNC_5(VAR_10, 0x7e, &VAR_9);
        VAR_9 &= (~0x20);
        VAR_9 |= 0x10;
        FUNC_6(VAR_10, 0x7e, VAR_9);

 VAR_9 = FUNC_1(FUNC_0(VAR_7, VAR_1));
 FUNC_3(VAR_9 | VAR_5, FUNC_0(VAR_7, VAR_1));

 VAR_9 = FUNC_1(FUNC_0(VAR_7, VAR_2));
 FUNC_3(VAR_9 & VAR_4, FUNC_0(VAR_7, VAR_2));

 VAR_8 = FUNC_2(FUNC_0(VAR_7, VAR_0));
 VAR_8 |= VAR_6;
 FUNC_4(VAR_8, FUNC_0(VAR_7, VAR_0));
 FUNC_7(VAR_7, VAR_3);
}
