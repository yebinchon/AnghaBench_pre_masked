
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snd_ali {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct snd_ali*,int ) ;
 int FUNC_1 (unsigned int,int ) ;
 int FUNC_2 (int,int ) ;

__attribute__((used)) static void FUNC_3(struct snd_ali *VAR_7,
    unsigned int VAR_8,
    unsigned int VAR_9,
    unsigned int VAR_10,
    unsigned int VAR_11,
    unsigned int VAR_12,
    unsigned int VAR_13,
    unsigned int VAR_14,
    unsigned int VAR_15,
    unsigned int VAR_16,
    unsigned int VAR_17,
    unsigned int VAR_18)
{
 unsigned int VAR_19[4];

 FUNC_1((unsigned char)(VAR_8 & 0x001f), FUNC_0(VAR_7, VAR_4));

 VAR_19[0] = (VAR_10 << 16) | (VAR_13 & 0x0000ffff);
 VAR_19[1] = VAR_9;
 VAR_19[2] = (VAR_11 << 16) | (VAR_12 & 0x0ffff);
 VAR_19[3] = (VAR_14 << 31) |
        ((VAR_15 & 0x0000007f) << 24) |
        ((VAR_16 & 0x000000ff) << 16) |
        ((VAR_17 & 0x0000000f) << 12) |
        (VAR_18 & 0x00000fff);

 FUNC_1(VAR_8, FUNC_0(VAR_7, VAR_4));

 FUNC_2(VAR_19[0], FUNC_0(VAR_7, VAR_0));
 FUNC_2(VAR_19[1], FUNC_0(VAR_7, VAR_6));
 FUNC_2(VAR_19[2], FUNC_0(VAR_7, VAR_3));
 FUNC_2(VAR_19[3], FUNC_0(VAR_7, VAR_5));

 FUNC_2(0x30000000, FUNC_0(VAR_7, VAR_1));
 FUNC_2(0x30000000, FUNC_0(VAR_7, VAR_2));
}
