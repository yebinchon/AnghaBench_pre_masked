
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_es18xx {scalar_t__ port; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct snd_es18xx *VAR_1)
{
 int VAR_2;
        FUNC_1(0x03, VAR_1->port + 0x06);
        FUNC_0(VAR_1->port + 0x06);
        FUNC_1(0x00, VAR_1->port + 0x06);
        for(VAR_2 = 0; VAR_2 < VAR_0 && !(FUNC_0(VAR_1->port + 0x0E) & 0x80); VAR_2++);
        if (FUNC_0(VAR_1->port + 0x0A) != 0xAA)
                return -1;
 return 0;
}
