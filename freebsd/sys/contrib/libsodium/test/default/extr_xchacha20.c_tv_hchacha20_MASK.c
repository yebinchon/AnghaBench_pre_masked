
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* member_0; char* member_1; char* member_2; char* key; char* in; char* out; } ;
typedef TYPE_1__ HChaCha20TV ;


 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned char*,unsigned char*,unsigned char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 scalar_t__ FUNC_6 (unsigned char*,unsigned char*,int) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (unsigned char*) ;
 int FUNC_9 (unsigned char*,int,char*,int,int *,int *,int *) ;
 scalar_t__ FUNC_10 (int) ;
 int FUNC_11 (char*) ;

__attribute__((used)) static void
FUNC_12(void)
{
    static const HChaCha20TV VAR_4[] = {
        { "24f11cce8a1b3d61e441561a696c1c1b7e173d084fd4812425435a8896a013dc", "d9660c5900ae19ddad28d6e06e45fe5e", "5966b3eec3bff1189f831f06afe4d4e3be97fa9235ec8c20d08acfbbb4e851e3" },
        { "80a5f6272031e18bb9bcd84f3385da65e7731b7039f13f5e3d475364cd4d42f7", "c0eccc384b44c88e92c57eb2d5ca4dfa", "6ed11741f724009a640a44fce7320954c46e18e0d7ae063bdbc8d7cf372709df" },
        { "cb1fc686c0eec11a89438b6f4013bf110e7171dace3297f3a657a309b3199629", "fcd49b93e5f8f299227e64d40dc864a3", "84b7e96937a1a0a406bb7162eeaad34308d49de60fd2f7ec9dc6a79cbab2ca34" },
        { "6640f4d80af5496ca1bc2cfff1fefbe99638dbceaabd7d0ade118999d45f053d", "31f59ceeeafdbfe8cae7914caeba90d6", "9af4697d2f5574a44834a2c2ae1a0505af9f5d869dbe381a994a18eb374c36a0" },
        { "0693ff36d971225a44ac92c092c60b399e672e4cc5aafd5e31426f123787ac27", "3a6293da061da405db45be1731d5fc4d", "f87b38609142c01095bfc425573bb3c698f9ae866b7e4216840b9c4caf3b0865" },
        { "809539bd2639a23bf83578700f055f313561c7785a4a19fc9114086915eee551", "780c65d6a3318e479c02141d3f0b3918", "902ea8ce4680c09395ce71874d242f84274243a156938aaa2dd37ac5be382b42" },
        { "1a170ddf25a4fd69b648926e6d794e73408805835c64b2c70efddd8cd1c56ce0", "05dbee10de87eb0c5acb2b66ebbe67d3", "a4e20b634c77d7db908d387b48ec2b370059db916e8ea7716dc07238532d5981" },
        { "3b354e4bb69b5b4a1126f509e84cad49f18c9f5f29f0be0c821316a6986e15a6", "d8a89af02f4b8b2901d8321796388b6c", "9816cb1a5b61993735a4b161b51ed2265b696e7ded5309c229a5a99f53534fbc" },
        { "4b9a818892e15a530db50dd2832e95ee192e5ed6afffb408bd624a0c4e12a081", "a9079c551de70501be0286d1bc78b045", "ebc5224cf41ea97473683b6c2f38a084bf6e1feaaeff62676db59d5b719d999b" },
        { "c49758f00003714c38f1d4972bde57ee8271f543b91e07ebce56b554eb7fa6a7", "31f0204e10cf4f2035f9e62bb5ba7303", "0dd8cc400f702d2c06ed920be52048a287076b86480ae273c6d568a2e9e7518c" }
    };
    const HChaCha20TV *VAR_5;
    unsigned char *VAR_6;
    unsigned char *VAR_7;
    unsigned char *VAR_8;
    unsigned char *VAR_9;
    unsigned char *VAR_10;
    size_t VAR_11;

    VAR_6 = (unsigned char *) FUNC_10(VAR_0);
    VAR_7 = (unsigned char *) FUNC_10(VAR_2);
    VAR_8 = (unsigned char *) FUNC_10(VAR_1);
    VAR_9 = (unsigned char *) FUNC_10(VAR_3);
    VAR_10 = (unsigned char *) FUNC_10(VAR_3);
    for (VAR_11 = 0; VAR_11 < (sizeof VAR_4) / (sizeof VAR_4[0]); VAR_11++) {
        VAR_5 = &VAR_4[VAR_11];
        FUNC_9(VAR_7, VAR_2,
                       VAR_5->key, FUNC_11(VAR_5->key), ((void*)0), ((void*)0), ((void*)0));
        FUNC_9(VAR_8, VAR_1,
                       VAR_5->in, FUNC_11(VAR_5->in), ((void*)0), ((void*)0), ((void*)0));
        FUNC_9(VAR_9, VAR_3,
                       VAR_5->out, FUNC_11(VAR_5->out), ((void*)0), ((void*)0), ((void*)0));
        FUNC_1(VAR_10, VAR_8, VAR_7, ((void*)0));
        FUNC_0(FUNC_6(VAR_9, VAR_10, VAR_3) == 0);
    }

    FUNC_9(VAR_6, VAR_0,
                   "0d29b795c1ca70c1652e823364d32417",
                   VAR_0 * 2 + 1, ((void*)0), ((void*)0), ((void*)0));
    FUNC_9(VAR_9, VAR_3,
                   "934d941d78eb9bfc2f0376f7ccd4a11ecf0c6a44104618a9749ef47fe97037a2",
                   VAR_3 * 2 + 1, ((void*)0), ((void*)0), ((void*)0));

    FUNC_1(VAR_10, VAR_8, VAR_7, VAR_6);
    FUNC_0(FUNC_6(VAR_9, VAR_10, VAR_3) == 0);

    FUNC_8(VAR_10);
    FUNC_8(VAR_9);
    FUNC_8(VAR_8);
    FUNC_8(VAR_7);
    FUNC_8(VAR_6);

    FUNC_0(FUNC_5() == VAR_3);
    FUNC_0(FUNC_3() == VAR_1);
    FUNC_0(FUNC_4() == VAR_2);
    FUNC_0(FUNC_2() == VAR_0);

    FUNC_7("tv_hchacha20: ok\n");
}
